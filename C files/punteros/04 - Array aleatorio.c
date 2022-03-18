#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *v;
  int n, i, busc, pos;

  // Preguntamos la longitud del vector y reservamos memoria para �l
  printf("Introduce el valor de n: ");
  scanf("%i", &n);
  v = (int*)malloc(n*sizeof(int));
  if (v == NULL) { printf("Memoria insuficiente\n"); exit(1); }

  // Asignamos valores al azar al vector
  for (i=0; i<n; i++) 
    v[i] = rand() % 50000 + 1;
    
  // Realizamos la b�squeda
  printf("Introduce el n�mero que buscas: ");
  scanf("%i", &busc);

  pos = -1;	// Posici�n donde se encuentra el n�mero buscado
  for (i=0; i<n && pos == -1; i++)
  {
    if (v[i] == busc)
      pos = i;
  }

  // Mostramos el resultado
  if (pos != -1)
    printf("El n�mero ha sido encontrado en la posici�n %i\n", pos);
  else
    printf("Ese n�mero no est� en el vector\n");
  
  free(v);

  return 0;
}
