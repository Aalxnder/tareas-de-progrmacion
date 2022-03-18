int main(void)
{
   char cad[100];
   int i;

   printf(“Introduzca una cadena: “);
   gets(cad);

   // Recorremos la cadena buscando las vocales
   for (i = 0; i < strlen(cad); i++)
   {
      if ((cad[i] == 'a') || (cad[i] == 'e') || (cad[i] == 'i') || (cad[i] == 'o') ||
          (cad[i] == 'u') || (cad[i] == 'A') || (cad[i] == 'E') || (cad[i] == 'I') ||
          (cad[i] == 'O') || (cad[i] == 'U'))
      {
		// Hemos encontrado una vocal en la posición i, así que la sustituimos por *
              cad[i] = '*';
      }
   } // Fin del for

   // Por último, mostramos el resultado
   puts(cad);
   return 0;
}
