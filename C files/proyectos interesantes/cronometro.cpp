//cronometro o alarma dandole al usuario cuando frenar
#include <stdio.h>
#include <windows.h>  //sleep()
#include <stdlib.h>
#include <conio.h>

int main()
{
	//el usuario digita cuando parar el cronometro
	int tipo;
	system("COLOR E0");
	printf("[1] horas\n");
	printf("[2] minutos\n");
	printf("[3] segundos\n");
	printf("Digite su opcion de cuando va a querer frenar su cronometro\n");
	scanf("%d",&tipo);
	//bucle por si el usuario ingresa una opcion invalida
	while(tipo>3)
	{
		printf("error, ingrese una opcion valida.\n");
		Sleep(3000);
		printf("\nDigite su opcion de cuando va a querer frenar su cronometro\n");
		scanf("%d",&tipo);
	}
	int cantidad;
	printf("digite la cantidad:\n");
	scanf("%d",&cantidad);
	
	//bucles del cronometro: horas, minutos y segundos
	for(int hora=0;hora<=24;hora++)
	{
		for(int minuto=0;minuto<=60;minuto++)
		{
			for (int segundo=0;segundo<=60;segundo++)
			{
				//un intervalo de 1000 ms = 1 seg
				Sleep(1000);
				//imprimir cronometro
				printf("\r%.2d : %.2d : %d",hora,minuto,segundo);
				//condicional para las horas
				if(tipo==1 && cantidad <=hora)
				{
					printf("cronometro finalizado\n");
					return 0;
				}
				//condicional para los minutos
				else if (tipo==2 && cantidad<=minuto)
				{
					printf("cronometro finalizado\n");
					return 0;
				}
				//condicional para los segundos
				else if (tipo==3 && cantidad<=segundo)
				{
					printf("\ncronometro finalizado\n");
					return 0;
				}
			}
		}
	}
	 
	
	return 0;
}

