struct s_nodo {			// Tenemos que cambiar la definición del nodo
   char dato;
   struct s_nodo *siguiente;
}

int main(void)
{
   struct s_nodo *primero = NULL, *ultimo = NULL;
   struct s_nodo *pila = NULL;
   int i, es_palindromo;
   char cad[100];
   char c1, c2;
   
   printf("Introduzca una frase\n");
   gets(cad);

   // Metemos todos los caracteres en una cola y en una pila
   for (i=0; i<strlen(cad); i++) {
       insertar(&primero, &ultimo, cad[i]);
       push(&pila, cad[i]);
   }

   // Sacamos los caracteres de la cola y de la pila. En una saldrán ordenados del primero
   // al último, y en la otra, al revés. Si la frase era un palíndromo todos los caracteres
   // deben coincidir al sacarlos
   es_palindromo = 1;
   while (primero != NULL) {
       c1 = sacar(&primero, &ultimo);
       c2 = pop(&pila);
       if (c1 != c2)
          es_palindromo = 0;
   }

   if (es_palindromo == 1)
       printf(“La cadena %s es un palíndromo\n”, cad);
   else
       printf(“La cadena no era un palíndromo\n”);

   return 0;
}
