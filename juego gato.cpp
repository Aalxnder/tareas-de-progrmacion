//juego de 3 en ralla o gato en C*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))
//prototipos
void loop(char vector[3][3]);
void loop2(char vector[3][3]);
void rellenar(char vector[3][3]);
void tablero(char vector[3][3]);
void valores(char vector[3][3]);
void valores2(char vector[3][3]);
void valoresIA(char vector[3][3]);
void menu(char vector[3][3]);
void salir(char vector[3][3]);
int gana(char vector[3][3]);
int main()
{
	char vector[3][3];
	system("color E0");
	menu(vector);
	
	system("pause");
	return 0;
}

//funcion encargada de llamar a las demas funciones y del bucle principal
void loop(char vector[3][3])
{
	int i,j;
	i=0;
	rellenar(vector);

	do
	{
		system("cls");
		tablero(vector);
		if(i % 2 == 0)
		{
			valores(vector);
		}
		else
		{
			valoresIA(vector);
		}	
		j = gana(vector);
		
		i++;
	}while(i<=9 && j==2);
	system("cls");
	tablero(vector);
	if (j==0)
	{
		printf("enhorabuena , has ganado\n");
	}
	else if(j==1)
	{
		printf("has perdido\n");
	}
	else
	{
		printf("el juego se ha empatado\n");
	}
}

//void loop para el segundo juagdor
void loop2(char vector[3][3])
{
	int i,j;
	i=0;
	rellenar(vector);
	do
	{
		system("cls");
		tablero(vector);
		if(i % 2 == 0)
		{
			printf("turno del jugador 1\n");
			valores(vector);
		}
		else
		{
			printf("turno del jugador 2\n");
			valores2(vector);

		}
		j=gana(vector);
		i++;
	}while(i<=9 && j==2);
	system("cls");
	tablero(vector);
	if(j == 0)
	{
		printf("ha ganado el jugador 1\n");
	}
	else if(j == 1)
	{
		printf("ha ganado el jugador 2\n");
	}
	else
	{
		printf("los jugadores han empatado\n");
	}
}
//funciones fundamentales
void rellenar(char vector[3][3])
{
	int i,j;
	char aux; //esta variable nos ayudara a rellenar las celdas de la matriz con valores del 1 al 9
	aux = '1';
	//bucle para recorrer la matriz y rellenarla con los numeros
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			vector[i][j]=aux++; //como aux vale 1, haremos que cada que se repita el bucle se llene con aux +1 llenando la matriz con valores del 1 al 9
		}
	}
}
//funcion para dibujar el tablero
void tablero(char vector[3][3])
{
	int i,j;
	//recorrer la matriz
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j<2) //hasta que j sea menor de 2 se dibujara la linea que separa los numeros de la matriz
			{
				printf(" %c |",vector[i][j]);	
			}
			else
			{
				printf(" %c ",vector[i][j]);
			}
		}
		if(i<2) //para q no imprima la linea al final pq se ve feo
		{
			printf("\n-----------\n"); //dibujar las lineas horizontales
		}
	}
	printf("\n");
	printf("\n");
}

//funcion para introducir los valores
void valores(char vector[3][3])
{
	char ficha;
	int i,j,esc;
	do
	{
		do
		{
			printf("coloca una ficha entre el 1 y el 9\n"); //mediante dos ciclos do while colocamos la ficha
			fflush(stdin);
			scanf("%c",&ficha);
		}while(ficha<'1'||ficha>'9');
		
		esc =0;
		switch(ficha) //creamos un switch para las posibles opciones y para q no se pueda ingresar un vslor abajo de 1 o arriba de 9
		{
			case '1':
			{
				i=0;
				j=0;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O') //detecta si la casilla esta ocupada y si es asi marca un error pidiendonos poner otro numero
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '2':
			{
				i=0;
				j=1;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '3':
			{
				i=0;
				j=2;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '4':
			{
				i=1;
				j=0;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '5':
			{
				i=1;
				j=1;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '6':
			{
				i=1;
				j=2;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '7':
			{
				i=2;
				j=0;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '8':
			{
				i=2;
				j=1;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '9':
			{
				i=2;
				j=2;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			default:
			{
				printf("opcion no disponible\n");
				break;
			}
		}
	}while(esc==1);
	
	vector[i][j]='X'; //cambia el valor que elegimos por la vsariable x mayuscula
}

//funcion para que el jugadpor 2 agregue su respuesta
void valores2(char vector[3][3])
{
	char ficha;
	int i,j,esc;
	do
	{
		do
		{
			printf("coloca una ficha entre el 1 y el 9\n"); //mediante dos ciclos do while colocamos la ficha
			fflush(stdin);
			scanf("%c",&ficha);
		}while(ficha<'1'||ficha>'9');
		
		esc =0;
		switch(ficha) //creamos un switch para las posibles opciones y para q no se pueda ingresar un vslor abajo de 1 o arriba de 9
		{
			case '1':
			{
				i=0;
				j=0;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O') //detecta si la casilla esta ocupada y si es asi marca un error pidiendonos poner otro numero
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '2':
			{
				i=0;
				j=1;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '3':
			{
				i=0;
				j=2;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '4':
			{
				i=1;
				j=0;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '5':
			{
				i=1;
				j=1;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '6':
			{
				i=1;
				j=2;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '7':
			{
				i=2;
				j=0;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '8':
			{
				i=2;
				j=1;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			case '9':
			{
				i=2;
				j=2;
				if(vector[i][j] == 'X' ||vector[i][j] == 'O')
				{
					esc=1;
					printf("la casilla esta ocupada, intentalo con otro numero\n");
				}
				break;
			}
			default:
			{
				printf("opcion no disponible\n");
				break;
			}
		}
	}while(esc==1);
	
	vector[i][j]='O'; //cambia el valor que elegimos por la vsariable x mayuscula
}
void valoresIA(char vector[3][3])
{
	int i,j,esc;

	do
	{
		i = random(N);
		j = random(N);
		esc=0;
		
		if(vector[i][j] == 'X' || vector[i][j]== 'O')
		{
			esc=1;
		}
	
	}while(esc == 1);
	vector[i][j] = 'O';
}

//funcion ganar
int gana(char vector[3][3])
{
	if(vector[0][0] =='X' ||vector[0][0] == 'O')
	{
		if (vector[0][0] == vector[0][1] && vector[0][0]==vector[0][2])
		{
			if(vector[0][0] == 'X')
			{
				return 0; //has ganado
			}
			else
			{
				return 1; //has perdido
			}
		} 
		if(vector[0][0] == vector[1][0] && vector[0][0] == vector[2][0])
		{
			if(vector[0][0] == 'X')
			{
				return 0; //has ganado
			}
			else
			{
				return 1; //has perdido
			}
		}
	}
	if (vector[1][1] == 'X' || vector[1][1] == 'O')
	{
		if(vector[1][1] == vector[0][0] && vector[1][1] == vector[2][2])
		{
			if(vector[1][1] == 'X')
			{
				return 0; //has ganado
			}
			else
			{
				return 1; //has perdido
			}
		}
		if(vector[1][1] == vector[1][0] && vector[1][1] == vector[1][2])
		{
			if(vector[1][1] == 'X')
			{
				return 0; //has ganado
			}
			else
			{
				return 1; //has perdido
			}
		}
		if(vector[1][1] == vector[2][0] && vector[1][1] == vector [0][2])
		{
			if(vector[1][1] == 'X')
			{
				return 0; //has ganado
			}
			else
			{
				return 1; //has perdido
			}
		}
		if(vector[0][1] == vector[2][1] && vector[0][1] == vector[2][1])
		{
			if(vector[0][1] == 'X')
			{
				return 0; //has ganado
			}
			else
			{
				return 1; //has perdido
			}
		}
	}
	if(vector[2][2] == 'X' || vector[2][2] == 'O')
	{
		if(vector[2][2] == vector[2][0] && vector[2][2] == vector[2][1])
		{
			if(vector[2][2] == 'X')
			{
				return 0; //has ganado
			}
			else
			{
				return 1; //has perdido
			}
		}
		if(vector[2][2] == vector[0][2] && vector[2][2] == vector[1][2])
		{
			if(vector[2][2] == 'X')
			{
				return 0; //has ganado
			}
			else
			{
				return 1; //has perdido
			}
		}
	}
	return 2;	
}
//funcion del menu
void menu(char vector[3][3])
{
	int opc;
	system("cls");
	do
	{
	printf("Menu\n[1] Modo para 1 solo jugador vs la IA\n[2] Modo para 2 jugadores\n[3] Salir\nIngresa una opcion\n");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
		{
			printf("Modo para un solo jugador\n");
			loop(vector);
			break;
		}
		case 2:
		{
			printf("Modo para 2 jugadores\n");
			loop2(vector);
			break;
		}
		case 3:
		{
			salir(vector);
			break;
		}
		default:
		{
			printf("Opcion no valida\n");
		}
	}
	}while(opc != 4);	
}
void salir(char vector[3][3])
{
	int s;
	printf("ingrese el numero 0 para finalizar o cualqueir otro numero para permanecer en el juego\n");
	scanf("%d",&s);
	if(s==0)
	{
		printf("Eligio la opcion de salir\n");
		exit(-1);
	}
	else
	{
		printf("ha decidido permanecer en el juego\n");
		menu(vector);
	}
}
