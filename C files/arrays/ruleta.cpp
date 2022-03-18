#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define N 40
#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))
float dinero= 5000;


void menu(void);
void color_negro(void);
void agregar_fondos(void);
void color_rojo(void);
void revisar(void);
void agregar(void);
void salir(void);
int main()
{
	system("color E0");
	printf("los numeros pares son de color negro y los numeros impares son de color rojo\n\n");
	menu();
	return 0;
}

void menu(void)
{
	int opc;
	system("cls");
	do
	{
		printf("Menu\n[1] Jugar con color negro\n[2] Jugar con color rojo\n[3] Revisar dinero disponible\n[4] Agregar fondos\n[5] Salir\n");
		printf("Elija una opcion\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
			{
				color_negro();
				break;
			}
			case 2:
			{
				printf("Hello world\n");
				color_rojo();
				break;
			}
			case 3:
			{
				revisar();
				break;
			}
			case 4:
			{
				agregar();
				break;
			}
			case 5:
			{
				salir();
			}
			default:
			{
				printf("Opcion no valida\n");
			}
		}
	}while(opc != 7);
}

void color_negro(void)
{
	float apuesta;
	int num_apuesta;
	int opc;
	system("cls");
	printf("El dinero en tu cuenta es de %.1f\n\n",dinero);
	printf("Ingresa la cantidad de dinero que deseas apostar:\n");
	scanf("%f",&apuesta);
	while(apuesta > dinero)
	{
		printf("Error, No tienes suficientes fondos para cubrir esta apuesta\n");
		printf("Ingresa la cantidad de dinero que deseas apostar:\n");
		scanf("%f",&apuesta);
	}
	randomize;
	num_apuesta=random(N);
	printf("Girando la ruleta\n");
	Sleep(3000);
	printf("El numero dado por la ruleta es %d\n",num_apuesta);
	if (num_apuesta %2 == 0)
	{
		apuesta = apuesta*3;
		dinero = dinero+apuesta;
		printf("has ganado\n");
		printf("ganaste la cantidad de %.1f\n",apuesta);
		printf("Tus fondos totales ahora son de %.1f\n",dinero);
		if(dinero <= 0)
		{
			agregar_fondos();
		}
	}
	else if(num_apuesta %2 !=0)
	{
		dinero = dinero-apuesta;
		printf("has perdido\n");
		printf("Has perdido la cantidad de %.1f\n",apuesta);
		printf("tus fondos totales ahora son %.1f\n",dinero);
		if(dinero <= 0)
		{
			agregar_fondos();
		}
	}
	system("pause");
}
void agregar_fondos(void)
{
	int opc;
	system("cls");
	printf("ya no te quedan fondos para seguir jugando, deseas recargar mas fondos?\n[1] Si [2]\nNo\n");
	scanf("%d",&opc);
	if(opc == 1)
	{
		int fondos;
		char fondoss[20];
		printf("ingrese la cantidad de fondos que deseas agregar:\n");
		gets(fondoss);
		fondos=atof(fondoss);
		dinero = dinero + fondos;
	}
	if (opc == 2)
	{
		printf("se ha quedado sin fondos para continuar\n");
		Sleep(500);
		printf("cerrando el programa para que no se endeude de mas\n");
		exit(-1);
	}
	else
	{
		printf("opcion no disponible\n");
	}
}

void color_rojo()
{
	float apuesta;
	int num_apuesta;
	int opc;
	system("cls");
	printf("El dinero en tu cuenta es de %.1f\n\n",dinero);
	printf("Ingrese la cantidad de dinero que quiere apostar\n");
	scanf("%f",&apuesta);
	while(apuesta > dinero)
	{
		printf("Error, No tiene suficiente dinero para cubrir la apuesta\n");
		printf("Ingrese la cantidad de dinero que quiere apostar\n");
		scanf("%f",&apuesta);
	}
	randomize;
	num_apuesta=random(N);
	printf("Girando la ruleta\n");
	Sleep(3000);
	printf("El numero dado por la ruleta es %d\n",num_apuesta);
	if(num_apuesta %2 != 0)
	{
		apuesta = apuesta * 3;
		dinero = dinero+apuesta;
		printf("Felicidades, has ganado\n");
		printf("ganaste la cantidad de %.1f\n",apuesta);
		printf("tus fondos totales ahora son de %.1f\n",dinero);
		if(dinero <= 0)
		{
			agregar_fondos();
		}
	}
	else if(num_apuesta %2 == 0)
	{
		dinero = dinero-apuesta;
		printf("Has perdido\n");
		printf("has perdido la cantidad de: %.1f\n",apuesta);
		printf("Tus fondos totales son de: %.1f\n",dinero);
		if(dinero <= 0)
		{
			agregar_fondos();
		}
	}
}

void revisar(void)
{
	system("cls");
	printf("Has elejido la opcion de revisar los fondos\n");
	printf("Tu dinero en efectivo es: %.1f\n\n",dinero);
	if(dinero > 5000)
	{
		printf("Aun tienes una buena cantidad de dinero\n");
	}
	else if(dinero <= 5000)
	{
		printf("Tienes una cantidad suficiente de dinero\n");
	}
	else if(dinero <=500)
	{
		printf("Tienes pocos fondos en tu cuenta\n");
	}
	system("pause");
}

void agregar(void)
{
	float diner;
	system("cls");
	printf("Agregar fondos\n");
	printf("Ingresa la cantidad de dinero aue deseas depositar a tu cuenta\n");
	scanf("%f",&diner);
	dinero = dinero+diner;
	Sleep(500);
	printf("Se han agregado %.1f con exito\n",diner);
	printf("Tu dinero total ahora es de %.1f\n",dinero);
	system("pause");
}

void salir(void)
{
	int s;
	system("cls");
	printf("Ha decidido finalizar el programa\n");
	Sleep(500);
	printf("Ingrese 0 para finalziar o cualquier otro numero para permanecer en el programa\n");
	scanf("%d",&s);
	if(s==0)
	{
		printf("ha decidido finalizar el programa\n");
		exit(-1);
		system("pause");
	}
	else
	{
		printf("Ha decidido permanecer en el programa\n");
		system("pause");
		menu();
	}
}
