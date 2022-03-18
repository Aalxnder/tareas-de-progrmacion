/*archivos secuenciales binarios*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define num_alumnos 10
//struct
struct s_alumno
{
	int matricula;
	int edad;
	char nombre[30];
}alumnos[num_alumnos];

//prototipos de funcion 
int leer_archivo(void);
int escribir_archivo(void);
void salir(void);

int main(void)
{
	int opc;
	system("color E0");
	system("cls");
	puts("que deseas hacer?\n");
	puts("[1] Leer\n[2] Escribir\n[3] salir\n");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
		{
			leer_archivo();
			break;
		}
		case 2:
		{
			escribir_archivo();
			break;
		}
		case 3:
		{
			salir();
			break;
		}
		default:
		{
			puts("opcion no valida\n");
			break;
		}
	}	
}

int leer_archivo(void)
{
	int i;
	FILE *archivo;
	archivo=fopen("alumnos2.txt","rb");
	if(archivo==NULL)
	{
		perror("No se ha podido abrir el archivo\n");
		return 1;
	}
	else
	{
		for(i=0;i<num_alumnos;i++)
		{
			fread(&alumnos[i],sizeof(struct s_alumno),1,archivo);
		}
		fclose(archivo);
		//Escritura de los datos en la pantalla
		for(i=0;i<num_alumnos;i++)
		{
			printf("N* de alumno: %d\n",alumnos[i].matricula);
			printf("Nombre del alumno: %s\n",alumnos[i].nombre);
			printf("Edad del alumno %s: %d\n",alumnos[i].nombre,alumnos[i].edad);
			printf("\n");
		}
		printf("\n");
	}
	system("pause");
	main();
}

//funcion pa escribir en el archivo binario
int escribir_archivo(void)
{
	int i;
	FILE *archivo;
	archivo=fopen("alumnos2.txt","wb+");
	//lectura de datos por teclado
	for(i=0;i<num_alumnos;i++)
	{
		fflush(stdin);
		printf("Introduzca el nombre del alumno %d:\n",i);
		gets(alumnos[i].nombre);
		printf("Ingresa la matricula del alumnos %s:\n",alumnos[i].nombre);
		scanf("%d",&alumnos[i].matricula);
		printf("Ingresa la edad de %s:\n",alumnos[i].nombre);
		scanf("%d",&alumnos[i].edad);
		while(alumnos[i].edad>120||alumnos[i].edad<0)
		{
			printf("Error, ingrese una edad valida");
			printf("Ingresa la edad de %s:\n",alumnos[i].nombre);
			scanf("%d",&alumnos[i].edad);
		}
		printf("\n");
	}

	//imprimir en el archivo
	
	if(archivo==NULL)
	{
		perror("el archivo no se pudo abri\n");
		return 2;
	}
	else
	{
		for(i=0;i<num_alumnos;i++)
		{
			fwrite(&alumnos[i],sizeof(struct s_alumno),1,archivo);
		}
		fputc('\n',archivo);
		fclose(archivo);
	}
	system("pause");
	main();
}
void salir(void)
{
	int s;
	system("cls");
	Sleep(500);
	printf("realmente quiere salir?\n");
	printf("presione 0 para salir o otro numero para permanecer\n");
	scanf("%d",&s);
	if(s==0)
	{
		printf("ha decididco finalizar el programa\n");
		exit(-1);
		system("pause");
	}
	else
	{
		printf("Ha decidido permanecer en el programa\n");
		system("pause");
		main();
	}
}
