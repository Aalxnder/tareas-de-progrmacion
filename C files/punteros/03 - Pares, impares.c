#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int v[10], *vpares, *vimpares;
  int i,cont_pares,cont_impares,pos_pares,pos_impares;

  // Pedimos al usuario los diez valores
  cont_pares = 0; cont_impares = 0;

  for (i=0; i<10; i++) {
    printf("Introduce el valor número %i: ", i+1);
    scanf("%i", &v[i]);
    // Llevamos la cuenta de cuántos pares y cuántos impares se han tecleado
    if (v[i] % 2 == 0)
      cont_pares++;		// Contador de pares
    else
      cont_impares++;		// Contador de impares
  }

  // Creamos los dos vectores dinámicos para pares e impares
  vpares = (int*)malloc(cont_pares * sizeof(int));
  vimpares = (int*)malloc(cont_impares * sizeof(int));
  if ((vpares == NULL) || (vimpares == NULL))
    { printf("¡¡Memoria insuficiente!!\n"); exit(1); }

  // Asignamos los números al vector correcto
  pos_pares = 0;	// Índice del vector vpares
  pos_impares = 0;	// Índice del vector vimpares
  for (i=0; i<10; i++)
  {
    if (v[i] % 2 == 0) {
	vpares[pos_pares] = v[i];
	pos_pares++;
    }
    else {
	vimpares[pos_impares] = v[i];
	pos_impares++;
    }
  }

  // Mostramos los vectores
  printf("\nVECTOR DE NUMEROS PARES (%i elementos):\n", cont_pares);
  for (i=0; i<cont_pares; i++)
    printf("%i - ", vpares[i]);

  printf("\nVECTOR DE NUMEROS IMPARES: (%i elementos)\n",cont_impares);
  for (i=0; i<cont_impares; i++)
    printf("%i - ", vimpares[i]);

  printf("\n");
  free(vpares); free(vimpares);

  return 0;
}
