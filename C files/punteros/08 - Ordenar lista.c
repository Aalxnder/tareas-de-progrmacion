#include <stdlib.h>
#include <stdio.h>
#include "lista.h"


int main(void)
{
   struct s_nodo *primero = NULL, *nodo, *nodo2;
   int i,aux;
   
   // Generación de la lista
   for (i=1; i<=100; i++)
      insertar(&primero, rand()%1000 + 1);

   printf("LISTA DESORDENADA:\n");
   mostrar_lista(primero);


   // Ordenación (método de la burbuja)
   for (i=1; i <= 100; i++)
   {
      nodo = primero;
      nodo2 = nodo->siguiente;
      while (nodo2 != NULL)
      {
	if (nodo->dato > nodo2->dato)	// Estan desordenados
	{					// Vamos a intercambiarlos
            aux = nodo->dato;
	    nodo->dato = nodo2->dato;
	    nodo2->dato = aux;
	}
	nodo2 = nodo2->siguiente;
	nodo = nodo->siguiente;
      }
   }

   // Mostrar la lista en la pantalla y destruirla
   printf("\n\nLISTA ORDENADA:\n");
   mostrar_lista(primero);
   borrar_todos(&primero);

   return 0;
}
