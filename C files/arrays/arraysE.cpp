/*Estructuras de datos dinamicas, vectores
Ejercicios*/
//escribir un programa en c que inicialize todos los valores de un vector de 10 numeros enteros a -1
/*

---------------------ejercicio 1----------------------------------------
#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color E0");
	int vector[10];
	int i;
	printf("se inicializaran todos los valores de un vector a menos 1\n");
	for(i=0;i<10;i++)
	{
		vector[i] = -1;
	}
	printf("valores del vector");
	for(i=0;i<10;i++)
	{
		printf("%d\n",vector[i]);
	}
	return 0;
}*/


/*define 2 vectores de 100 numeros enteros, uno llamado pares e impares y inicializa el primero con los 2 primeros numeros pares positivos
y el otro con los 100 primeros numeros impares

------------------ejercicio 2---------------------------------*/
/*#include <stdio.h>
#include <stdlib.h>
//prototipos
void par(void);
void impar (void);
void menu(void);
void salir(void);
int main()
{
	system("color E0");
	menu();
	system("pause");
	return 0;
}

void par(void)
{
	int i,x,cont;
	int vector_pares[200];
	i=0;
	for(x=1;x<200;x++)
	{
		cont = 0;
		if(x % 2 == 0)
		{
			vector_pares[i] = x;
			i++;
		}
	}
	printf("numeros pares\n");
	for (x=0;x<i;x++)
	{
		printf("%d\n",vector_pares[x]);
	}
	system("pause");
	menu();
}

void impar(void)
{
	int i,x,cont;
	system("cls");
	int vector_impares[200];
	i=0;
	for (x=1;x<200;x++)
	{
		cont =0;
		if(x % 2 != 0)
		{
			vector_impares[i] = x;
			i++;
		}
	}
	printf("numeros impares\n");
	for(x=0;x<i;x++)
	{
		printf("%d\n",vector_impares[x]);
	}
	system("pause");
	menu();
}
void menu(void)
{
	int opc;
	do
	{
		system("cls");
		printf("ingresa la opcion\n");
		printf("[1] numeros pares\n[2] numeros impares\n[3] salir\n");
		scanf("%d",&opc);
		
		switch(opc)
		{
			case 1:
			{
				par();
				break;
			}
			case 2:
			{
				impar();
				break;
			}
			case 3:
			{
				salir();
				break;
			}
			default:
			{
				printf("opcion no valida");
				break;
			}
		}
	}while(opc != 3);
}
void salir(void)
{
	int s;
	system("cls");
	printf("ha elegido la opcion de salir\n");
	printf("oprima 0 para salir o cualquier otro numero para permanecer\n");
	scanf("%d",&s);
	if(s==0)
	{
		printf("usted ha decidido finalizar el programa\n");
		exit(-1);
	}
	else
	{
		printf("ha decidido permanecer en el programa\n");
		menu();
	}
}*/

/*escribir un programa que defina un vector de 1000 numeros enteros con una cantidad random entre 0 y 30000 
y posteriormente ordenar el programa usando el metodo que se prefiera

-----------------------ejercicio 3-------------------------------------------*/
/*#include <stdio.h>
#include <stdlib.h>
#define cant 1000 //cantidad de espacios en el array
#define N 30000 //numeros randoms que pueden aparecer
#define randomize (sranf(time(NULL))) //estas 2 macrofunciones serviran para rellenar un array de forma aleatoria
#define random(num) (rand ()%(num))
int main()
{
	int i,j,aux;
	int vector[cant];
	for (i=0;i<cant;i++)
	{
		vector[i] = random(N);
	}
	printf("vector con numeros random sin ordenar\n");
	for(i=0;i<cant;i++)
	{
		printf("%d\n",vector[i]);
	}
	for (i=0;i<cant;i++)
	{
		for(j=0;j<cant;j++)
		{
			//si el vector es mayor ordenamos
			if(vector[j]>vector[j+1])
			{
				aux = vector[j+1];
				vector[j+1] = vector[j];
				vector[j] = aux;
			}
		}
	}
	printf("numeros ordenados\n");
	for(i=0;i<cant;i++)
	{
		printf("%d\n",vector[i]);
	}
	system("pause");
	return 0;
}*/
/*
crear un array con la cantidad de nuemros randoms que el usuario elija y ordenar el vector con el metodo de seleccion

-----------------------------ejericicio 4----------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
//funciones macros de numeros random 
#define N 30000 //la cantidad de numeros randoms puede ser desde 0 hasta 30k
#define randomize (srand (time(Null)))
#define random(num) (rand()%(num))
int main()
{
	int aux,i,j,min,cant;
	int vector[10000];
	system("color E0");
	printf("\tgeneracion de un vector con numeros random segun la cantidad que el usuario elija:\n\n");
	printf("\tmetodo de ordenamiento 'metodo de seleccion'\n\n");
	printf("ingrese la cantidad de numeros que desea generar:\n");
	scanf("%d",&cant);
	for(i=0;i<cant;i++)
	{
		vector[i] = random(N);
	}
	for(i=0;i<cant;i++)
	{
		min = i;
		for(j=i+1;j<=cant;j++)
		{
			if(vector[j]<vector[min])
			{
				min=j;
			}
		}
		aux = vector[i];
		vector[i] = vector[min];
		vector[min] = aux;
	}
	printf("numeros ordenados:\n");
	for(i=0;i<cant;i++)
	{
		printf("%d\n",vector[i]);
	}
	system("pause");
	return 0;
}

