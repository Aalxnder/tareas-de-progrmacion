int main(void)
{
   t_nodo *pila = NULL, *copia = NULL, *aux = NULL;
   int v, i;
   
   printf("Generando la pila aleatoriamente...\n");
   for (i=1; i<=10; i++) {
      v = rand() % 100;		// Elige números al azar entre 0 y 99
      push(&pila, v);
   }

   printf("Copiando en pila auxiliar\n");
   for (i=1; i<=10; i++) {
      v = pop(&pila);		
      push(&aux, v);			// Esta pila quedará AL REVÉS que la original
   }

   printf("Creando pila definitiva\n");
   for (i=1; i<=10; i++) {
      v = pop(&aux);		
      push(&copia, v);		// Esta pila será una copia exacta de la original
   }

   return 0;
}   
