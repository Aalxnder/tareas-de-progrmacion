/* Ficheros para almacenar todo el contenido del 
archivo en un arreglo de caracteres*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color E0");
	FILE * archivo= fopen("documento.txt","rb");
	if(archivo == NULL)
	{
		perror("Error en la apertura del archivo");
		return 1;
	}
	fseek(archivo, 0,SEEK_END); 	/*mueve determinado flujo de datos(el flujo es el puntero de archivo en este caso y recibe cuantas posiciones o espacios va amoverlo
	y hasta donde al final muevo el flujo de datos al final*/
	int num_elementos=ftell(archivo);  /*utilizo ftell para preguntar donde se encuentra mi flujo de datos, cuando use ftell me dara la cantidad de elementos que podre 
	almacenar en la variable int numero de elementos(num_elementos)*/
	rewind (archivo);  /* muevo de nuevo el flujo al inicio mediante la funcion rewind*/
	
	char * cadena = (char *) calloc(sizeof(char),num_elementos);  /*declaro un arreglo de caracteres dinamico a traves de la funcion calloc(stdlib.h)
	la funcion caloc recibe el tamaño en bytes de cada elemento (sizeof (char)) y cuantos elementos quiero reservar(int num_elementos)*/
	if(cadena == NULL)
	{
		perror("Error en la reserva de memoria\n");
		return 2;
	}
	int num_elementos_leidos = fread(cadena,sizeof(char), num_elementos,archivo); /* crear una variable de numeros de elementos leidos que depende de fread
	recibe un arreglo en el que va a meter el contenido del flujo, tamaño del elemento, cuantos queremos leer y el archivo de el que queremos leer*/
	if(num_elementos_leidos != num_elementos) /* fread retorna la cantidad de numeros leido si es diferente de la cantidad que tuvo que leer quiere
	decir qye hubo un error al leer el archivo*/
	{
		perror("leyendo el archivo\n");
		return 3;
	}
	
	printf("%s", cadena);
	
	free(cadena); //libero la memoria en cadena porque es una variable de memoria dinamica
	fclose(archivo); //cierro el archivo pa liberar memoria 
	printf("\nEl archivo se ha cerrado correctamente\n");
	
	return 0;
	
}
