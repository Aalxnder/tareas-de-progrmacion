#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *v;
  int i,j,n,aux;

  // Reservamos memoria para el vector dinámico
  printf("Introduce el valor de N: ");
  scanf("%i", &n);
  v = (int*)malloc(n * sizeof(int));
  if (v == NULL)
    { printf("No hay memoria suficiente para %i enteros\n", n); exit(1); }

  // Introducimos los valores en el vector dinámico
  for (i=0; i<n; i++)
    v[i] = rand() % 1000 + 1;

  // Ordenamos el vector por el método de la burbuja
  for (i = 0; i < n; i++)
    for (j = n-1; j > i; j--)
    {
      if (v[j] < v[j-1]) {
	aux = v[j];
	v[j] = v[j-1];
	v[j-1] = aux;
      }
    }

  // Mostramos el vector
  for (i=0; i<n; i++)
    printf("%i - ", v[i]);

  free(v);

  return 0;
}
