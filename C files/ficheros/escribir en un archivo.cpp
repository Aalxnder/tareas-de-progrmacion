/*escritura de archivos*/
/*Flujo de datos dirigido del programa hacia el disco duro y veceversa*/
	/*
		fputc - escribe un caracter
		fputs - escribe una cadena de texto
		fprintf - equivalente a printf
	*/
//fputc		
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * archivo = fopen("documento.txt","a");
	if(archivo == NULL)
	{
		perror("Error en la creacion del archivo\n");
		return 1;
	}
	else
	{
		int i,j;
		for (i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				fputc('s',archivo);
				fputc(' ',archivo);
			}
			fputc('\n',archivo);
		}
	
	}
	fflush(archivo);
	fclose(archivo);
	printf("Programa finalizado\n");
	system("pause");
	return 0;
}*/

//escribir cadenas de caracteres en un archivo (fputs)
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color E0");
	FILE * archivo = fopen("documento.txt","a");
	if(archivo == NULL)
	{
		perror("Error en la creacion del archivo");
		return 1;
	}
	else 
	{
		int i,j;
		for(i=0;i<20;i++)
		{
			for(j=0;j<20;j++)
			{
				fputs("0 ",archivo);
			}
			fputc('\n',archivo);
		}
	}
	fflush(archivo);
	fclose(archivo);
	printf("Se ha escrito en el archivo\n");
	system("pause");
	return 0;
}*/

//fprintf

#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color E0");
	FILE * archivo = fopen("documento.txt","a");
	if (archivo == NULL)
	{
		perror("Error en la modificacion del archivo\n");
		return 1;
	}
	else
	{
		int i,j;
		for(i=0;i<20;i++)
		{
			for(j=0;j<20;j++)
			{
				fprintf(archivo, "%d  ",j);
			}
			fputc('\n',archivo);
		}
	}
	fflush(archivo);
	fclose(archivo);
	printf("El archivo se ha modificado con exito\n");
	system("pause");
	return 0;
}

