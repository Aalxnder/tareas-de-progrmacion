/*Realiza un documento con el diagrama de flujo, pseudocódigo del planteamiento y el código en el lenguaje de C para el planteamiento de la Actividad 5. Arreglos pero, usando funciones para cada menú.  Es decir, cada opción del 1 al 4 del menú será una función con paso de parámetros (elige si usaras parámetros por valor o por referencia).  Debes decidir que función regresa valor y cual no.

Aquí te dejo nuevamente el planteamiento de la Actividad 5:
Planteamiento: Crea un arreglo de tipo entero, pregunta al usuario cuántos valores enteros  va a capturar, esa cantidad será la longitud del arreglo.  Tener un menú con las siguientes opciones:

1. Capturar valores
2. Ordenar valores
3. imprimir valores originales
4. imprimir valores ordenados
5. Salir

Cuando se oprima la opción de salir deberá preguntar al usuario si desea salir o no antes de salir del programa.

Nota: El programa deberá tener por lo menos una función con paso de parámetros por valor y una función con paso de parámetros por referencia

Levi Alexander Perez Elizondo

fecha de elaboracion 5 de abril del 2022

para esta tarea para variarle usare el metodo de ordenamiento quick sort ya que es de las mas rapidas y pues usa recursivadad

PD: se me paso subirlo ayer pq el zip pesaba demasiado y no me dejaba subirlo aun con la maxima compresion */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
//variables globales
int bandera = 0;
int bandera2 = 0;
int cant;
//prototipos
void menu(int *vector, int *vectorori);
int capturar(int *vector, int *vectorori);
int ordenar(int *vector, int *vectorori);
int particion(int *vector,int izquierda,int derecha);
void quicksort(int vector[cant],int izquierda,int derecha);
void intercambiar(int*a,int*b);
int imprimirord(int* vector, int* vectorori);
int imprimirreves(int* vector, int* vectorori);
int imprimirori(int* vector, int* vectorori);
void salir(int* vector, int* vectorori);
void liberar(int* vector, int* vectorori);


int main(void)
{
	system("color E0");
	int* vector;
	int* vectorori;
	capturar(vector,vectorori);
	system("pause");
	return 0;
}


//funcion menu
void menu(int *vector, int *vectorori)
{
	system("cls");
	int opc;
	do
	{
		puts("Menu\n[1] Ordenar valores\n[2] Imprimir valores originales\n[3] Imprimir valores ordenados\n[4] imprimir de mayor a menor(Al reves)\n[5] Salir\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
			{
				Sleep(1000);
				ordenar(vector,vectorori);
				system("pause");
				menu(vector, vectorori);
				break;
			}
			case 2:
			{
				Sleep(1000);
				imprimirori(vector,vectorori);
				system("pause");
				menu(vector, vectorori);
				break;
			}
			case 3:
			{
				Sleep(1000);
				imprimirord(vector,vectorori);
				system("pause");
				menu(vector, vectorori);
				break;
			}
			case 4:
            {
                Sleep(1000);
                imprimirreves(vector,vectorori);
                system("pause");
                menu(vector,vectorori);
                break;
            }
			case 5:
			{
				Sleep(1000);
				salir(vector,vectorori);
				system("pause");
				menu(vector, vectorori);
				break;
			}
			default:
			{
				puts("opcion no valida\n");
				system("pause");
				system("cls");
				break;
			}
		}
	}while(opc != 248483);

}


//funcion de capturar valores
int capturar(int *vector, int *vectorori)
{

	int i;
	printf("Ingresa la cantidad de valores del vector\n");
	scanf("%d",&cant);

	//asignacion de memoria dinamica
	vector = (int*)malloc(cant*sizeof(int));
	vectorori = (int*)malloc(cant*sizeof(int));

	//revisar si se pudo asignar la memoria dinamica
	if((vector == NULL)||(vectorori == NULL))
	{
		perror("Error en la asignacion de memoria\n");
		return 1;
	}
	else
	{
		for(i=0;i<cant;i++)
		{
			printf("Ingresa el valor del vector en la posicion %d\n",i);
			scanf("%d",&*(vector+i));
			*(vectorori+i) = *(vector+i);
		}
	}
	bandera = 1;
	system("pause");
	menu(vector,vectorori);
	//ordenar(vector,vectorori);
}

int ordenar(int *vector,int *vectorori)
{

	if(bandera == 1)
	{

		int i;
		double segundos;
		clock_t tiempo_inicio,tiempo_final;
		tiempo_inicio=clock();
		//invocar ala funcion quicksort recorriendo todo el arreglo desde el inicio hasta el final
		quicksort(vector,0,cant-1);
		printf("numeros ordenados\n");

		puts("los numeros se han ordenado\n");

		bandera2 = 1;

		tiempo_final=clock();
		segundos=(tiempo_final-tiempo_inicio);

		printf("%.1lf clocks por minuto\n",segundos);

		system("pause");

		menu(vector,vectorori);
	}
	else
	{
		printf("Primero deberia rellenar los valores del vector\n");
		system("pause");
		menu(vector,vectorori);
	}
}


void quicksort(int vector[cant],int izquierda,int derecha)
{
	if(izquierda<derecha)
	{
	    /* la función quicksort que recibe el arreglo y los índices izquierda y derecha.
	    y se usa la recursividad para que se divida el arreglo y se invoca a quicksort 2 veces*/
		int indice_particion=particion(vector,izquierda,derecha);
		quicksort(vector,izquierda,indice_particion);
		quicksort(vector,indice_particion+1,derecha);
	}
}

//intercambio de variables mediante punteros
void intercambiar(int*a,int*b)
{
	int aux=*a;
	*a=*b;
	*b=aux;
}


//esta funcion que va dividiendo el arreglo
int particion(int* vector,int izquierda,int derecha)
{
	int pivote=vector[izquierda]; //variable pivote
	while(1)  //esto equivale a un while true
	{
		 /*Mientras cada elemento desde la izquierda esté en orden (sea menor que el pivote) continúa avanzando el índice*/
		while(vector[izquierda]<pivote)
		{
			izquierda ++;
		}
		/*Mientras cada elemento desde la derecha esté en orden (sea mayor que el pivote) continúa disminuyendo el índice*/
		while(vector[derecha]>pivote)
		{
			derecha--;
		}
		/*Si la izquierda es mayor o igual que la derecha significa que no necesitamos hacer ningún intercambio de variables, pues los elementos ya están en orden (al menos en esta iteración)*/
		if(izquierda>=derecha)
		{
			//se retorna derecha pa saber donde nos quedamos para poder dividir el arreglo y indicar donde nos quedamos
			return derecha;
		}
		/* Si las variables quedaron "lejos" (es decir, la izquierda no superó ni alcanzó a la derecha) significa que se detuvieron porque encontraron un valor que no estaba
        en orden, así que lo intercambiamos*/
		else
		{
			intercambiar(&vector[izquierda],&vector[derecha]);
			izquierda++;
			derecha--;
		}
	}
}


int imprimirord(int* vector, int* vectorori)
{
	if((bandera == 1)&&(bandera2 == 1))
	{
		//crear el fichero y puntero al archivo
		FILE* archivo;

		archivo = fopen("vectores.txt","at");

		if(archivo == NULL)
		{
			perror("No se ha podido crear el archivo\n");
			return 1;
		}

		else
		{
			int i;
			printf("valores ordenados\n");
			for(i=0;i<cant;i++)
			{
				printf("Valor %d: %d\n",i,*(vector+i));
				fprintf(archivo,"Valor %d: %d\n",i,*(vector+i));
			}
			fputc('\n',archivo);
		}
		system("pause");
		menu(vector,vectorori);

	}
	else
	{
		printf("Primero debe ordenar los valores del vector\n");
		system("pause");
		menu(vector,vectorori);
	}

}


int imprimirreves(int* vector, int* vectorori)
{
    if((bandera == 1)&&(bandera2 == 1))
	{
		//crear el fichero y puntero al archivo
		FILE* archivo;

		archivo = fopen("vectores.txt","at");

		if(archivo == NULL)
		{
			perror("No se ha podido crear el archivo\n");
			return 1;
		}

		else
		{
			int i;
			printf("valores ordenados\n");
			for(i=cant-1;i>=0;i--)
			{
				printf("Valor %d: %d\n",i,*(vector+i));
				fprintf(archivo,"Valor %d: %d\n",i,*(vector+i));
			}
			fputc('\n',archivo);
		}
		system("pause");
		menu(vector,vectorori);

	}
	else
	{
		printf("Primero debe ordenar los valores del vector\n");
		system("pause");
		menu(vector,vectorori);
	}
}


int imprimirori(int* vector, int* vectorori)
{
	int i;
	if(bandera == 1)
	{
		FILE* archivo;

		archivo = fopen("vectores.txt","at");

		if(archivo == NULL)
		{
			perror("No se ha podido abrir el archivo\n");
			return 1;
		}
		printf("Imprimiendo los valores originales...\n");
		Sleep(1000);

		for(i=0;i<cant;i++)
		{
			printf("Valor %d: %d\n",i,*(vectorori+i));
			fprintf(archivo,"Valor %d: %d\n",i,*(vectorori+i));
		}
		fputc('\n',archivo);

		system("pause");
		menu(vector,vectorori);
	}
	else
	{
		Sleep(1000);
		printf("primero deberia llenar los valores\n");
		system("pause\n");
		capturar(vector,vectorori);
	}
}


void salir(int* vector, int* vectorori)
{
	int s;
	system("cls");
	printf("realmente desea salir del programa?\n\n");
	//pedirle al usuario si desea salir
	printf("presione 0 para finalizar\nO cualquier otro numero para permanecer en el programa\n>");
	scanf("%d",&s);
	//si elije 0 se acaba el programa con la funcion exit(-1) y si no no sale
	if(s == 0)
	{
		Sleep(500);
		system("pause");
		printf("ha decidido salir del programa de salir\n");
		liberar(vector,vectorori);
		exit(-1);
	}
	else
	{
		Sleep(500);
		printf("usted ha decidido permanecer en el programa\n");
		menu(vector,vectorori);
	}
}


void liberar(int* vector, int* vectorori)
{
    free(vector);
    free(vectorori);
}
