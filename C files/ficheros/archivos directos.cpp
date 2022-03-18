/*archivos en modo directo
Con los archivos directos se suelen establecer ciertas normas para la creacion y manipulacion de estos, aunque no son obligatorias
[1] abrir el arvhivo para lectura y escritura, no es imprescindible esto por lo que los puedes abirir en modo solo lectura o solo escritura
[2] abrirlo en modo binario, ya q las funciones de acceso directo como fseek() pueden funcionar mal con los archivos de texto debido a la conversion automatica de caracteres
[3] usar funciones como fread y fwrite que son mas apropiadas para archivos binarios
[4] usar la funcion fseek() para situar el puntero de lectura/escritura en el lugar correcto del archivo;*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//prototipos
int registrar(void);
int ver(void);
void menu(void);
void vaciar(char temp[]);
int copiar(char temp[], int i);

int bandera=0;
//Struct
typedef struct registro
{
	char nombre[30];
	int dato;
	int edad;
}registros[10];

registros *reg;
//funcion main
int main(void)
{
	system("color E0");
	menu();
	system("pause");
	return 0;
}


//funcion menu
void menu(void)
{
	int opc;
	do
	{
		puts("Menu\n\nEscoge una opcion\n[1] leer el archivo\n[2] Escribir en el archivo\n[3] salir\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
			{
				ver();
				break;
			}
			case 2:
			{
				registrar();
				break;
			}
			case 3:
			{
			//	salir();
				break;
			}
			default:
			{
				printf("opcion no disponible\n");
				break;
			}
		}
	}while(opc != ' ');
}
//funcion pa registrar
int registrar(void)
{
	int i;
	system("cls");
	FILE *fichero;
	fichero=fopen("ficheros.txt","wb");
	if(fichero==NULL)
	{
		perror("No se pudo abrir el archivo\n");
		return 1;
	}
	else
	{
		int opc;
		fseek(fichero, sizeof(struct registro),SEEK_SET);
		do
		{
			fflush(stdin);
			printf("introduzca los datos del alumno/a que desea añadir:\n");
			printf("nombre: "); gets(reg[i].nombre);
			printf("introduzca los datos del registro %s:\n",reg[i].nombre);
			printf("Matricula: "); scanf("%d",&reg[i].dato);
			printf("Introduce la edad del registro %s:\n",reg[i].nombre);
			printf("edad: "); scanf("%d",&reg[i].edad);
			fwrite(&registros,sizeof(struct registro),1,fichero);
			printf("desea agregar otro registro?\n[1] si[2] No");
			scanf("%d",&opc);
			i++;
		}while(opc != 2);
		bandera=1;
		fclose(fichero);
	}
	system("pause");
}

//funcion pa leer el archivo
int ver(void)
{
	int i;
	system("cls");
	if(bandera == 1)
	{
		char temp[50];
		char aux;
		int i,j;
		int cont=0;
		
		
		FILE *fichero;
		fichero=fopen("ficheros.txt","rb");
	
		if(fichero==NULL)
		{
			perror("No se pudo abrir el archivo\n");
			return 2;
		}
	
	
		else
		{
			while(!feof(archivo))
			{
				fgets(temp,50,fichero);
				cont++;
			}
			rewind(fichero);
			
			reg=(registros*)malloc(cont*sizeof(registros));
			
			if(reg == NULL)
			{
				perror("Error al asignar memoria\n");
				return 4;
			}
			for(i=0;!feof(fichero);i++)
			{
				vaciar(temp);
				aux='0';
			
				for(j=0;aux != '\n';j++)
				{
					aux=fgetc(fichero);
					if(aux != '\n')
					{
						temp[j]=aux;
					}
				}
				copiar(temp,i);
				
				printf("Nombre: %s\nMatricula: %d\nEdad: %d\n",reg[i].nombre,reg[i].dato,reg[i].edad);
				
			}
		}
	}
	else
	{
		printf("Aun no hay nada escrito en el archivo, debe escribir algo primero\n");
	}
	
}

void vaciar(char temp[])
{
	int i;
	for(i=0;i<50;i++)
	{
		temp[i]='\0';
	}
}

int copiar(char temp[], int i)
{
	int N = strlen(temp)+1;
	reg[i].nombre =(char *)malloc(N*sizeof(char));
	if(reg[i].nombre ==NULL)
	{
		perror("No se ha podido reservar memoria\n");
		return 3;
	}
	strcpy(reg[i].nombre,temp);
}
