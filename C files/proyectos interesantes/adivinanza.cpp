/*crear un prograam que genere un numer aleatorio del 1 hasta el 50
el usuario debe adivinar el numero aleatorio y en caso de que sea inclorrecto le daremos pistas pa q lo adivine*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //funcion que permita crear el numero aleatorio
#include <windows.h> //funcion sleep
#include <conio.h>
int main()
{
	srand(time(NULL));
	//se crea el numero aleatorio y se guarda dentro de la variable random
	int random=1+rand() %((50+1)-1);
	system("COLOR E0");
	//variable que almacenara lo que el usuario digite
	int adivinanza;
	//mostrar el resultado

	do
	{
		printf("\ndigite su adivinanza\n");
		scanf("%d",&adivinanza);
		system("CLS");
		//pistas
		if(random < adivinanza)
		{
			printf("el que tiene que adivinar es menor al numero que ingresaste.\n");
		}
		else if(random>adivinanza)
		{
			printf("el numero aleatorio es mayor a el numero que ingresaste.\n");
		}
		else if(random==adivinanza)
		{
			printf("felicidades\n");
			Sleep(1000);
			printf("el numero que ingresaste es correcto!!\n");
			Sleep(1000);
			printf("el numero aleatorio era %d\n",random);
			Sleep(1000);
			printf("programa finalizado.\n");
		}

	}while(random != adivinanza);
	getch();
	return 0;
}

