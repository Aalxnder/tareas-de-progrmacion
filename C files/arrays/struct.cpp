//almacenar datos dentro de una estructura
/*crear una estructura para los alumnos de una escuela y pedirle al usuario que digite la cantidad de alumnos y 
almacenar los datos dentro de la estructura con su variable correspondiente*/
//calcular el promedio de los alumnos y calcular cual es el promedio mayor y cual es el promedio menor
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#define prom 3

struct alumno
{
	char nombre [30];
	int edad;
	float mate,ingles,historia,promediot;
	
}
alumno [30];
int main()
{
	int cant;
	//variable para promedios
	float menor = 101;
	float mayor = 0;
	//almacenar nombres de alumnos con mejor promedio y promedio mas bajo
	char nombreM [30];
	char nombrem [30];
	system("COLOR E0");
	printf("ingresa la cantidad de alumnos a los que se registrara su calificacion\n");
	scanf("%d",&cant);
	//contador para bucle
	int i=0;
	//bucle para darle valor a las variables de la estructura
	while(i<cant)
	{
		//limpiar memoria para cada que se llenen datos con un bucle
		fflush(stdin);
		//guardar el nombre 
		printf("ingresa el nombre del alumno %d \n",i);
		gets(alumno[i].nombre);
		
		//guardar la edad
		printf("ingresa la edad de %s \n",alumno[i].nombre);
		scanf("%d",&alumno[i].edad);
		while(alumno[i].edad>100 || alumno[i].edad<0)
		{
			Sleep(1000);
			printf("error, ingrese una edad valida\n");
			printf("ingresa la edad de %s \n",alumno[i].nombre);
			scanf("%d",&alumno[i].edad);
		}
		//guardar la calificacion de ingles
		printf("ingresa la calificacion de ingles de %s \n",alumno[i].nombre);
		scanf("%f",&alumno[i].ingles);
		while(alumno[i].ingles>100 || alumno[i].ingles<0)
		{
			Sleep(1000);
			printf("error, ingrese una calificacion valida\n");
			printf("ingresa la calificacion de ingles de %s \n",alumno[i].nombre);
			scanf("%d",&alumno[i].ingles);
		}
		//guardar la calificacion de ingles
		printf("ingresa la calificacion de matematicas de %s \n",alumno[i].nombre);
		scanf("%f",&alumno[i].mate);
		while(alumno[i].mate>100 || alumno[i].mate<0)
		{
			Sleep(1000);
			printf("error, ingrese una calificacion valida\n");
			printf("ingresa la calificacion de mate de %s \n",alumno[i].nombre);
			scanf("%d",&alumno[i].mate);
		}
		//guardar la calificacion de ingles
		printf("ingresa la calificacion de historia de %s \n",alumno[i].nombre);
		scanf("%f",&alumno[i].historia);
		while(alumno[i].historia>100 || alumno[i].historia<0)
		{
			Sleep(1000);
			printf("error, ingrese una calificacion valida\n");
			printf("ingresa la calificacion de historia de % \n",alumno[i].nombre);
			scanf("%d",&alumno[i].historia);
		}
		i++;
	}
	//imprimir los resultados
	for(i=0;i<cant;i++)
	{
		//promediar las calificaciones
		alumno[i].promediot = (alumno[i].ingles+alumno[i].mate+alumno[i].historia)/prom;
		//condicinal si el promedio total del alumno es mayor a la variable mayor
		if(alumno[i].promediot>mayor) //si es mayor se entra al bucle y se reemplazan los valores de la variable mayor
		{
			mayor = alumno[i].promediot;
			strcpy(nombreM,alumno[i].nombre); //copiamos el nombre a la variable
		}
		//promedio menor de alumno
		if(alumno[i].promediot<menor)
		{
			menor = alumno[i].promediot;
			strcpy(nombrem,alumno[i].nombre);
		}
		//imprimir los datos
		printf("\n\nalumno %d \n\nNombre %s \nEdad %d \nCalificacion ingles %.1f, \ncalificacion matematicas %.1f, \ncalificacion de historia %.1f\n",i,alumno[i].nombre,alumno[i].edad,alumno[i].ingles,alumno[i].mate,alumno[i].historia);
		
	}
	//imprimir el alumno con el mejor y peor promedio
	printf("\nEl alumno con el mejor promedio fue %s y su promedio fue de %.1f",nombreM,mayor);
	printf("\nEl alumno con el menor promedio fue %s y su promedio fue de %.1f",nombrem,menor);
	getch();
	return 0;
}

