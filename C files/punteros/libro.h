/*Listas enlazadas simples*/

#indef libro_h 
#define libro_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Libro
{
	char titulo[50];
	char autor[50];
	char isbn[13];	
}Libro;

#endif /*libro_h*/
