//cambiar numeros enteros a romanos
/*#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
int numero;
void separar(int numero);
int main()
{
	system("COLOR E0");
	printf("ingresa el numero que deseas convertir a numeros romanos;\n");
	scanf("%d",&numero);
	while (numero>4000)
	{
		printf("error, ingrese una cifra mas pequeña.\n");
		scanf("%d",&numero);
	}
	Sleep(1000);
	separar (numero);
	getch();
	return 0;
}
void separar (int numero)
{
	//separar el numero ingresado por el usuario en unidades,decenas,centenas,millar, etc
	int unidades,decenas,centenas,millar;
	unidades = numero%10; numero = numero/10;
	decenas = numero%10; numero = numero/10;
	centenas = numero%10; numero = numero/10;
	millar = numero %10; numero = numero /10;
	
	switch(millar)
	{
		case 1: printf("M"); break;
		case 2: printf("MM"); break;
		case 3: printf("MMM"); break;
	}
	switch(centenas)
	{
		case 1: printf("C"); break;
		case 2: printf("CC"); break;
		case 3: printf("CCC"); break;
		case 4: printf("CD"); break;
		case 5: printf("D"); break;
		case 6: printf("DC"); break;
		case 7: printf("DCC"); break;
		case 8: printf("DCCC"); break;
		case 9: printf("CM"); break;
	}
	switch(decenas)
	{
		case 1: printf("X"); break;
		case 2: printf("XX"); break;
		case 3: printf("XXX"); break;
		case 4: printf("XL"); break;
		case 5: printf("L"); break;
		case 6: printf("LX"); break;
		case 7: printf("LXX"); break;
		case 8: printf("LXXX"); break;
		case 9: printf("XC"); break;
	}
	switch(unidades)
	{
		case 1: printf("I"); break;
		case 2: printf("II"); break;
		case 3: printf("III"); break;
		case 4: printf("IV"); break;
		case 5: printf("V"); break;
		case 6: printf("VI"); break;
		case 7: printf("VII"); break;
		case 8: printf("VIII"); break;
		case 9: printf("IX"); break;
	}
}
*/
//romanos a enteros
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

int romano(char cad[]);
int main()
{
	system("COLOR E0");
	int decimal;
	char cad[20];
	Sleep(1000);
	printf("\tNumeros romanos\nI = 1\nV = 5\nX = 10\nL = 50\nC = 100\nD = 500\nM = 1000\n\n");
	Sleep(1000);
	printf("escribe el numero romano: \n");
	scanf("%s",cad);
	decimal=romano(cad);
	printf("el valor decimal de %s es de: %d \n",cad,decimal);
	getch();
	return 0;
}
//realizar la conversion de los romanos a decimales
int romano(char cad[])
{
	int i,valor;
	int r=0;
	for(i=0;i<strlen(cad);i++)
	{
		switch(cad[i])
		{
			case 'I': valor = 1;break;
			case 'V': valor = 5;break;
			case 'X': valor = 10;break;
			case 'L': valor = 50;break;
			case 'C': valor = 100;break;
			case 'D': valor = 500;break;
			case 'M': valor = 1000;break;
			default: break;
		}
		r+=valor;
	}
	return r;
}
