int main(void)
{
   FILE* f;
   char nombre_arch[50], c;
   int cont[29];      			// Contadores para las letras
   int total, otros, i;
   
   printf("\nEste programa cuenta la frecuencia de aparcici�n de letras en un archivo\n\n");
   printf("Nombre del archivo: ");
   gets(nombre_arch);

   // Inicializamos los contadores
   total = 0;
   otros = 0;
   for (i=0; i<=28; i++)
      cont[i] = 0;
   
   // Abrimos el archivo
   f = fopen(nombre_arch, "rt");
   if (f == NULL)
   {
         printf("Error al abrir el archivo %s\n", nombre_arch);
         system("pause");
         exit(1);
   }
   
   printf("Procesando el archivo...\n");
   
   // Recorremos el archivo
   while (!feof(f))
   {
      c = fgetc(f);                       // Leemos un car�cter
      total++;
      if ((c >= 'A') && (c <= 'Z'))       // Contabilizamos una letra may�scula
            cont[c-65] = cont[c-65] + 1;  // (el c�digo ASCII de la 'A' es 65)
      else if ((c >= 'a') && (c <= 'z'))  // Contabilizamos una letra min�scula
            cont[c-97] = cont[c-97] + 1;  // (el c�digo ASCII de la 'a' es 97)
      else if ((c == '�') || (c == '�'))  // Contabilizamos una e�e
            cont[28] = cont[28] + 1;
      else                                // Contabilizamos "otros" caracteres
            otros++;
   }
   
   // Mostramos resultados
   printf("\nRECUENTO FINALIZADO\n\n");
   printf("Total de caracteres en el archivo: %i\n\n", total);
   printf("Letra     Num. Apariciones    Frecuencia\n");
   printf("----------------------------------------\n");
   for (i=0; i<26; i++)
   {
      printf("  %c           %5i              %2.2f\n", i+65, cont[i], (float)cont[i]/total*100);
   }
   printf("  �           %5i              %2.2f\n", cont[28], (float)cont[28]/total*100);
   printf("Otros         %5i             %2.2f\n", otros, (float)otros/total*100);

   return 0;
}
