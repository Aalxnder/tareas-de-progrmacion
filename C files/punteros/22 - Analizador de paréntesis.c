// La estructura s_nodo debe adaptarse para que el dato sea de tipo “char”

int main(void)
{
   struct s_nodo *pila = NULL;
   int i, correcto;
   char cad[100], c;
   
   printf("Introduzca una expresión matemática con paréntesis\n");
   gets(cad);

   // Recorremos la cadena. Cada paréntesis abierto que encontremos se insertará en la pila.
   // Cada paréntesis cerrado hará que se elimine un paréntesis abierto de la pila.
   correcto = 1;
   for (i=0; i<strlen(cad); i++) {
       if (cad[i] == '(')
           push(&pila, cad[i]);
       if (cad[i] == ')') 
       {
           c = pop(&pila);
           if (c == -1)		// Es lo que devuelve pop() si la pila está vacía
              correcto = 0;		// Se ha cerrado un paréntesis que no se había abierto
       }
   }

   // Si la pila no está vacía ahora, es que se han abierto más paréntesis de los que se
   // han cerrado
   if (pila != NULL)
       correcto = 0;

   // Mostramos el resultado
   if (correcto == 1)
       printf(“Los paréntesis de la expresión son correctos\n”));
   else
       printf(“Hay un error en los paréntesis de la expresión”);

   return 0;
}
