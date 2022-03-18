/*
(Esta solución utiliza una lista de caracteres, no de cadenas. Recuerda que se puede mejorar la recepción de teclas con la función getch() de la librería ncurses, evitando así tener que pulsar Intro después de cada carácter)
*/

int main(void)
{
   struct s_nodo *lista = NULL;
   FILE *f;
   char c;
   int i;

   // Leemos los caracteres y los insertamos en la lista
   printf("Introduzca un texto (pulse # para terminar)");
   do {
      c = getchar();
      if (c != '#') insertar(&lista, c);
   }
   while (c != '#');

   // Guardamos la lista en un archivo de texto
   f = fopen("mi_fichero.txt", "rw");
   if (f == NULL) { printf("No puedo crear el archivo"); exit(-1); }
   
   for (i=1; i <= contar_nodos(lista); i++) {
      buscar_por_posicion(lista, i, &c);
      fputc(c, f);
   }
   fclose(f);

   // Destruimos la lista para liberar la memoria
   borrar_todos(&lista);

   return 0;
}
