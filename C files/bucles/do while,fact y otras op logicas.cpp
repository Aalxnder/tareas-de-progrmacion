/*#include <stdio.h>
int main()
{
	int suma;
	int numero;
	puts("introduzca una lista de enteros positivos:\n");
	puts("Termine la lista al ingresar un numero negativo\n");
	suma = 0;
	scanf("%d",&numero);
	while(numero>=0)
	{
		suma += numero;
		scanf("%d",&numero);
	}
	printf("la suma es %d\n",suma);
	
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int i,numero,fact = 1;
	printf("digita el numero de el que quieras el factorial: ");
	scanf("%d",&numero);
	
	for(i=1;i<=numero;i++)
	{
		fact *= i;
	}
	printf("\nel factorial de el numero dado es: %d\n",fact);
	
	return 0;
}
*/
/*#include <stdio.h>
int main()
{
	int i,numero,suma=0;
	numero = 50;
	
	for (i=1;i<=numero;i++)
	{
		suma += i;
	}
	printf("la suma de los primeros 50 numeros enteros es de: %d\n",suma);
	return 0;
}*/
/*#include <stdio.h>
const int num_lineas = 20;
const char blanco = ' ';
const char asterisco = '*';
int main()
{
	int fila, blancos, cuenta_as;
	puts(" ");
	
	for(fila=1;fila<=num_lineas; fila++)
	{
		putchar('\t');
		for(blancos=num_lineas-fila;blancos >0;blancos--)
			putchar(blanco);
		for(cuenta_as=1;cuenta_as <2 * fila; cuenta_as++)
			putchar(asterisco);
			
			puts(" ");
	}
	return 0;
}*/
/* media de varias notas
#include <stdio.h>
int main()
{
	float notas, media = 0;
	int i,cant;
	printf("cuantas notas?.\n");
	scanf("%d",&cant);
	for(i=0;i<cant;i++)
	{
		printf("ingrese la nota %d ",i);
		scanf("%f",&notas);
		media += notas/cant;
	}
	printf("la media de las notas es: %.1f\n",media);
		
	return 0;
}*/
#include <stdio.h>
int esPrimo(int numero);

int main(void)
{
	int numero;
	printf("ingresa el numero que deseas verificar:\n");
	scanf("%d",&numero);
	if(esPrimo(numero))
	{
		printf("el numero es un numero primo\n");
	}
	else
	{
		printf("el numero no es un numero primo\n");
	}
	return 0;
}
int esPrimo(int numero)
{
	if (numero == 0||numero == 1)return 0;
	
	if (numero == 4) return 0;
	for (int x = 2; x < numero/2;x++)
	{
		if (numero %x == 0)return 0;
	}
	return 1;
}




