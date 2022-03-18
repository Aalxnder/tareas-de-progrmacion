/*hacer la simulacion de un cajero automatico con un saldo actual, utilizar funciones con parametros y el cajero debe tener las opciones de 
1. consultar saldo
2. depositar dinero
3. retirar dinero
4. salir*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
//prototipos
void menu(void);
void consultar (float saldo);
void depositar (float deposito);
void retirar (float retiro);
int salir (void);
//variables globales
float saldo = 2000;
float deposito;
float retiro;

int main()
{
	system("COLOR E0");
	menu();
	return 0;
}

void menu()
{
	int opc;
	do 
	{
		printf("\nMENU.\n");
		printf("[1] consultar saldo\n");
		printf("[2] depositar dinero\n");
		printf("[3] retirar dinero\n");
		printf("[4] salir\n");
		printf("elija una opcion\n ");
		
		printf("digite la opcion que desea elegir:\n");
		scanf("%d",&opc);
		system("CLS");
		switch(opc)
		{
			case 1:
			{
				printf("\n");
				consultar(saldo);
				break;
			}
			case 2:
			{
				printf("depositar efectivo\n");
				printf("ingrese la cantidad que desea depositar:\n ");
				scanf("%f",&deposito);
				depositar(deposito); //enviar el parametro a la funcion
				break;
			}
			case 3:
			{
				printf("retirar efectivo\n");
				printf("ingrese la cantidad que desea retirar\n");
				scanf("%f",&retiro);
				while(retiro > saldo)
				{
					Sleep(1000);
					printf("error, no hay suficiente saldo disponible para su retiro");
					printf("el saldo disponible es de %.1f",saldo);
					printf("ingrese la cantidad que desea retirar\n");
					scanf("%f",&retiro);
				}
				retirar(retiro);
				break;
			}
			case 4:
			{
				salir();
				getch();
				break;
			}
			default:
				printf("opcion no valida\n");
				break;
		}
	}while(opc != 4);
}
//funcion de consultar saldo.
void consultar(float saldo)
{
	printf("consultar efectivo disponible\n");
	printf ("el saldo actual en el cajero es de %.1f\n",saldo);
	//verificar el saldo disponible y si mandar sugerencias segun el saldo disponible
	if (saldo >0 && saldo <= 400)
	{
		printf("quedan %.1f pesos de saldo disponible, se recomienda agregar fondos\n",saldo);
	}
	else if (saldo >400 && saldo <=1000)
	{
		printf("aun queda %.1f pesos de saldo disponible pero podria agotarse pronto\n",saldo);
	}
	else if (saldo >1000)
	{
		printf("aun queda %.1f pesos de saldo disponible, queda una buena cantidad de saldo\n",saldo);
	}
	else if (saldo <=0)
	printf("se ha agotado el saldo disponible");
}
void depositar(float deposito)
{
	Sleep(2000);
	printf("deposito realizado de %.1f con exito\n",deposito);
	saldo = saldo + deposito; //actualizar el saldo actual
	Sleep(2000);
	printf("el saldo actual es de %.1f \n",saldo);
	
}
void retirar(float retiro)
{
	Sleep(2000);
	printf("retiro realizado con exito!!\n");
	printf("su retiro de %.1f ha sido exitoso!.\n",retiro);
	saldo -= retiro;
	Sleep(2000);
	printf("el saldo actual es de %.1f \n",saldo);
	
}
int salir()
{
	printf("opcion de salir");
	return 0;
}
