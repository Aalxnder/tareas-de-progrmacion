/*comprobar si una matriz es simetrica
La matriz se genera con numeros aleatorios de 0 a 7. y el programa itera hasta encontrar una matriz simetrica*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <windows.h>
//definir el valor maximo de numeros aleatorios que puede generar la matriz
#define N 8
#define randomize (srand (time (NULL)))
#define random(num) (rand ()%(num))

void gen_mat(int vector [][N], int n);
int simetrica(int vector[][N], int n);
void escribe_mat(int vector[][N], int n);

int main(void)
{
	int vector[N][N]; //definir la matriz con el tamaño maximo de N o sea 8
	system("color E0"); //cambiar de color a la consola
	//variables
	int n,i,j;
	int es_sim;
	randomize;
	do
	{
		printf("ingrese el tamaño de cada dimension de la matriz, con un maximo de %d.\n",N);
		scanf("%d",&n);
	}while(n<2 || n>N);
	do
	{
		gen_mat(vector,n);
		es_sim=simetrica(vector,n);
		if(es_sim) //si la funcion gen_mat devuelve true o 1
		{
			puts("\tMatriz simetrica encontrada\t");
			escribe_mat(vector,n); //llamar a la funcion de escribe mat para visualizar la matriz
			
		}
	}while(!es_sim);
	return 0;
}

//funcion para generar una matriz con numeros aleatorios
void gen_mat(int vector[][N], int n)
{
	int i,j;
	//accedemos a las posiciones de la matriz mediante dos bucles for anidados
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			vector[i][j] = random(N);
		}
	}
}


//funcion para comprobar si la matriz es simetrica o no
int simetrica(int vector[][N], int n)
{
	int i,j;
	int es_simetrica;
	for(es_simetrica=1,i=0;i<n-1 && es_simetrica; i++)
	{
		for(j=i+1; j<n &&es_simetrica; j++)
		{
			if(vector[i][j] != vector[j][i])
			{
				es_simetrica=0;
			}
		}
	}
	return es_simetrica;
}

//funcion para escribir la matriz
void escribe_mat(int vector[][N],int n)
{
	int i,j;
	puts("\tmatriz analizada\n");
	Sleep(1000);
	puts("\t-----------------\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d %c",vector[i][j],(j==n-1 ?'\n':' '));
		}
	}
}
