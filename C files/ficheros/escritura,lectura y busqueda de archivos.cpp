/*

Escritura de archivos secuenciales
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))
#define S 10
int main(void)
{
	system("color E0");
	printf("Escribir numeros randoms en el archivo\n");
	FILE* archivo;
	int i,N;
	archivo=fopen("ejemplo.txt","at");
	if(archivo == NULL)
	{
		perror("Error al abrir el archivo\n");
		return 1;
	}
	else
	{
		for(i=0;i<10;i++)
		{
			N = random(S);
			fprintf(archivo,"%d\n",N);
		}
		fclose(archivo);
	}
	system("pause");
	return 0;
}
/*

Lectura de archivos secuenciales

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* archivo;
	int N;
	system("color E0");
	printf("Modo de lectura en archivos secuenciales\n");
	archivo=fopen("ejemplo.txt","rt");
	if(archivo==NULL)
	{
		perror("Error, el archivo no se ha podido abrir\n");
		return 1;
	}
	else
	{
		while(!feof(archivo)) //mientras no se llegue al final del archivo
		{
			fscanf(archivo,"%d",&N);  //se lee un numero entero del archivo
			printf("%d  ",N);  //se escribe el numero en pantalla
		}
		fclose(archivo);
	}
}*/

//busqueda de un valor en un archivo externo

/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("color E0");
	FILE *archivo; //creo el fichero al archivo
	int n_busqueda,n_leido,linea;
	int encontrado;
	
	archivo=fopen("ejemplo.txt","rt"); //abrir archivo, si no se pudo abrir regresara el fichero null y se ejecutara el if, si se pudo abrir el else
	if(archivo==NULL)
	{
		perror("El archivo no ha sido encontrado\n");
		return 1;
	}
	else
	{
		printf("Que numero deseas buscar?\n");
		scanf("%d",&n_busqueda);
		linea=0;
		encontrado=0;
		while(!feof(archivo)) //mientras no se llegue al final del archivo se ejecuta esto\n
		{
			linea++; //por cada numero leido aumentaremos linea para despues saber en que linea del archivo esta el numero
			fscanf(archivo,"%d\n",&n_leido);
			if(n_leido==n_busqueda)
			{
				encontrado=1;
				printf("Se ha encontrado el numero en la linea %d\n",linea);
				break;
			}
		}
		if(encontrado == 0)
		{
			printf("Ese numero no se encuentra en el archivo\n");
		}
		fclose(archivo);
	}
}*/
