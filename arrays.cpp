/*Planteamiento: Crea una tabla con 15 valores distribuidos en 5 filas y 3.  Preguntar al usuario que valor entero desea introducir a la tabla. Los valores tendr�n que ser en un rango del 1 al 50. Realizar los ajustes necesarios para que el usuario escriba un valor entero en ese rango de lo contrario que muestre un mensaje de error y que regrese a preguntar los valores. Tener un men� con las siguientes opciones: 

1. Capturar valores 
2. Ordenar valores 
3. imprimir valores originales
4. imprimir valores ordenados
5. Salir
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//prototipos
void capturar(void);
void menu(int matriz[3][5]);
void ordenar(int matriz[3][5]);
void imprimirori(int matriz[3][5]);
void imprimirord(int matriz[3][5]);
void salir(void);
//funcion main
int main()
{
	system("color E0");
	capturar();
	system("pause");
	return 0;
}
//funion capturar
void capturar(void)
{
	int matriz[3][5];
	printf("Agregar valores a la matriz. no podra agregar numero mayores a 50\n");
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Ingresa el valor de la fila %d, columna %d:\n",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	//llamar a la funcion menu pa que me pida agregar los valores a la matriz a fuerzas
	system("pause");
	menu(matriz);
	
}
//funcion menu
void menu(int matriz[3][5])
{
	system("cls");
	int opc;
	do
	{
		printf("MENU\n[1] ordenar valores\n[2] imprimir valores originales\n[3] imprimir valores ordenados\n[4] salir\nElija una opcion\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
			{
				//ordenar(matriz);
				break;
			}
			case 2:
			{
				imprimirori(matriz);
				break;
			}
			case 3:
			{
				//imprimirord(matriz);
				break;
			}
			case 4:
			{
				//salir();
				break;
			}
			default:
			{
				printf("opcion no valida\n");
				break;
			}
		}
	}while(opc != ' ');
	
}

void imprimirori(int matriz[3][5])
{
	system("cls");
	printf("Imprimiendo los valores originales\n");
	Sleep(500);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	system("pause");
	menu(matriz);
}
//funcion pa ordenar la matriz
void ordenar(int matriz[3][5])
{
	system("cls");
	printf("ordenando la matriz\n");
	Sleep(500);
	int i,j,i1,j1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			for(i1)
		}
	}
}