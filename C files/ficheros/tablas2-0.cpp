#include <stdio.h>
#include <stdlib.h>


int main()
{
	//variable para almacenar que tabla desea ver el usuario
	int tabla, multi,i,hasta;
	system("COLOR E0");
	FILE *archivo;
	archivo=fopen("tablas.txt","at");
	if((archivo ==NULL))
	{
		perror("No se ha podido imprimir el archivo :(\n");
		return 1;
	}
	else
	{
		printf("que tabla de multiplicar quieres ver?:\n");
		scanf("%d",&tabla);
	
		printf("digite hasta que numero desea imprimir las tablas\n");
		scanf("%d",&hasta);
	
		printf("imprimiendo en el archivo la tabla del %d\n",tabla);
		printf("para visualizar las tablas revise el archivo creado en esta misma direccion\n");
	
		for(i=1;i<=hasta;i++)
		{
			multi = tabla * i;
			fprintf(archivo,"%d x %d = %d\n",tabla,i,multi);
		}
		fprintf(archivo,"\n");
	fclose(archivo);
	}

	system("pause");
	return 0;
}
