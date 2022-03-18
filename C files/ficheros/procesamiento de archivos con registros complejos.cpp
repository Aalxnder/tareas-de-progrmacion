#include <stdio.h>
#include <stdlib.h>
struct s_alumno
{
	int matricula;
	char nombre[30];
	int edad;
	
}alumnos[12];

int main()
{
	int i;
	system("color E0");
	FILE *archivo;
	archivo=fopen("alumnos.dat","wt"); //abrir el archivo de forma binaria
	if((archivo==NULL))
	{
		perror("Error al abrir los archivos");
	}	
	else
	{
		int opc;
		do
		{
			fflush(stdin);
			printf("introduzca los datos del alumno/a que desea añadir:\n");
			printf("nombre: "); gets(alumnos[i].nombre);
			printf("introduzca la matricula del alumno %s:\n",alumnos[i].nombre);
			printf("Matricula: "); scanf("%d",&alumnos[i].matricula);
			printf("Introduce la edad del alumno %s:\n",alumnos[i].nombre);
			printf("edad: "); scanf("%d",&alumnos[i].edad);
			fprintf(archivo,"nombre: %s\nMatricula: %d\nEdad: %d\n",alumnos[i].nombre,alumnos[i].matricula,alumnos[i].edad);
			printf("desea agregar otro registro?\n[1] si[2] No");
			scanf("%d",&opc);
		}while(opc!=2);
		fclose (archivo);
	}
	
	return 0;
}
