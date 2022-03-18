/*variables*/
/*#include <stdio.h>
int main()
{
	int a; //variable entera
	int suma;
	float b; //variable flotante
	double y;//flotante de 64 bits
	char z;//caracteres declarar con comillas simples
	a = 5;
	b = 6.5;
	y = 12.765;
	z = 'b';
	suma = a + b;
	printf("la suma es %i\nValor de y:%f\n",suma,y);

	
	return 0;
}/*
/*operaciones con variables*/

#include <stdio.h>
#define PI 3.1416

int main()
{
	float x;
	float r;
	float radiocua;
	float area;
	x = PI;
	 
	printf("introduce el radio del circulo: ");
	scanf("%f",&r);
	radiocua = r * r;
	area = x * radiocua;
	
	printf("el area del circulo es:  %f.",area);
	return 0;
	
}
