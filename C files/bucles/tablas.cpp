//mostrar las tablas de multiplicar
/*#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	//variable para almacenar que tabla desea ver el usuario
	int tabla, multi,i,hasta;
	system("COLOR E0");
	printf("que tabla de multiplicar quieres ver?:\n");
	scanf("%d",&tabla);
	
	printf("digite hasta que numero desea imprimir las tablas\n");
	scanf("%d",&hasta);
	
	printf("mostrando la tabla del %d\n",tabla);
	
	for(i=1;i<=hasta;i++)
	{
		multi = tabla * i;
		printf("%d x %d = %d\n",tabla,i,multi);
	}

	getch();
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void menu(void);
void sumar (float numa,float numb);
void restar (float numa,float numb);
void multiplicar (float numa,float numb);
void dividir (float numa,float numb);
void potencia (float numa,float numb);
void fin (void);
int main()
{
	system("COLOR E0");
	menu(); //llamar funcion menu
	
	
	getch();
	return 0;
}
void menu(void)
{
	int opc; //almacenar opcion que el usuario elija
	do{
	printf("\n");
	printf("[1] sumar\n");
	printf("[2] restar\n");
	printf("[3] multiplicar\n");
	printf("[4] dividir\n");
	printf("[5] potencia\n");
	printf("[6] salir\n");
	//alamecnar la opcion
	
	
	printf("digite la opcion que desea elegir:\n");
	scanf("%d",&opc);
	//pedir los valores
	float numa,numb;
	printf("digite un valor para el numero 1:\n");
	scanf("%f",&numa);
	printf("digite un valor para el numero 2:\n");
	scanf("%f",&numb);
	system("CLS");
	switch(opc)
	{
		case 1:
		{
			sumar (numa,numb);
			getch();
			break;		
		}
		case 2:
		{
			restar (numa,numb);
			getch();
			break;
		}
		case 3:
		{
			multiplicar(numa,numb);
			getch();
			break;
		}
		case 4:
		{
			dividir(numa,numb);
			getch();
			break;
		}
		case 5:
		{
			potencia(numa,numb);
			getch();
			break;
		}
		case 6:
		{
			fin ();
			getch();
			break;
		}
		default:
			printf("opcion invalida");
	}
	}while(opc != 6);
		
}
void sumar(float numa,float numb)
{
	float suma;
	suma = numa + numb; 
	printf("el resultado de su calculo es %.1f\n ",suma);
}
void restar(float numa,float numb)
{
	float resta;
	resta = numa - numb; 
	printf("el resultado de su calculo es %.1f\n ",resta);
}
void multiplicar (float numa,float numb)
{
	float mult;
	mult = numa * numb; 
	printf("el resultado de su calculo es %.1f\n ",mult);
}
void dividir(float numa,float numb)
{
	float div;
	div = numa / numb; 
	printf("el resultado de su calculo es %.1f\n ",div);
}
void potencia(float numa,float numb)
{
	printf("el resultado de su calculo es %.1f\n ",pow(numa,numb));
}
void fin(void)
{
	printf("fin del programa\n");
	getch();
}
