/*imprimir los primeros 100 numeros primos 
levi alexander perez Elizondo 16 de febrero del 2022*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define N 100
//prototipos
void menu(void);
void primos(void);
void salir(void);
void archivos(void);
int n;
int main()
{
	//cambiar el color a la consola por un amarillo 
	system("color E0");
	//llamar a la funcion menu
	menu();
	//pausar sistema;
	system("pause");
	return 0;
}

void menu(void)
{
	int opc;
	system("cls");
	//menu
	do
	{
		//repetir esto al menos una vez hasta que el bucle deje de cumplirse
		printf("Menu\n[1] imprimir numeros primos\n[2] imprimir en un archivo externo\n[3] Salir\n");
		scanf("%d",&opc);
		
		switch(opc)
		{
			case 1:
			{
				Sleep(500);
				primos();
				break;
			}
			case 2:
			{
				Sleep(500);
				archivos();
				break;
			}
			case 3:
			{
				Sleep(500);
				salir();
				break;
			}
			default:
			{
				Sleep(500);
				printf("Opcion  no valida\n");
				system("pause");
				menu();
			}
		}
	}while (opc != ' ');	
}

void primos(void)
{
	//variables locales
	int cont;
	int i;

	printf("Los primeros %d numeros primos son : \n", N);
	//inicializar variables
	cont=0;
	n=2;
	//repetir el bucle inical mientras el contador sea menor a N(100)
	while(cont<N)
	{
		//ciclo for iniciando i en 2 hasta N(100), para revisar si ese numero es divisible entre 2, 3 yasi sucesivamente
		for(i=2;i<n;i++)
			//si sobre i da de residuo 0
			if(n%i==0)break;
			//y ademas ese numero es igual a n es decir que es el mismo
        	if(i==n)
			{
				//imprimimos n
				printf("%d \t",n);
				cont++;
			}
		//se aumentan contadores
		n++;
	}
	//salto de linea
	printf("\n");
	//pausar sistema
	system("pause");
	system("cls");
}
//funcion de salir
void salir (void)
{
	int s;
	printf("desea salir del programa?\n");
	printf("[0] si o otro numero para permanecer\n ");
	scanf("%d",&s);
	//condicional doble
	if(s==0)
	{
		Sleep(500);
		printf("Ha decidido finalizar el programa\n");
		//esto finaliza el programa
		exit(-1);
		system("pause");
	}
	else
	{
		Sleep(500);
		printf("ha decidido permanecer en el programa\n");
		//volver al menu
		system("pause");
		menu();
	}
	system("cls");
}

void archivos(void)
{
	printf("Imprimir numeros primos en un archivo extero\n");
	printf("revisa el archivo creado en la misma carpeta donde esta este codigo\n");
	//creo el punter al archivo
	FILE* archivo;
	//abro el archivo(si no existe se va a crear pero el modo "w" va a sobreescribir los datos asi que no se imprimiran nuevos datos )
	archivo=fopen("numerosprimos.txt","w");
	//compruebo si se pudo abrir el archivo
	if(archivo==NULL)
	{
		perror("No se ha podido escribir en el archivo");
		
	}
	//si se pudo abrir se ejecuta el mismo codigo que te imprime los numeros primos
	else
	{
		int cont;
		int i;
		

		//inicializar variables
		cont=0;
		n=2;
		//repetir el bucle inical mientras el contador sea menor a N(100)
		while(cont<N)
		{
			//ciclo for iniciando i en 2 hasta N(100), para revisar si ese numero es divisible entre 2, 3 y asi sucesivamente
			for(i=2;i<n;i++)
				//si sobre i da de residuo 0
				if(n%i==0)break;
				//y ademas ese numero es igual a n es decir que es el mismo
        		if(i==n)
				{
					//imprimo n en el archivo con fprintf
					fprintf(archivo,"%d \t",n);
					cont++;
				}
			//se aumentan contadores
			n++;
		}
	//salto de linea
	printf("\n");
	}
	//cerrar archivo pr liberar memoria
	fclose(archivo);
	system("pause");
	system("cls");
}
