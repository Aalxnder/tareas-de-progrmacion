#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color E0");
	FILE *archivo = fopen("documento.txt", "rb");  //abrir el archivo
	if(archivo == NULL)  //si el archivo no se puede abrir el puntero regresa NULL y se ejecuta esto
	{
		perror("El archivo no se puede abrir");
		return 1;
	}
	int numero;
	char cadena[10];
	while(feof(archivo) == 0)  //comprobar si aun hay elementos que leer o no
	{
		fscanf(archivo,"%d%s",&numero,&cadena);
		printf("%d %s\n ",numero,cadena);
	}
	fclose(archivo);
	printf("\nEl Archivo se ha cerrado correctamente\n");
	
	return 0;
	
}
