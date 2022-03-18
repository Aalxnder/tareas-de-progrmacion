/*Tablas o matrices

Rellenar una matriz con valores de teclado*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color E0");
	float discos [2][3];
	int fila,column;
	//acceder a las filas con una variable fila menor a la cantidad de filas que hayamos declarado en nuestra matriz
	for(fila=0;fila<2;fila++)
	{
		//acceder a las columas con una variable columna menor a la cantidad de columnas que hayamos declarado en nuestra matriz
		for(column=0;column<3;column++)
		{
			printf("rellena el valor de la fila %d y la columna %d.\n",fila,column);
			scanf("%f",&discos[fila][column]);
		}
	}
	//imprimir la tabla
	for(fila=0;fila<2;fila++)
	{
		for(column=0;column<3;column++)
		{
			printf("Precio en euros: %.1f\n",discos[fila][column]);
		}
	}
	return 0;
}*/
/*visualizar y leer matrices mediante funciones*/
#include <stdio.h>
#include <stdlib.h>
//prototipos de funciones
void leer(float matriz[2][3]);
void visualizar(float matriz[2][3]);
int main()
{
	system("color E0");
	float matriz[2][3];
	leer(matriz);
	visualizar(matriz);
	system("pause");
	return 0;
}

//ingresar por teclado los valores de la matriz
void leer(float matriz[2][3])
{
	int i,j;
	//acceder a las filas
	for(i=0;i<2;i++)
	{
		//acceder a las columnas
		for(j=0;j<3;j++)
		{
			printf("ingresa el valor de la fila %d y la columa %d:\n",i,j);
			scanf("%f",&matriz[i][j]);
		}
	}
}

//visualizar la matriz
void visualizar(float matriz[2][3])
{
	int i,j;
	float suma =0;
	float promedio =0;
	//acceder a las filas
	for(i=0;i<2;i++)
	{
		//acceder a las columnas
		for(j=0;j<3;j++)
		{
			printf("%.1f\n",matriz[i][j]);
			suma += matriz[i][j];
			promedio += matriz[i][j]/6;
		}
	}
	printf("la suma de los valores ingresados es: %.1f\n",suma);
	printf("el promedio de los valores es %.1f\n",promedio);
}


