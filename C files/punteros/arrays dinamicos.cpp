/*reserva dinamica de memoria. arrays dinamicos*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("color E0");
	int *x, i,j;
	//reservo memoria, transformo el array de void a int, y con malloc le digo q me reserve 100*el tamaño de tipp de dato, int vale 2 bites, me reserva 200 bytes
	x=(int*)malloc(10*sizeof(int)); 
	if(x==NULL)
	{
		perror("error en la asignacion de memoria\n");
		return 1;
	}
	else
	{
		printf("se ha reservado con exito la memoria para 100 numeros\n");
		for(i=0;i<10;i++)
		{
			printf("introduzca un numero:\n");
			scanf("%d",&x[i]);
		}
		
		
		printf("imprimiendo valores\n");
		for(j=0;j<10;j++)
		{
			printf("%d\n",*(x+j));
		}
	}
	return 0;
}*/



//matriz dinamicas, copiar el contenido de una matriz en otra

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("color E0");
	int **matriz1; //declarar las matrices
	int **matriz2; 
	int filas, column;
	int i,j;
	
	printf("introduce el numero de filas:\n");
	scanf("%d",&filas);
	
	printf("Introduce el numero de columnas\n");
	scanf("%d",&column);
	
	//reservar memoria
	matriz1=(int**)malloc(filas*sizeof(int*)); //el int siempre tiene un puntero menos que el primer int
	
	if(matriz1==NULL)
	{
		perror("error en la reserva de memoria\n");
		return 1;
	}
	for(i=0;i<filas;i++)
	{
		matriz1[i]=(int*)malloc(column*sizeof(int));
		if(matriz1[i]==NULL)
		{
			perror("Error en la reserva de memoria\n");
			return 2;
		}
	}
	
	//meter valores a la matriz
	for(i=0;i<filas;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("introduce el valor de la fila %d, columna %d\n",i,j);
			scanf("%d",&matriz1[i][j]);
		}
	}
	
	
	//reservando memoria para la matriz2
	matriz2=(int**)malloc(filas*sizeof(int*));
	if(matriz2==NULL)
	{
		perror("error, no se ha podido reservar la memoria");
		return 3;
	}
	for(i=0;i<filas;i++)
	{
		matriz2[i]=(int*)malloc(column*sizeof(int));
		if(matriz2[i]==NULL)
		{
			perror("Error no se ha podido reservar la memoria\n");
			return 4;
		}
	}

		
	//copiar el contenido de matriz 1 en matriz2
	printf("Contenido de matriz2\n");
	for(i=0;i<filas;i++)
	{
		for(j=0;j<column;j++)
		{
			matriz2[i][j]=matriz1[i][j];
			printf("%d",matriz2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
