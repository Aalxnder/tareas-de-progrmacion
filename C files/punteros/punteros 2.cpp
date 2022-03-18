/*primer ejercicio de punteros 

Pedir al usuario que dijite un valor para una cadena de caracteres, para una variable de tipo entera y flotante  
y luego imprimir los valores usando punteros y tambien imprimir las direcciones de memoria de cada valor*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cadena[100];
	int entera;
	float flotante;
	//pedir los valores al usuario
	printf("digite un valor para su variable de tipo cadena:\n");
	gets(cadena);
	printf("digite un valor para su numero entero:\n");
	scanf("%d",&entera);
	printf("digite un valor para su numero flotante:\n");
	scanf("%f",&flotante);
	
	//imprimir usando punteros
	//variables de tipo puntero
	char *p_cadena;
	int *p_entera;
	float *p_flotante;
	
	//igualar los punteros a las variables
	p_cadena=cadena; //no se agrega asperson pq es una cadena
	p_entera=&entera;
	p_flotante=&flotante;
	printf("el valor puntero para la cadena es: %s\n",p_cadena); //en cadena no se agrega el asterisco
	printf("el valor puntero para el numero entero es: %d\n",*p_entera);
	printf("el valor puntero para el numero flotante es: %.1f\n",*p_flotante);
	
	//imprimir las direeciones en memoria
	printf("La direccion en memora de la cadena es %p\n",&cadena); //con asperson se accede a la posicion de la memoria
	printf("la direccion en memoria de la variable entera %p\n",&entera);
	printf("la direccion en memoria de la variable flotante %p\n",&flotante);
	
	return 0;
}
