struct s_nodo {			// Tenemos que cambiar la definición del nodo
   char dato[21];
   struct s_nodo *siguiente;
}

int main(void)
{
   struct s_nodo *primero = NULL, *ultimo = NULL;
   int terminar;
   char cad[21];
   
   printf("Introduzca varias cadenas (teclee FIN para terminar)\n");
   terminar = 0;
   do {
      gets(cad);
      if (strcmp(cad, “FIN”) == 0)
         terminar = 1;
      else
         insertar(&primero, &ultimo, cad);
   }
   while (terminar == 0);

   // Sacamos las cadenas de la cola y las mostramos por la pantalla separadas por un espacio
   while (primero != NULL) {
      strcpy(cad, sacar(&primero, &ultimo));
      printf(“%s “, cad);
   }

   return 0;
}
