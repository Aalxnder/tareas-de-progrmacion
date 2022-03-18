/*
Notas sobre esta solución:
Observa que, en esta solución, la longitud del vector se ha declarado en una constante llamada LONGITUD VECTOR. Así, puede usarse el mismo programa con varios tamaños de vector: basta con cambiar el valor de esa constante y volver a compilarlo.
Observa también cómo se usa la función estándar clock() para medir el tiempo que tarda el algoritmo en ejecutarse. La función clock() devuelve el tiempo de CPU que el programa ha consumido desde que empezó a ejecutarse. Ese tiempo viene expresado en "clocks" o pasos de reloj, no en segundos, ni milisegundos, ni nada parecido. Para convertirlo a milésimas de segundo, hay que dividirlo entre la constante CLOCKS_PER_SEC (ver código).
Se han implementado los dos métodos de búsqueda (secuencial y binaria), contando en cada caso el número de pasos necesarios para localizar un elemento. Revisa bien las implementaciones y asegúrate de entenderlas, en particular la de la búsqueda binaria, bastante más difícil que la secuencial.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LONGITUD_VECTOR 50000

void genera_vector(int v[LONGITUD_VECTOR]);
void ordena_vector(int v[LONGITUD_VECTOR]);
void buscar_secuencial(int v[LONGITUD_VECTOR], int busc);
void buscar_binario(int v[LONGITUD_VECTOR], int busc);


int main(void)
{
  int v[LONGITUD_VECTOR], busc;
  clock_t tiempo;

  printf("\nORDENACIÓN DE UN VECTOR DE %i ELEMENTOS\n", LONGITUD_VECTOR);
  printf("MÉTODO DE INTERCAMBIO DIRECTO (BURBUJA)\n");

  // Se genera el vector aleatoriamente
  printf("Generando el vector...\n");
  genera_vector(v);

  // Se ordena el vector con el método de la burbuja
  printf("Ordenando el vector...\n");
  ordena_vector(v);

  // Se calcula y muestra el tiempo de ordenación
  tiempo = clock();
  tiempo = tiempo * 1000 / CLOCKS_PER_SEC;
  printf("Vector ordenado\nTiempo empleado: %i,%i segundos\n\n", tiempo/1000, tiempo%1000/100);

  // Se busca un dato por los métodos secuencial y binario
  printf("¿Qué número quieres buscar?");
  scanf("%i", &busc);

  buscar_secuencial(v, busc);
  buscar_binario(v, busc);

  system("pause");
  return 0;
}

void genera_vector(int v[LONGITUD_VECTOR])
{
  int i;
  for (i = 0; i < LONGITUD_VECTOR; i++)
     v[i] = rand()%50000;
}

void ordena_vector(int v[LONGITUD_VECTOR])
{
  int i, j, elem;
  for (i = 1; i < LONGITUD_VECTOR; i++)
  {
     for (j = LONGITUD_VECTOR - 1; j >=i; j--)
     {
        if (v[j-1] > v[j])
	{
	  elem = v[j-1];
	  v[j-1] = v[j];
	  v[j] = elem;
	}
     }
  }
}

void buscar_secuencial(int v[LONGITUD_VECTOR], int busc)
{
   int i, encontrado;

   // Iniciamos una búsqueda secuencial
   encontrado = 0;
   i = 0;
   while ((i < LONGITUD_VECTOR) && (encontrado == 0))
   {
	if (v[i] == busc)	// Lo hemos encontrado !!
		encontrado = 1;
    else
        i++;
   }

   if (encontrado == 1)
	printf("El dato %i ha sido encontrado en la posición %i\n", busc, i);
   else
	printf("El dato %i no está en el vector\n", busc);
  
   printf("Se han necesitado %i pasos con la búsqueda secuencial\n\n", i);
}


void buscar_binario(int v[LONGITUD_VECTOR], int busc)
{
   int izq, der, mitad, encontrado, pasos;

   // Iniciamos una búsqueda binaria
   encontrado = 0;
   pasos = 0;
   izq = 0;
   der = LONGITUD_VECTOR - 1;
   while ((izq < der-1) && (encontrado == 0))
   {
    printf("Paso %i, iz=%i, de=%i\n", pasos, izq, der);
	mitad = izq + ((der - izq) / 2);
	if (v[mitad] == busc)		// Lo hemos encontrado !!
		encontrado = 1;

       if (v[mitad] > busc)		// Seguimos buscando en la mitad izquierda
		der = mitad;
	   if (v[mitad] < busc)		// Seguimos buscando en la mitad derecha
		izq = mitad;

	pasos++;
   }

   if (encontrado == 1)
	printf("El dato %i ha sido encontrado en la posición %i\n", busc, mitad);
   else
	printf("El dato %i no está en el vector\n", busc);
  
   printf("Se han necesitado %i pasos con la búsqueda binaria\n\n", pasos);
}
