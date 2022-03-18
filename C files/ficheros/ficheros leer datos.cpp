/*Maneujo de archivos en lenguaje C*/
/*Lectura de archivos*/
/*Flujo de datos FILE*/
/*Programa --> Canal --> Disco duro o otro espacio de memoria secundaria -->escritura*/
/*programa <-- canal(Flujo de datos) <-- Disco_duro <--Lectura*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color E0");
	FILE *archivo =fopen("documento.txt","rb");  //abrir el archivo
	if(archivo==NULL)
	{
		perror("Error, por algun motivo no se pudo abrir el archivo\n");
		return 1;
	}
	char caracter; //byte
	
	while(feof(archivo)==0) //esto verifica si se llego al final del archivo, regresara un valor distinto a 0 cuando se llegue al final del archivo
	{
		caracter=fgetc(archivo);
		printf("%c", caracter);
	}
	printf("\n");
	fclose(archivo);
	system("pause");
	printf("Se ha cerrado el archivo correctamente\n ");
	
	
	return 0;
}
