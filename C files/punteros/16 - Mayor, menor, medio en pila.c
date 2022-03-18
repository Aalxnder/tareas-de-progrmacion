int main(void)
{
   t_nodo *pila = NULL;
   int v, i, mayor, menor, suma;
   float media;
   
   printf("Generando la pila aleatoriamente...\n");
   for (i=1; i<=100; i++) {
      v = (rand() % 1001) - 500;		// Elige números al azar entre -500 y 500
      push(&pila, v);
   }

   // Buscamos el mayor, el menor y la media
   mayor = -9999;
   menor = 9999;
   suma = 0;
   while (pila != NULL) {
      v = pop(&pila);		
      suma = suma + v;
      if (v > mayor)
         mayor = v;				// Es el elemento más grande encontrado hasta ahora
      if (v < menor)
         menor = v;				// Es el elemento más grande encontrado hasta ahora
   }
   media = (float)suma / 100;

   // Mostramos los resultados
   printf("Mayor: %i, Menor: %i, Media: %2.2f\n", mayor, menor, media)

   return 0;
}   
