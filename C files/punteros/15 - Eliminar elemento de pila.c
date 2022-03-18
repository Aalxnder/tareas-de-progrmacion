int main(void)
{
   t_nodo *pila = NULL, *copia = NULL, *aux = NULL;
   int v, i, elem, tamano;
   
   printf("Generando la pila aleatoriamente...\n");
   tamano = rand() % 90 + 11;	// El tamaño de la pila estará entre 10 y 100 elementos
   for (i=1; i<=tamano; i++) {
      v = rand() % 100;		// Elige números al azar entre 0 y 99
      push(&pila, v);
   }

   // Preguntamos al usuario qué elemento quiere eliminar
   do {
       printf("¿Qué elemento desea eliminar de la pila (1 - %i)\n”, tamano);
       scanf("%i", &elem);
   }
   while ((elem < 1) || (elem > tamano));

   // Copiamos toda la pila en la auxiliar, salvo el elemento que vamos a eliminar (si existe)
   while (pila != NULL) {
      v = pop(&pila);		
      if (v != elem)
         push(&aux, v);		// Esta pila quedará AL REVÉS que la original
   }

   // Creamos la pila definitiva a partir de la pila auxiliar
   while (aux != NULL) {
      v = pop(&aux);		
      push(&copia, v);		// Esta pila será una copia exacta de la original
   }

   // Al final, la pila “copia” tendrá todos los elementos de la pila original menos el queremos
   // eliminar. Ahora se podría procesar la pila “copia” para hacer otras cosas con ella.
   return 0;
}   
