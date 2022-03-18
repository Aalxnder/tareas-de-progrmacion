//ejemplo de busqueda secuencial

//buscar el elemento dado en un vector v
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
//prototipos de funcion
void menu(void);
void secuencial(void);
void salir(void);
void binaria(void);
int main()
{
	//cambio de color de la consola
	system("color E0");
	menu(); //llamada a la funcion menu
	return 0;
}
//funcion menu
void menu(void)
{
	int opc;
	system("cls");
	//ciclo do while para hacer que el menu se repita al menos una vez
	do
	{
	printf("\nMenu\n");
	printf("[1] Busqueda secuencial\n");
	printf("[2] Busqueda binaria\n");
	printf("[3] Salir\n");
	printf("\nElija una opcion\n ");
	scanf("%d",&opc);
	
	//menu	
	switch(opc)
	{
		case 1:
		{
			printf("Busqueda secuencial\n");
			secuencial();
			break;
		}
		case 2:
		{
			printf("busqueda binaria\n");
			binaria();
			break;
		}
		case 3:
		{
			salir();
			break;
		}
		default:
		{
			printf("opcion no disponible\n");
		}
	}
	}while(opc != 3);
}
//busqueda secuencial
void secuencial(void)
{
	//vector
	int vector[100];
	//variable bandera
	char band = 'F';
	//variables
	int i=0;
	int dato;
	int cant;
	//obtener el valor de la variable cant
	printf("ingresa la cantidad de elementos del vector:\n");
	scanf("%d",&cant);
	//con el valor de cant rellenar el vector
	for (int i=0;i<cant;i++)
	{
		printf("introduce el valor %d del vector:\n",i);
		scanf("%d",&vector[i]);
	}
	printf("introduce el valor a buscar:\n");
	scanf("%d",&dato);
	
	while((band == 'F')&&(i<cant))
	{
		if(vector[i]==dato)
		{
			band = 'V';
		}
	i++;
	}
	if(band == 'F')
	{
		printf("ese numero no se encuentra en el vector\n");
	}
	else if(band == 'V')
	{
		printf("el valor se ha encontrado en la posicion %d\n",i);
	}
	getch();
	menu();
}
void salir(void)
{
	int s;
	system("cls");
	printf("realmente desea salir del programa?\n");
	Sleep(1000);
	printf("oprima 0 para finalizar o cualquier numero para permanecer en el programa\n");
	scanf("%d",&s);
	if(s==0)
	{
		Sleep(500);
		printf("usted ha decidido finalizar el programa:\n");
		Sleep(1000);
		exit(-1);
		getch();
	}
	else
	{
		Sleep(500);
		printf("Ha decidido permanecer en el programa.\n");
		getch();
		menu();
	}
}
void binaria(void)
{
	//vector 
	int vector[100];
	//variables para el ordenamiento de el arreglo
	int cant,aux;
	system("cls");
	printf("ingresa la longitud del arreglo\n");
	scanf("%d",&cant);
	system("cls");
	//llenar el arreglo con los valores que el usuario elija
	for(int i=0;i<cant;i++)
	{
		printf("ingresa el valor numero %d del vector:\n",i);
		scanf("%d",&vector[i]);
	}
	//metodo de ordenamiento burbuja
	for (int i=0;i<cant;i++)
	{
		for(int j=0;j<cant;j++)
		{
			if(vector[j] > vector[j+1])
			{
				aux = vector[j+1];
				vector[j+1] = vector[j];
				vector[j] = aux;
			}
		}
	}
	//imprimir los numeros ordenados
	printf("los numeros ordenados son:\n");
	for(int i=0;i<cant;i++)
	{
		printf("%d ", vector[i]);
	}
	//variables necesarias para la busqueda
	int inf,sup,mitad,dato;
	char band = 'F';
	printf("\ningresa el numero que deseas buscar en el vector:\n");
	scanf("%d",&dato);
	//esta vale 0 pq desde ahi inicia el array
	inf = 0;
	//esta variable la inicalizamos en la longitud del arreglo
	sup = cant;
	//bucle while para realizar la busqueda
	while(inf <= sup)
	{
		//darle valor a la variable mitad
		mitad=(inf + sup)/2;
		
		//hayar el valor por medio de condicionales
		if(vector[mitad] == dato)
		{
			//en caso de que el valor mitad sea igual a dato quiere decir que encontramos el valor
			band = 'V'; //la variable bandera cambia a verdadero para indicarnos que el valor ha sido encontrado
			break; //en caso de que sea correcta pues se cierra el ciclo y con el break salimos del bucle
		}
		//si este if se cumple el algoritmo seguira buscando de el valor mitad hacia la derecha hasta que sea igual a dato, es decir hasta que encuentre el numero
		if(vector[mitad] > dato)
		{
			sup = mitad;
			mitad=(inf + sup)/2;
		}
		//lo mismo que el ciclo anterior pero hacia la izquierda
		if(vector[mitad] < dato)
		{
			inf = mitad;
			mitad = (inf + sup)/2;
		}
		
	}
	if (band == 'F')
	{
		printf("el numero no existe en el vector.\n");
	}
	else if(band == 'V')
	{
		printf("numero encontrado en la posicion %d \n",mitad);
	}
	getch();
	menu();
}
