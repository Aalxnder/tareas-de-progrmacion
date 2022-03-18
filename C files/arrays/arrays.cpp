/*#include <stdio.h>
#include <stdlib.h>
#define num 8
int main()
{
	int i;
	int total = 0;
	int numeros[num];
	system("color E0");
	for(i=0;i<num;i++)
	{
		printf("introduzca el numero %d.\n",i);
		scanf("%d",&numeros[i]);
	}
	printf("lista de numeros:\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",numeros[i]);
		total += numeros[i];
	}
	printf("la suma de los numeros es de %d: ",total);
	return 0;
}*/
//capturar solo los numeros reales positivos introducidos por el teclado
/*#include <stdio.h>
#include <stdlib.h>
#define max 10
float muestra[max];
int main()
{
	int i;
	float total = 0;
	system("color E0");
	printf("introduzca una lista de %d elementos positivos\n",max);
	for(i=0;i<max;muestra[i]>0 ? ++i:i)
	{
		scanf("%f",&muestra[i]);
	}
	printf("datos leidos del teclado: \n");
	for (i=0;i<max;i++)
	{
		total += muestra[i];
		printf("\tnumero %d: %.1f\n",i,muestra[i]);	
	}
	printf("la suma es %.1f",total);
	return 0;
	
}*/
//visualizacion de un arreglo bidimensional
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//prototipos de funciones
void leer(int a[][5]);
void visualizar (const int a[][5]);
//funcion principal
int main()
{
	int a[3][5];
	//cambiar color a la consola
	system("color E0");
	//llamar a las funciones
	leer(a);
	visualizar(a);
	//para que el programa no nos muestre que ha finalizado hasta que se lo digamos dando a enter
	getch();
	return 0;
}
//funcion leer los valores ingresados por teclado
void leer(int a[][5])
{
	//variables para los ciclos
	int i,j;
	puts("introduzca 15 numeros enteros (5 por fila)");
	//ciclo para acceder a las filas
	for(i=0;i<3;i++)
	{
		printf("fila %d: ",i);
		//ciclo para acceder a las columnas
		for(j=0;j<5;j++)
		{
			//leer los valores dados
			scanf("%d",&a[i][j]);
		}
	}
}
//funcion visualizar 
void visualizar(const int a[][5])
{
	int i,j;
	//ciclo for para acceder a las filas
	for (i=0;i<3;i++)
	{
		//ciclo for para acceder a las columnas
		for (j=0;j<5;j++)
		{
			printf("%1d, ",a[i][j]);
			
		}
	}
}
