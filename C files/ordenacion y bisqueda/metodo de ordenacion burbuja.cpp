//ordenacion del metodo burbuja para la organizacion del metodo de los vectores
/*#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	//cambiar color a la consola
	system("color E0");
	//definir vector a ordenar
	int vector[10] = {7,5,3,56,1,98,34,2,90,345};
	//declaracion de una variable auxiliar
	int aux;
	for (int i = 0;i<=10;i++)
	{
		//este ciclo se asegurara de que cada uno de los valores quede dentro de la iteracion correspondiente, es decir en este caso menor a 10
		for (int j = 0;j<10;j++)
		{
			//si se cumple que el vector en la posicion ejemplo, 0 es mayor a el vector en la posicion j+1, es decir en la posicion 2
			//se hara un cambio de variables haciendo uso de la variable auxiliar
			if(vector[j]>vector[j+1])
			{
				aux = vector[j+1];
				vector[j+1] = vector[j];
				vector[j] = aux; 
			}
		}
	}
	printf("el arreglo ordenado es:\n ");
	for(int i=0;i<=10;i++)
	{
		printf("%d",vector[i]);		
	}	
	getch();
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
//prototipos
void metodo_burbuja(void);
void metodo_burbuja_inv(void);
void seleccion(void);
void menu(void);
void salir(void);
int main()
{
	system("color E0");
	menu();
	getch();
	return 0;
}
void menu(void)
{
	int opc;
	system("cls");
	do
	{
	printf("\nMenu:\n");
	printf("[1] Metodo burbuja de forma ascendente\n");
	printf("[2] Metodo de burbuja de forma descendente\n");
	printf("[3] Metodo de seleccion directa forma ascendente\n");
	printf("[4] Metodo de seleccion directa forma descendente\n");
	printf("[5] Salir\n");
	printf("elija una opcion :)\n");
	scanf("%d",&opc);
	system("cls");
	switch(opc)
	{
		case 1:
		{
			metodo_burbuja();
			break;
		}
		case 2:
		{
			metodo_burbuja_inv();
			break;	
		}
		case 3:
		{
			seleccion();
			break;
		}
		case 4:
		{
			//seleccion_inv();
			break;
		}
		case 5:
		{
			salir();
			break;
		}
		default:
		{
			printf("opcion no disponible\n");
		}
	}
	}while(opc != 5);
}

//funcion para metodo burbuja normal
void metodo_burbuja(void)
{
	int numeros[100];
	//variable auxiliar para realizar el cambio
	int cant,aux;
	system("cls");
	printf("Metodo burbuja de forma ascendente\n\n");
	printf("ingresa la cantidad de numeros que deseas ordenar\n");
	scanf("%d",&cant);
	system("cls");
	for(int i=0;i<cant;i++)
	{
		printf("ingresa los numeros a ordenar\n");
		scanf("%d",&numeros[i]);
	}
	for(int i=0;i<cant;i++)
	{
		//este ciclo se asegurara de que cada uno de los valores quede dentro de la iteracion correspondiente, es decir en este caso menor a 10
		for(int j=0;j<cant;j++)
		{
			//si se cumple que el vector en la posicion ejemplo, 0 es mayor a el vector en la posicion j+1, es decir en la posicion 2
			//se hara un cambio de variables haciendo uso de la variable auxiliar
			if(numeros[j]>numeros[j+1])
			{
				//declarar una variable auxiliar para realizar el cambio
				aux = numeros[j+1];
				numeros[j+1] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	
	printf("los numeros ordenados son:\n");
	for(int i=1;i<=cant;i++)
	{
		printf("%d ",numeros[i]);
	}
	getch();
	menu();
}

//funcion para ordenamiento burbuja invertido
void metodo_burbuja_inv(void)
{
	int numeros[100];
	//variable auxiliar para realizar el cambio
	int cant,aux;
	system("cls");
	printf("metodo burbuja de forma descendente\n\n");
	printf("ingrese la cantidad de numeros para ordenar de manera desendente:\n");
	scanf("%d",&cant);
	system("cls");
	for (int i=0;i<cant;i++)
	{
		printf("ingresa los numeros a ordenar:\n");
		scanf("%d",&numeros[i]);
	}
	for(int i=0;i<cant;i++)
	{
		for(int j=0;j<cant;j++)
		{
			if (numeros[j]>numeros[j+1])
			{
				aux = numeros[j+1];
				numeros[j+1] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	printf("los numeros ordenados de forma descendente son:\n");
	for(int i=cant;i>0;i--)
	{
		printf("%d ",numeros[i]);
	}
	getch();
	menu();
}
void salir(void)
{
	int s;
	Sleep(1000);
	system("cls");
	printf("ha elegido la opcion de salir:\n");
	Sleep(1000);
	printf("ingrese el numero 0 para salir o cualquier otro numero para finalizar.\n");
	scanf("%d",&s);
	if(s==0)
	{
		printf("usted ha decidido finalizar el programa.\n");
		exit(-1);
		getch();
	}
	else
	{
		printf("ha decidido permanecer en el programa:\n");
		getch();
		menu();
	}
}
void seleccion(void)
{
	int numero[100];
	int aux,min,cant;
	system("cls");
	printf("metodo de ordenamiento por seleccion\n\n");
	printf("ingresa la cantidad de numeros a ordenar:\n");
	scanf("%d",&cant);
	for (int i=0;i<cant;i++);
	{
		printf("ingrese los numeros a ordenar:\n");
		scanf("%d",&numero[i]);
	}
	for(int i=0;i<cant;i++)
	{
		//el primer numero sera tomado como valor para la variable min
		min = i;
		for(int j=0;i<cant;j++)
		{
			//si numero en la posicion j es menor que numero en la variable minimo
			if(numero[j] < numero[min])
			{
				//si es menor el valor que habia en j pasara a almacenarse en la variable min
				min = j;
			}
		}
		//uso de la variable auxiliar para mover los numeros 
		aux = numero[i];
		numero[i] = numero[min];
		numero[min] = numero[aux];
	}
	printf("ordenamiento por seleccion directa de forma ascendente:\n");
	for(int i=0; i<cant;i++)
	{
		printf("%d ",numero[i]);
	}
	getch();
	menu();
}
