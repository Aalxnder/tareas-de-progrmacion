int main(void)
{
   char cad[100];
   int i;

   printf("Introduzca una cadena:");
   gets(cad);
   
   // Recorremos la cadena desde el final hacia el principio
   for (i = strlen(cad); i >= 0; i--)
   {
       // Imprimimos cada carácter
       printf("%c", cad[i]);
   }

   return 0;
}
