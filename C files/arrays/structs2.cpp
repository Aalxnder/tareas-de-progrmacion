/*structs en C*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno
{
	char nombre[30];
	int edad;
	int edadM;
	int mat;
}
alumno[30];
int main()
{
	int cant;
	//variable para promedios
	float menor = 101;
	float mayor = 0;
	//almacenar nombres de alumnos con mejor promedio y promedio mas bajo
	char nombreM [30];
	char nombrem [30];
	system("color E0");
	printf("ingresa la cantidad de alumnos que se registraran\n");
	scanf("%d",&cant);
	int i=0;
	while(i<cant)
	{
		fflush(stdin);
		printf("ingresa el nombre del alumno %d\n",i);
		gets(alumno[i].nombre);
		printf("ingrese la edad del alumno %s:\n",alumno[i].nombre);
		scanf("%d",&alumno[i].edad);
		while(alumno[i].edad<0 || alumno[i].edad>120)
		{
			printf("--error--, Ingrese una edad valida:\n");
			scanf("%d",&alumno[i].edad);
		}
		printf("ingrese la matricula del alumno %s\n",alumno[i].nombre);
		scanf("%d",&alumno[i].mat);
		alumno[i].edadM=alumno[i].edad*12;
		i++;
	}
	for(i=0;i<cant;i++)
	{
		printf("\n\nAlumno %d\n\n",i);
		printf("nombre del alumno: %s\n",alumno[i].nombre);
		printf("edad del alumno %s: %d\n",alumno[i].nombre,alumno[i].edad);
		printf("edad del alumno en meses %s: %d\n",alumno[i].nombre,alumno[i].edadM);
		printf("matricula del alumno %s: %d\n",alumno[i].nombre,alumno[i].mat);
		
		if(alumno[i].edad>mayor)
		{
			mayor=alumno[i].edad;
			strcpy(nombreM,alumno[i].nombre);
		}
		if(alumno[i].edad<menor)
		{
			menor=alumno[i].edad;
			strcpy(nombrem,alumno[i].nombre);
		}
	}
	printf("\n\nel alumno mayor es %s\n",nombreM);
	printf("el alumno menor es %s\n",nombrem);
	
}
