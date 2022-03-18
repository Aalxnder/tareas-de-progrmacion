/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color E0");
	FILE* archivo;
	int a,b;
	a=15;
	b=20;
	archivo=fopen("datos.txt","a");
	if(archivo != NULL)
	{
		fprintf(archivo,"%d + %d es %d",a,b,a+b);
	}
	system("pause");
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color E0");
	FILE* archivo;
	char cadena[1000];
	printf("Ingrese una cadena de caracteres para escribir en el archivo(cancion,poema,etc):\n ");
	gets(cadena);
	archivo=fopen("datos.txt","w");
	if(archivo == NULL)
	{
		perror("no se ha podido escribir nada en la direccion deseada\n");
		return 1;
	}
	else
	{
		fprintf(archivo,"%s",cadena);
	}
	system("pause");
	fclose(archivo);
	return 0;
}
