/* escribir un programa para un deposito de vehiculos , el encargado quiere anotar la matricula, la marca y el modelo 
de todos los coches que llegan al deposito y luego quiere que le aparezca una lista con los coches ordenados por marca*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maximaCoches 5


struct coche
{
	char marca[20];
	char modelo[20];
	char matricula[20];
};

//prototipos
void introducirDatos(struct coche c[maximaCoches]);
void ordenar_datos (struct coche c[maximaCoches]);
void ver_datos (struct coche c[maximaCoches]);

int main()
{
	system("color E0");
	struct coche coches[maximaCoches];
	introducirDatos(coches);
	ordenar_datos(coches);
	ver_datos(coches);
	system("pause");
	return 0;
}

void introducirDatos(struct coche c[maximaCoches])
{
	printf("ingrese los datos de los vehiculos\n");
	int i;
	for (i=0;i<maximaCoches;i++)
	{
		fflush(stdin);
		printf("introduzca los datos del coche %d\n",i+1);
		printf("introduzca la marca:\n");
		gets(c[i].marca);
		printf("introduzca el modelo:\n");
		gets(c[i].modelo);
		printf("Introduzca la matricula:\n");
		gets(c[i].matricula);
	}
}

void ordenar_datos(struct coche c[maximaCoches])
{
	int i,j;
	int comparacion;
	struct coche aux;
	for(i=0;i<maximaCoches;i++)
	{
		for(j=1;j<maximaCoches;j++)
		{
			comparacion=strcmp(c[j-1].marca,c[j].marca);
			if(comparacion>0)
			{
				aux = c[j-1];
				c[j-1] = c[j];
				c[j] = aux;
			}
			
		}
	}
}
void ver_datos(struct coche c[maximaCoches])
{
	int i;
	printf("MARCA           MODELO          MATRICULA\n");
   	printf("-----------------------------------------\n");
   	for(i=0;i<maximaCoches;i++)
   	{
   		printf("%-15s %-15s %-8s\n",c[i].marca,c[i].modelo,c[i].matricula);
	}
}
