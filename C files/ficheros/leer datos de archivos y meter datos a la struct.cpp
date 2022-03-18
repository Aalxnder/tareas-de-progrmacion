/*tomar los trabajadores de un fichero y moverlo a una estructura*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void vaciar(char temp[]);
int copiar(char temp[], int i);

typedef struct
{
	char *nombre;
	int edad;
	
}trabajadores;

trabajadores *trab;

int main(void)
{
	system("color E0");
	char temp[50];
	char aux;
	int i,j;
	int cont=0;
	
	FILE *archivo;
	archivo =fopen("personas.txt.txt","r");
	
	if(archivo == NULL)
	{
		perror("El archivo no se ha podido abrir");
		return 1;
	}
	else
	{
		while(!feof(archivo))
		{
			fgets(temp,50,archivo);
			cont++;
		}
		rewind(archivo);
	
		trab=(trabajadores*)malloc(cont*sizeof(trabajadores));
		if(trab == NULL)
		{
			perror("No se ha podido reservar la memoria\n");
			return 2;
		}
		for(i=0; !feof(archivo);i++)
		{
			vaciar(temp);
			aux='0';
			for(j=0;aux != '-';j++)
			{
				aux=fgetc(archivo);
				if(aux != '-')
				{
					temp[j] = aux;
				}
			}
			copiar(temp,i);
			fgets(temp,4,archivo);
			trab[i].edad=atoi(temp);
			printf("Nombre %s\nEdad %d\n",trab[i].nombre,trab[i].edad);
		}
	}
	system("pause");
	return 0;
}

void vaciar(char temp[])
{
	int i;
	for(i=0;i<50;i++)
	{
		temp[i]='\0';
	}
}

int copiar(char temp[], int i)
{
	int N = strlen(temp)+1;
	trab[i].nombre =(char *)malloc(N*sizeof(char));
	if(trab[i].nombre ==NULL)
	{
		perror("No se ha podido reservar memoria\n");
		return 3;
	}
	strcpy(trab[i].nombre,temp);
}
