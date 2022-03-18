#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *v;
  int i,n;
  int maximo, minimo, suma;
  float media;


  // Reservamos memoria para el vector dinámico
  printf("Introduce el valor de N: ");
  scanf("%i", &n);
  v = (int*)malloc(n * sizeof(int));
  if (v == NULL)
    { printf("No hay memoria suficiente para %i enteros\n", n); exit(1); }

  // Introducimos los valores en el vector dinámico
  for (i=0; i<n; i++)
  {
    printf("Introduce el valor del elemento %i: ", i);
    scanf("%i", &v[i]);
  }

  // Calculamos la media, el máximo y el mínimo
  maximo = v[0];
  minimo = v[0];
  suma = v[0];
  for (i=1; i<n; i++)
  {
    if (v[i] > maximo) maximo = v[i];
    if (v[i] < minimo) minimo = v[i];
    suma = suma + v[i];
  }
  media = (float)suma / n;

  // Mostramos el resultado
  printf("Máximo: %i\nMínimo: %i\nMedia: %2.2f\n", maximo, minimo, media);

  free(v);

  return 0;
}
