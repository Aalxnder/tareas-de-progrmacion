#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define randomize (srand(time(NULL)))

int main()
{
	system("color E0");
	int i,n,insercion;
	int vector[10];
	randomize; //inicializacion de los numeros aleatorios
	/*para generar el vector definire un numero de 0 a 9 a la primera posicion
	de 10 a 19 a la segunda, de 20 a 29 a la tercera y asi sucesivamente*/
	for(i=0;i<10;i++)
	{
		vector[i]=rand()%10+(i*10);
	}
	printf("vector:\n");
	for(i=0;i<10;i++)
	{
		printf("%d  ",vector[i]);
	}
	printf("\n");
	/*le pedimos al usuario que teclee un numero entre 0 y 9*/
	do
	{
		printf("introduzca un numero entre 0 y %d\n",vector[9]);
		scanf("%d",&n);
	}while((n<0)||(n>vector[9]));
	/*buscamos la posicion en la que hay que insertar el valor que digito el usuario*/
	i=0;
	while(vector[i]<n)
	{
		i++;
	}
	insercion=i;
	/*desplazamos los numeros del vector desde la posicion de insercion hasta el final*/
	for(i=0;i>insercion;i--)
	{
		vector[i]=vector[i-1];
	}
	//insertamos el numero en la posicion de insercion
	vector[insercion]=n;
	printf("vector con el numero agregado:\n");
	for(i=0;i<10;i++)
	{
		printf("%d  ",vector[i]);
	}
}
