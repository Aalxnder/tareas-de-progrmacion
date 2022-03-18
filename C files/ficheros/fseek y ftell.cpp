/* fseel y ftell*/
/* SEEK_SET: el cursor se desplazara en offset que le diga respecto al inicio de el archivo, si le digo 5 acabara en 5
SEEK_END: relativo al final del archivo, el cursor estaria al final y si queremoss retroceder nos tendremos que pasarle un valor negativo a fseek
SEEK_CUR: desplaza el archivo respecto a donde este ahora mismo, si esta en 10 se desplazara la cantidad que le digamos a partir de donde este
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color E0");
	FILE * archivo = fopen("documento.txt","r");
	if(archivo == NULL)
	{
		perror("Error al abrir el archivo\n");
		return 1;
	}
	
	//sacar cantidad del archivo con fseek seek_end y rewind,me voy al final del archivo con seek end, con ftell verifico en que posicion estoy y vuelvo al inciio con rewind
	//rewind(archivo); ===========fseek(archivo,0,SEEK_SET); es decir vuelve al inicio del archivo
	fseek(archivo,0,SEEK_END);
	
	do
	{
		int car = fgetc(archivo);
		long int pos = ftell(archivo);
		if(car != EOF)
		{
			printf("%ld %c \n",pos,car); 
		}
		else
		{
			printf("%ld EOF\n",pos);
		}
	}while(!feof (archivo));
	
	fclose (archivo);
	system("pause");
	return 0;
}*/

//sacar longitud de un archivo
#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color E0");
	FILE * archivo = fopen("documento.txt","r");
	if(archivo == NULL)
	{
		perror("Error al abrir el archivo\n");
		return 1;
	}
	//ve al final del archivo
	fseek(archivo,0,SEEK_END);
	int tamanio = ftell(archivo);
	//vuelve al inicio
	rewind(archivo);
	
	
	printf("EL archivo tiene un tamaño de %d bytes\n",tamanio);
	fclose (archivo);
	system("pause");
	return 0;
}
