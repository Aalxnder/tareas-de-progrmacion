/*metodo de ordenamiento quicksort*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))
#define cant 100000
#define N 20000
//prototipos
void quicksort(int vector[cant],int izquierda,int derecha);
void intercambiar(int *a,int*b);
int particion(int vector[cant],int izquierda,int derecha);
void Oquicksort(void);
int main()
{
	system("color E0");
	Oquicksort();
	return 0;
}
void quicksort(int vector[cant],int izquierda,int derecha)
{
	if(izquierda<derecha)
	{
		int indice_particion=particion(vector,izquierda,derecha);
		quicksort(vector,izquierda,indice_particion);
		quicksort(vector,indice_particion+1,derecha);		
	}
}
//intercambio de variables mediante punteros
void intercambiar(int*a,int*b)
{
	int aux=*a;
	*a=*b;
	*b=aux;
}
//esta funcion es la que realmente hace el intercambio
int particion(int vector[cant],int izquierda,int derecha)
{
	//declarar el pivote como el primer valor del vector
	int pivote=vector[izquierda];
	while(1)
	{
		while(vector[izquierda]<pivote)
		{
			izquierda ++;
		}
		while(vector[derecha]>pivote)
		{
			derecha--;
		}
		if(izquierda>=derecha)
		{
			return derecha;
		}
		else
		{
			intercambiar(&vector[izquierda],&vector[derecha]);
			izquierda++;
			derecha--;
		}
	}
}
void Oquicksort(void)
{
	int vector[cant];
	int i;
	double segundos;
	clock_t tiempo_inicio,tiempo_final;
	tiempo_inicio=clock();
	//int longitud = sizeoff vector/sizeoff vector[0];
	for(i=0;i<cant;i++)
	{
		vector[i]=random(N);
	}
	printf("vector sin ordenar\n");
	for(i=0;i<cant;i++)
	{
		printf("%d\n",vector[i]);
	}
	
	//invocar ala funcion quicksort recorriendo todo el arreglo desde el inicio hasta el final
	quicksort(vector,0,cant-1);
	
	printf("numeros ordenados\n");
	for(i=0;i<cant;i++)
	{
		printf("%d\n",vector[i]);
	}
	tiempo_final=clock();
	segundos=(tiempo_final-tiempo_inicio);
	printf("cantidad de iteraciones dadas: %d\n ",i);
	printf("%.1lf clocks por minuto\n",segundos);
	system("pause");
}
