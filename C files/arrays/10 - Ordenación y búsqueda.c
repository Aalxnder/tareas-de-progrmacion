/*
Notas sobre esta soluci�n:
Observa que, en esta soluci�n, la longitud del vector se ha declarado en una constante llamada LONGITUD VECTOR. As�, puede usarse el mismo programa con varios tama�os de vector: basta con cambiar el valor de esa constante y volver a compilarlo.
Observa tambi�n c�mo se usa la funci�n est�ndar clock() para medir el tiempo que tarda el algoritmo en ejecutarse. La funci�n clock() devuelve el tiempo de CPU que el programa ha consumido desde que empez� a ejecutarse. Ese tiempo viene expresado en "clocks" o pasos de reloj, no en segundos, ni milisegundos, ni nada parecido. Para convertirlo a mil�simas de segundo, hay que dividirlo entre la constante CLOCKS_PER_SEC (ver c�digo).
Se han implementado los dos m�todos de b�squeda (secuencial y binaria), contando en cada caso el n�mero de pasos necesarios para localizar un elemento. Revisa bien las implementaciones y aseg�rate de entenderlas, en particular la de la b�squeda binaria, bastante m�s dif�cil que la secuencial.
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

  printf("\nORDENACI�N DE UN VECTOR DE %i ELEMENTOS\n", LONGITUD_VECTOR);
  printf("M�TODO DE INTERCAMBIO DIRECTO (BURBUJA)\n");

  // Se genera el vector aleatoriamente
  printf("Generando el vector...\n");
  genera_vector(v);

  // Se ordena el vector con el m�todo de la burbuja
  printf("Ordenando el vector...\n");
  ordena_vector(v);

  // Se calcula y muestra el tiempo de ordenaci�n
  tiempo = clock();
  tiempo = tiempo * 1000 / CLOCKS_PER_SEC;
  printf("Vector ordenado\nTiempo empleado: %i,%i segundos\n\n", tiempo/1000, tiempo%1000/100);

  // Se busca un dato por los m�todos secuencial y binario
  printf("�Qu� n�mero quieres buscar?");
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

   // Iniciamos una b�squeda secuencial
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
	printf("El dato %i ha sido encontrado en la posici�n %i\n", busc, i);
   else
	printf("El dato %i no est� en el vector\n", busc);
  
   printf("Se han necesitado %i pasos con la b�squeda secuencial\n\n", i);
}


void buscar_binario(int v[LONGITUD_VECTOR], int busc)
{
   int izq, der, mitad, encontrado, pasos;

   // Iniciamos una b�squeda binaria
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
	printf("El dato %i ha sido encontrado en la posici�n %i\n", busc, mitad);
   else
	printf("El dato %i no est� en el vector\n", busc);
  
   printf("Se han necesitado %i pasos con la b�squeda binaria\n\n", pasos);
}
