#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float jugar();
float sacar_carta();


int main()
{
	float punt1, punt2;			// Puntuación del jugador 1 y del jugador 2
	long t;

	t = time(NULL);        // Inicialización de los números aleatorios
	srand(t);

	printf("Bienvenidos al juego de las Siete y Media\n");
	punt1 = 0;
	punt2 = 0;
	
	printf("\nTurno del JUGADOR 1\n\n");
	punt1 = jugar();				// Juega el jugador 1

	printf("\n\nTurno del JUGADOR 2\n\n");	
	punt2 = jugar();				// Juega el jugador 2

	// Comprobación del resultado
	printf("El JUGADOR 1 tiene %2.1f puntos y el JUGADOR 2 tiene %2.1f puntos\n", punt1, punt2);
	
	if ((punt1 <= 7.5) && ((punt1 > punt2) || (punt2 > 7.5)))
		printf("Gana el JUGADOR 1\n\n");

	if ((punt2 <= 7.5) && ((punt2 > punt1) || (punt1 > 7.5)))
		printf("Gana el JUGADOR 2\n\n");

	if ((punt1 == punt2) || ((punt1 > 7.5) && (punt2 > 7.5)))
		printf("Los jugadores han empatado\n\n");

	system("PAUSE");
	return 0;
}


// Esta función contiene el bucle de juego para cualquiera de los dos jugadores. Devuelve el número de puntos conseguido por el jugador antes de plantarse o pasarse de 7.5
float jugar()
{
	float puntos, valor_carta;
	int terminar;
	char respuesta;
	char cad[100];

	puntos = 0;							// Puntos iniciales
	terminar = 0;
	while (terminar == 0)
	{
	    printf("Tienes %2.1f puntos. ", puntos);
		printf("¿Quieres sacar una carta? (s/n) ");
		gets(cad);
		respuesta = cad[0];
		if (respuesta == 's') 
		{
			valor_carta = sacar_carta();		// Sacamos una carta
			puntos = puntos + valor_carta;		// Sumamos los puntos
			if (puntos > 7.5)		         	// Nos hemos pasado
			{
				printf("¡Te has pasado!\n");
				terminar = 1;            		// Terminar forzosamente
			}
		}
		else        							// El jugador NO quiere sacar más cartas
			terminar = 1;
	}

	return puntos;
}


// Esta función simula el funcionamiento de la baraja. Saca una carta al azar (se pueden repetir entre una llamada y otra) y devuelve el VALOR NUMÉRICO de la carta, no su palo (porque el palo no nos hace falta, sólo es informativo)
float sacar_carta()
{
	int carta;		    // Valor numérico de la carta (de 1 a 10)
	float valor;		// Valor de la carta en el juego (de 1 a 7, y, las figuras, 0.5)
	int palo;	    	// Palo de la carta (de 1 a 4)

	carta = rand() % 10 + 1;	// Elige el valor numérico de la carta al azar
	palo = rand() % 4 + 1; 	// Elige el palo, también al azar

	switch (carta)              // Escribimos la carta 
	{
		case 8: printf("Sota");	// Si salió un 8, escribimos "sota" y le damos el valor 0.5
		        valor = 0.5;
		        break;
		case 9: printf("Caballo");	// Si salió un 9, escribimos "caballo" y le damos otro 0.5
                valor = 0.5;
		        break;
	    case 10:printf("Rey");	// Y lo mismo con el 10 (rey)
		        valor = 0.5;
		        break;
 	    default: printf("%i", carta);	// Con cualquier otra carta (de 1 a 7) su valor no cambia
                 valor = carta;
                 break;
    } //switch

	switch (palo) 		           // Escribimos el palo
	{
		case 1: printf(" de oros\n"); break;
		case 2: printf(" de copas\n"); break;
		case 3: printf(" de espadas\n"); break;
		case 4: printf(" de bastos\n"); break;
	}

	return valor;			// Devolvemos el valor de la carta (el palo no hace falta)
}

