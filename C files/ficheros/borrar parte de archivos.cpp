//borrar elementos de un archivo

/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Borrar la linea 5 de el archivo de texto\n");
	system("color E0");
	FILE *archivo,*archivoN;
	int N,linea;
	archivo=fopen("ejemplo.txt","rt");
	archivoN=fopen("temporal","wt");
	if((archivo == NULL)||(archivoN==NULL))
	{
		perror("Error, no se pueden abrir los archivos\n");
		return 1;
	}
	else
	{
		linea=0;
		while(!feof(archivo))
		{
			linea++;
			fscanf(archivo,"%d",&N);
			if(linea != 5) //la linea 5 no se escribe
			{
				fprintf(archivoN,"%d\n",N);
			}
		}
		fclose(archivo);
		fclose(archivoN);
		remove("ejemplo.txt");
		rename("temporal","ejemplo.txt");
	}
	system("pause");
	return 0;
	
}*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system("color E0");
	FILE *archivo,*archivoN;
	int linea,N,L_borrar;
	archivo=fopen("ejemplo.txt","rt");
	archivoN=fopen("temporal","wt");
	if((archivo==NULL)||(archivoN==NULL))
	{
		perror("ERROR, No se pudo abrir el archivo\n");
		return 1;
	}
	else
	{
		linea=0;
		printf("que linea del texto quieres borrar\n");
		scanf("%d",&L_borrar);
		while(!feof(archivo))
		{
			linea++;
			fscanf(archivo,"%d",&N);
			if(linea != L_borrar)
			{
				fprintf(archivoN,"%d\n",N);
			}
		}
		printf("se ha borrado la linea %d\n",L_borrar);
		fclose(archivo);
		fclose(archivoN);
		remove("ejemplo.txt");
		rename("temporal","ejemplo.txt");
	}
}
