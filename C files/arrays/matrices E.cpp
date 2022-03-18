/*Matrices Ejercicios*/
/*escribe un programa que defina una matriz de 10x10 numeros enteros e inicalizalos con el valor -1 las filas impares y las columnas pares a 0*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color E0");
	int matriz[10][10];
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i % 2 == 0)
			{
				matriz[i][j]=0;
			}
			else if(i % 2 != 0)
			{
				matriz[i][j]=-1;
			}
		}
	}
	printf("matriz\n");
	for (i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d ",matriz[i][j]);
		}
	}
	system("pause");
	return 0;
} */
/*escribir un programa con una matriz de 3*3 que pida al usuario los numeros, despues el programa debe mostrar los 3 numeros de cada fila 
y cada columna y imprimir los resultados*/
/*#include <stdio.h>
#include <stdlib.h>
//prototipos
void capturar_valores(int matriz[3][3]);
void imprimir_matriz(int matriz[3][3]);
void sumaver(int matriz[3][3],int vertical[4],int suma);
void sumahor(int matriz[3][3],int horizontal[4],int suma);
int main()
{
	system("color E0");
	int matriz[3][3];
	int i,j,suma,sumah;
	int horizontal[4],vertical[4];
	capturar_valores(matriz);
	imprimir_matriz(matriz);
	sumaver(matriz,vertical,suma);
	sumahor(matriz,horizontal,sumah);
	system("pause");
	return 0;
}
void capturar_valores(int matriz[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("ingrese los valores de el espacio en la fila %d y columna %d\n",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
}
void imprimir_matriz(int matriz[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void sumaver(int matriz[3][3],int vertical[4],int suma)
{
	int i,j;
	suma=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			suma+= matriz[i][j];
		}
		vertical[i]=suma;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",vertical[i]);
		}
		printf("\n");
	}
	printf("\n");
}
void sumahor(int matriz[3][3],int horizontal[4],int sumah)
{
	int i,j;
	sumah =0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sumah+=matriz[j][i];
		}
		horizontal[i]=sumah;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",horizontal[i]);
		}
		printf("\n");
	}
	printf("\n");
}*/
/*escribir una matriz de 5x5 elementos
*Pedir por teclado los valores de sus elementos
*imprimir la diagonal principal
*calcular la media de la trtiangular superior*/
/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system("color E0");
	int m[5][5];
	int fila, columna;
	int suma, cont, columna_inicial;
	float media;

	// Inicializamos la matriz
	for (fila = 0; fila < 5; fila++)
	{
		for (columna = 0; columna < 5; columna++)
		{
			printf("Introduce el valor de la columna %i, fila %i: ", columna, fila);
			scanf("%i", &m[columna][fila]);
		}
	}

	// Mostramos la matriz en la pantalla
	for (fila = 0; fila < 5; fila++)
	{
		for (columna = 0; columna < 5; columna++)
		{
			printf("%3i ", m[columna][fila]);
		}
		printf("\n");
	}

	// Imprimimos la diagonal principal
	printf("Diagonal principal: ");
	fila = 0;  columna = 0;
	while (fila < 5)
	{
		printf("%i ", m[columna][fila]);
		fila++;
		columna++;
	}
	printf("\n");

	// Calculamos la suma de la triangular superior
	suma = 0;
	cont = 0;
	for (fila = 0; fila < 5; fila++)
	{
		columna_inicial = fila;
		for (columna = columna_inicial; columna < 5; columna++)
		{
			suma = suma + m[columna][fila];
			cont++;
		}
	}
	media = (float)suma / cont;
	printf("La media de la triangular superior es: %.2f ", media);
	printf("(suma = %i, cuenta = %i)\n", suma, cont);
	system("pause");
	return 0;
}*/
/*escribir un programa que genere al azar una matriz de NxN elementos (siendo n una constante definida al inicio del programa con un valor cualquiera)
y mostrara un menu al usuario despues y cada opcion debe invocar una funcion diferente
opcion 1: mostrar la matriz tal cual
opcion 2: mostrara los elementos que ocupan el borde de la matriz partiendo de la esquina superior izquierda 
opcion 3: espiral, hara un recorrido en espiral pór la matriz partiendo de la esqwuina superior izquierda
opcion 4: una opcion que pregunrtara al usuario si desea finalizar el programa o no, si decide no terminarlo te regresara al menu principal de lo contrario terminara*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define cant 3
#define N 30
#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))
//prototipos
void leer(int matriz[cant][cant]);
void menu(int matriz[cant][cant]);
void salir(int matriz[cant][cant]);
void imprimir(int matriz[cant][cant]);
void perimetro(int matriz[cant][cant]);
void espiral(int matriz[cant][cant]);
int main()
{
	system("color E0");
	int matriz[cant][cant];
	menu(matriz);
	system("pause");
	return 0;
}
void leer(int matriz[cant][cant])
{
	int i,j;
	randomize;
	for(i=0;i<cant;i++)
	{
		for(j=0;j<cant;j++)
		{
			matriz[i][j]=random(N);
		}
	}
}
void imprimir(int matriz[cant][cant])
{
	int i,j;
	for(i=0;i<cant;i++)
	{
		for(j=0;j<cant;j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	system("pause");
	menu(matriz);
}
void menu(int matriz[cant][cant])
{
	int opc;
	system("cls");
	do
	{
	printf("Menu\n[1] Imprimir la matriz original\n[2] Mostrar el perimetro de la matriz\n[3] Mostrar el espiral de la matriz\n[4] Salir\n");
	printf("elija una opcion\n");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
		{
			printf("Matriz Original\n");
			leer(matriz);
			imprimir(matriz);
			break;
		}
		case 2:
		{
			printf("Perimetro de la matriz\n");
			perimetro(matriz);
			break;
		}
		case 3:
		{
			printf("Espiral de la matriz\n");
			espiral(matriz);
			break;
		}
		case 4:
		{
			salir(matriz);
			break;
		}
		default:
		{
			printf("opcion no disponible\n");
		}
	}
	}while(opc != 5);
}
void salir(int matriz[cant][cant])
{
	int s;
	Sleep(1000);
	printf("Ha elegido la opcin de salir\n");
	Sleep(1000);
	printf("Ingresa 0 para finalizar el programa o cualquier otro numero para permanecer en el programa\n");
	Sleep(1000);
	if(s==0)
	{
		printf("ha decidido finalizar el programa\n");
		Sleep(1000);
		exit(-1);
	}
	else
	{
		printf("ha decidido permanecer en el programa\n");
		menu(matriz);
	}
}
void perimetro(int matriz[cant][cant])
{
	int i,j;
	printf("el perimetro es:\n");
	for (j=0;j<cant;j++)
	{
		printf("%d ",matriz[j][0]);
	}
	for(i=1;i<cant;i++)
	{
		printf("%d ",matriz[cant-1][i]);
	}
	for(j=cant-2;j>=0;j--)
	{
		printf("%d ",matriz[j][cant-1]);
	}
	for(i=cant-2;i>=1;i--)
	{
		printf("%d ",matriz[0][i]);
	}
	printf("\n");
	system("pause");
	menu(matriz);
}
void espiral(int matriz[cant][cant])
{
	int i,j,arr,aba,der,izq,cont;
	izq=0;
	der=cant;
	arr=0;
	aba=cant;
	for(cont=0;cont<=cant/2;cont++)
	{
		for(j=izq;j<der;j++)
		{
			printf("%d ",matriz[j][arr]);
		}
		for(i=arr+1;i<aba;i++)
		{
			printf("%d ",matriz[der-1][i]);
		}
		for(j=der-2;j>=izq;j--)
		{
			printf("%d ",matriz[i][aba-1]);
		}
		for(i=aba-2;i>=arr+1;i--)
		{
			printf("%d ",matriz[izq][i]);
		}
		izq++;
		der--;
		arr++;
		aba--;
	}
	printf("\n");
	system("pause");
	menu(matriz);
}
