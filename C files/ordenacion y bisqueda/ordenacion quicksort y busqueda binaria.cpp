#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))
#define cant 10
#define N 30000
//prototipos
void quicksort(int vector[cant],int izquierda, int derecha);
void intercambiar(int *a,int*b);
int particion(int vector[cant],int izquierda, int derecha);
void busqueda_binaria(void);
int main()
{
	system("color E0");
	busqueda_binaria();
	system("pause");
	return 0;
}
//funcion quicsort
void quicksort(int vector[cant],int izquierda, int derecha)
{
	if(izquierda<derecha)
	{
		int indice_particion=particion(vector,izquierda,derecha);
		quicksort(vector,izquierda,indice_particion);
		quicksort(vector,indice_particion+1,derecha);
	}
}
//funcion pa intercambiar
void intercambiar(int *a,int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
int particion(int vector[cant], int izquierda, int derecha)
{
	//declaramos el pivote como el primer elemento del vector
	int pivote=vector[izquierda];
	//bucle infinito
	while(1)
	{
		while(vector[izquierda]<pivote)
		{
			izquierda++;
		}
		while(vector[derecha]>pivote)
		{
			derecha--;
		}
		if(izquierda >= derecha)
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
void busqueda_binaria(void)
{
	int vector[cant];
	int i;
	int inf,sup,mitad,dato;
	char band = 'F';
	randomize;
	for(i=0;i<cant;i++)
	{
		vector[i] = random(N);
	}
	//imrpimir arreglo sin ordenar
	printf("arreglo sin ordenar\n");
	for(i=0;i<cant;i++)
	{
		printf("%d\n",vector[i]);
	}
	//aqui el vector ya esta ordenado con la funcion quicksort
	quicksort(vector,0,cant-1);
	//pedir el dato a buscar en el vector
	printf("ingresa el numero que deseas buscar\n");
	scanf("%d",&dato);
	//inicializar los valores
	inf = 0;
	sup = cant;
	while(inf<sup)
	{
		mitad=(inf+sup)/2;
		if(vector[mitad]==dato)
		{
			band='V';
			break;
		}
		if(vector[mitad]>dato)
		{
			//asignar el nuevo valor a la variable mitad
			sup=mitad;
			mitad=(inf+sup)/2;	
		}
		if(vector[mitad]<dato)
		{
			inf=mitad;
			mitad=(inf + sup)/2;
		}
	}
	if(band == 'F')
	{
		printf("el numero no se ha encontrado\n");
	}
	else if(band =='V')
	{
		printf("el numero se ha encontrado en la posicion %d\n",mitad);
	}
	system("pause");
}
