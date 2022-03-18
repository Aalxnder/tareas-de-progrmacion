#include <stdio.h>
#include <stdlib.h>
//prototipos
int escribir_archivo(void);
int leer_archivo(void);

int main(void)
{
	system("color E0");
	int opc;
	do
	{
		puts("¿que desea hacer?\n[1] escribir\n[2] leer\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
			{
				escribir_archivo();
				break;
			}
			case 2:
			{
				leer_archivo();
				break;
			}
			default:
			{
				printf("opcion no valida\n");
				break;
			}
		}
	}while(opc !=0);
	return 0;
}

int  escribir_archivo(void)
{
	FILE *archivo;
	char car;
	archivo=fopen("prueba.txt","w");
	if(archivo==NULL)
	{
		perror("error, no se ha podido abrir el archivo\n");
		return 1;
	}
	else
	{
		do
		{
			car=getchar(); //lee un caracter desde el teclado
			fputc(car,archivo); //imprime un caracter en el teclado
		}while(car != '#');
		fclose(archivo);
	}
}
int leer_archivo(void)
{
	FILE *archivo;
	char car;
	archivo=fopen("prueba.txt","r");
	if(archivo==NULL)
	{
		perror("Error, no se ha podido leer el archivo\n");
		return 2;
	}
	else
	{
		do
		{
			car=fgetc(archivo); //leer el archivo 
			printf("%c",car); //imprimir el caracter en la consola;
		}while(!feof(archivo)); //mientras no se termine el archivo
	}
}
