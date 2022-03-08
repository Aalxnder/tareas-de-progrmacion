/*Planteamiento: Crea una tabla con 15 valores distribuidos en 5 filas y 3.  Preguntar al usuario que valor entero desea introducir a la tabla. Los valores tendrán que ser en un rango del 1 al 50. Realizar los ajustes necesarios para que el usuario escriba un valor entero en ese rango de lo contrario que muestre un mensaje de error y que regrese a preguntar los valores. Tener un menú con las siguientes opciones: 
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
int imprimirori(int matriz[3][5]);
int imprimirord(int matriz[3][5]);
void salir(int matriz[3][5]);
//variable global
int bandera=0;
//funcion main
int main(void)
{
	system("color E0");
	capturar();
	system("pause");
	return 0;
}
//funion capturar
void capturar(void)
{
	//aqui declaro la matriz y de asigno valores
	//esto se lanzara al ejecutar el programa, asi q no abra error de que el usuario pase a otras opciones sin agregar valores
	int matriz[3][5];
	printf("Agregar valores a la matriz. no podra agregar numero mayores a 50\n");
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			system("cls");
			printf("Ingresa el valor de la fila %d, columna %d:\n",i,j);
			scanf("%d",&matriz[i][j]);
			while((matriz[i][j]>50)|| (matriz[i][j]<0))
			{
				system("cls");
				printf("error, solo se pueden agregar numros menores a 50\n");
				system("pause");
				printf("Ingresa el valor de la fila %d, columna %d:\n",i,j);
				scanf("%d",&matriz[i][j]);
				
			}
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
	//este do while hace q el menu se repita siempre
	do
	{
		printf("MENU\n[1] ordenar valores\n[2] imprimir valores originales\n[3] imprimir valores ordenados\n[4] salir\nElija una opcion\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
			{
				ordenar(matriz);
				break;
			}
			case 2:
			{
				imprimirori(matriz);
				break;
			}
			case 3:
			{
				imprimirord(matriz);
				break;
			}
			case 4:
			{
				salir(matriz);
				break;
			}
			default:
			{
				printf("opcion no valida\n");
				break;
			}
		}
	}while(opc != ' ');
	system("cls");
}

int imprimirori(int matriz[3][5])
{
	system("cls");
	FILE *archivo;
	archivo=fopen("matricesordenadas.txt","at"); //abro el archivo en modo lectura y escritura tipo texto
	//Esto revisa si el puntero del archivo es NULL quiere decir q no se pudo abiri, entonces lanzo este error
	if(archivo==NULL)
	{
		perror("error, no se ha podido abrir el archivo\n");
		return 1;
	}
	//si se pudo abir se ejecuta esto
	else
	{
		printf("Imprimiendo los valores originales\n");
		Sleep(500);
		printf("esta matriz tambien se imprimira en un archivo externo\npor lo que puede ver los valores impresos en un archivo en esta misma direccion\nEL archivo se llamara matricesordenadas.txt\n");
		
		//imprimo las matrices
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<5;j++)
			{
				//el printf me imprime la matriz en la consola
				printf("%d ",matriz[i][j]);
				//el fprintf me imprime la matriz en el archivo creado
				fprintf(archivo,"%d ",matriz[i][j]);
			}
			//imprimo saltos de linea tanto en consola como en el archivo pa q se vean en forma de matriz
			printf("\n");
			fputc('\n',archivo);
		}
		fputc('\n',archivo);
	}
	fclose(archivo); //cierro el archivo 
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
	int aux; //variable auxiliar
	
	//ordeno los valores mediante metodo burbuja, todos estos for son comparaciones
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			for(i1=i;i1<3;i1++)
			{
				int caux=0;
				if(i==i1)
				{
					caux=j+1;
				}
				for(j1=caux;j1<5;j1++)
				{
					if (matriz[i][j]>matriz[i1][j1])
					{
						//aqui se hace el cambio de valores
						aux=matriz[i1][j1];
						matriz[i1][j1]=matriz[i][j];
						matriz[i][j]=aux;
					}
				}
			}
		}
	}
	
	//este valor es el de la variable global q me dira si la matriz se ha ordenado, de lo contrario no me dejara mostrar la matriz ordenada hasta q no se ordene antes
	bandera=1;
	printf("la matriz se ha ordenado\n");
	system("pause");
	menu(matriz);
}
//imprimir ordenados
int imprimirord(int matriz[3][5])
{
	system("cls");
	//esto se va a iomprimir siempre y cuando bandera sea igual a 1, es decir que se haya ordenado antes
	if(bandera == 1)
	{
		//es el mismo procedimiento de abrir el archivo
		FILE *archivo;
		archivo=fopen("matricesordenadas.txt","at");  //abro el archivo en modo lectura/escritura de tipo texto
		if(archivo==NULL)
		{
			perror("Error, no se ha podido imprimir el archivo\n");
			return 2;
		}
		else
		{
			printf("imprimiendo la matriz ordenada\n");
			Sleep(500);
			printf("esta matriz tambien se imprimira en un archivo externo\npor lo que puede ver los valores impresos en un archivo en esta misma direccion\nEL archivo se llamara matricesordenadas.txt\n");
			int i,j;
			for(i=0;i<3;i++)
			{
				for(j=0;j<5;j++)
				{
					printf("%d ", matriz[i][j]);
					fprintf(archivo,"%d ",matriz[i][j]);
				}
				fputc('\n',archivo);
				printf("\n");
			}
			fputc('\n',archivo);
		}
		fclose(archivo);
	}
	else
	{
		Sleep(500);
		printf("La matriz aun no se ha ordenado\n");
		Sleep(500);
		printf("Deberia ordenarla primero\n");
	}

	system("pause");
	menu(matriz);
}

//opcion de salir
void salir(int matriz[3][5])
{
	int s;
	system("cls");
	Sleep(500);
	printf("realmente quiere salir?\n");
	printf("presione 0 para salir o otro numero para permanecer\n");
	scanf("%d",&s);
	if(s==0)
	{
		printf("ha decididco finalizar el programa\n");
		exit(-1);
		system("pause");
	}
	else
	{
		printf("Ha decidido permanecer en el programa\n");
		system("pause");
		menu(matriz);
	}
}
