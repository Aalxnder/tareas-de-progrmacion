/* juego de memoria
el ordenador elije un numero aleatorio de una cifra al azar y te dara 1 segundo para memorizarla y ingrearla
si el jugador acierta el juego continua, y por cada acierto se aumentara 1 cifra al numero, 
el usuario ganara si llega a 10 , el juego termina cuando se falla una cifra */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //numeros randoms
#include <windows.h>
#define randomize (srand(time(NULL)))
void tiempo (void);
int validar(char user,char numrandom);

int puntos=0;
int main()
{
	int user;
	int numr;
	system("color E0");
	randomize;
	numr=rand()%10;
	printf("este es un juego de memoria\n\n");
	// 1 cifra
	printf("numero random %d\n",numr);
	tiempo();
	printf("ingrese el numero\n");
	scanf("%d",&user);
	
	//2 cifras
	if(validar(user,numr)==1)
	{
		randomize;
		numr=rand()%90+11;
		printf("numero random %d\n",numr);
		tiempo();
		printf("ingrese el numero\n");
		scanf("%d",&user);
		//3 cifras
		if(validar(user,numr)==1)
		{
			randomize;
			numr=rand()%101+899;
			printf("numero random %d\n\n",numr);
			tiempo();
			printf("ingrese el numero\n");
			scanf("%d",&user);
			//4 cifras
			if(validar(user,numr)==1)
			{
				randomize;
				numr=rand()%1001+8999;
				printf("numero random %d\n\n",numr);
				tiempo();
				printf("ingrese el numero\n");
				scanf("%d",&user);
				//5 cifras
				if(validar(user,numr)==1)
				{
					randomize;
					numr=rand()%10001+89999;
					printf("numero random %d\n\n",numr);
					tiempo();
					printf("ingrese el numero\n");
					scanf("%d",&user);
					if(validar(user,numr)==1)
					{
						randomize;
						numr=rand()%100001+899999;
						printf("numero random %d\n\n",numr);
						tiempo();
						printf("ingrese el numero\n");
						scanf("%d",&user);
						if(validar(user,numr)==1)
						{
							randomize;
							numr=rand()%1000001+8999999;
							printf("numero random %d\n\n",numr);
							tiempo();
							printf("ingrese el numero\n");
							scanf("%d",&user);
							if(validar(user,numr)==1)
							{
								randomize;
								numr=rand()%10000001+89999999;
								printf("numero random %d\n\n",numr);
								tiempo();
								printf("ingrese el numero\n");
								scanf("%d",&user);
								if(validar(user,numr)==1)
								{
									randomize;
									numr=rand()%100000001+899999999;
									printf("numero random %d\n\n",numr);
									tiempo();
									printf("ingrese el numero\n");
									scanf("%d",&user);
									if(validar(user,numr)==1)
									{
										randomize;
										numr=rand()%1000000001+8999999999;
										printf("numero random %d\n\n",numr);
										tiempo();
										printf("ingrese el numero\n");
										scanf("%d",&user);
									}
								}	
							}
						}
					}
				}
			}
		}
	}	
}
void tiempo(void)
{
	int tiempo = 5;
	for(tiempo=tiempo; tiempo>=0;tiempo--)
	{
		Sleep(1000);
		printf("\rTiempo para memorizar el numero: %d \n",tiempo);
		if(tiempo == 0)
		{
			system("cls");
		}
	}
}
int validar(char user, char numr)
{
	if (numr == user)
	{
		puntos ++;
		printf("respuestas correcta\n\n");
		printf("tus puntos ahora son %d\n\n",puntos);
		return 1;
	}
	else
	{
		printf("respuesta incorrecta, intentelo de nuevo\n");
		printf("Tus puntos fueron %d\n",puntos);
		system("pause");
		exit(-1);
	}
}
