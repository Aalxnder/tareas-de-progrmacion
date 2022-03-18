#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *v;
  int n, i, busc, pos;

  // Preguntamos la longitud del vector y reservamos memoria para él
  printf("Introduce el valor de n: ");
  scanf("%i", &n);
  v = (int*)malloc(n*sizeof(int));
  if (v == NULL) { printf("Memoria insuficiente\n"); exit(1); }

  // Asignamos valores al azar al vector
  for (i=0; i<n; i++) 
    v[i] = rand() % 50000 + 1;
    
  // Realizamos la búsqueda
  printf("Introduce el número que buscas: ");
  scanf("%i", &busc);

  pos = -1;	// Posición donde se encuentra el número buscado
  for (i=0; i<n && pos == -1; i++)
  {
    if (v[i] == busc)
      pos = i;
  }

  // Mostramos el resultado
  if (pos != -1)
    printf("El número ha sido encontrado en la posición %i\n", pos);
  else
    printf("Ese número no está en el vector\n");
  
  free(v);

  return 0;
}
