/*Instrucciones:

Estudia la lectura Diagrama de Flujo y el video Pseudocódigo  que se encuentran en LECTURAS PRIMER BLOQUE de BIBLIOTECA

Realiza tres diseños utilizando el diagrama de flujo y el pseudocódigo de los siguientes problemas:

Planteamiento 1: Imprimir en pantalla el promedio de n calificaciones. Preguntarle al usuario si quiere volver a ejecutar

Planteamiento 2: Pedir al usuario un valor del 1 al 12 si el usuario escribe un valor diferente a ese rango imprimir en 
pantalla un mensaje de error y volver a pedir que escriba un valor. Cuando el valor se encuentre en ese rango imprimir en pantalla 
el nombre del mes correspondiente al número.

Planteamiento 3: Tener dos opciones para convertir de Faherenheit a Celsius y viceversa. Y al final una opción de salir.
 Pregunta al usuario si quiere regresar al menú



Lineamientos de Fondo:

- Realiza en la computadora el diagrama de flujo y pseudocódigo de los planeamientos que se encuentran en las instrucciones

- Cada problema debe contener: planteamiento, datos de entrada, proceso, datos de salida, diagrama de flujo y pseudocódigo

- Utiliza adecuadamente los símbolos del diagrama de flujo

Lineamientos de Forma:

- El documento debe tener tres secciones, una para cada problema

- El documento debe contener tus datos personales (código y nombre) y los datos de la materia (clave, nombre y horario), así como fecha de elaboración.

- Convierte el archivo a formato PDF y subelo aquí oprimiendo el botón de "enviar"*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//prototipos de funcion 
void menu(void);
void promediomenu(void);
void registrar(void);
void ver(void);
void menormayor(void);
//variables globales
int j=0;
struct cal
{
	char alumno[30];
	float mate;
	float ingles;
	float espaniol;
	long int codigo;
	float prom;
}cal[100];

//funcion Main
int main()
{
	system("color E0");
	menu();
	return 0;
}

void menu(void)
{
	system("cls");
	int opc;
	//Menu
	do
	{
		printf("Menu\n[1] promedio de N calificaciones\n[2] meses del año\n[3] fahrenheit a celsius\n[4] Salir\n");
		printf("Elija una opcion\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
			{
				promediomenu();
				break;
			}
			case 2:
			{
				//meses();
				break;
			}
			case 3:
			{
				//convertir();
				break;
			}
			case 4:
			{
				//salir()
				break;
			}
			default:
			{
				printf("Error, opcion no valida");
				break;
			}
		}
	}while(opc != 5);
}

void promediomenu(void)
{
	int opc;

	printf("Menu de calificaciones\n[1] registrar calificaciones de los alumnos\n[2] Ver calificaciones de los alumnos\n");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
		{
			registrar();
			break;	
		}
		case 2:
		{
			ver();
		}	
		default:
		{
			printf("Opcion incorrecta\n");
			break;
		}
	}	
}

void registrar(void)
{
	int i;
	system("cls");
	int opc3;
	do
	{
		fflush(stdin);
		printf("ingresa el nombre de el alumno %d\n",j);
		gets(cal[j].alumno);
		printf("Ingresa el codigo del alumno %s\n",cal[j].alumno);
		scanf("%ld",&cal[j].codigo);
		fflush(stdin);
		printf("Ingresa la calificacion de la materia de matematica de %s\n",cal[j].alumno);
		scanf("%f",&cal[j].mate);
		while(cal[j].mate>100 || cal[j].mate<=0)
		{
			printf("Error, ingrese una calificacion correcta\n");
			printf("Ingresa la calificacion de la materia de matematica de %s\n",cal[j].alumno);
			scanf("%f",&cal[j].mate);
		}
		printf("Ingresa la calificacion de la materia de ingles de %s\n",cal[j].alumno);
		scanf("%f",&cal[j].ingles);
		while(cal[j].ingles>100 || cal[j].ingles<=0)
		{
			printf("Error, ingrese una calificacion correcta\n");
			printf("Ingresa la calificacion de la materia de ingles de %s\n",cal[j].alumno);
			scanf("%f",&cal[j].ingles);
		}
		printf("Ingresa la calificacion de la materia de español de %s\n",cal[j].alumno);
		scanf("%f",&cal[j].espaniol);
		while(cal[j].espaniol>100 || cal[j].espaniol<=0)
		{
			printf("Error, ingrese una calificacion correcta\n");
			printf("Ingresa la calificacion de la materia de español de %s\n",cal[j].alumno);
			scanf("%f",&cal[j].espaniol);
		}
		printf("desea ingresar otro producto?\n");
		printf("ingrese 1) para si o 2) para no\n");
		scanf("%d",&opc3);
		j++;
		system("cls");	
	}while(opc3 != 2);

	system("pause");
	promediomenu();
}

void ver(void)
{
	int i;
	system("cls");
	printf("\tAlumnos registrados\n");
	//ciclo para imprimir el producto en la posicion i hasta la cantidad que haya 
	for(i=0;i<j;i++)
	{
		//mostrar productos de la struck
		printf("\t Alumno %d\n\n\n", i);
        printf("\t Nombre %s \n",cal[i].alumno);
        printf("\t Codigo %ld \n",cal[i].codigo);
        printf("\t mate %.1f \n",cal[i].mate);
        printf("\t ingles %.1f \n",cal[i].ingles);
        printf("\t español %.1f \n\n",cal[i].espaniol);
	}
	menormayor();
	system("pause");
}

void menormayor(void)
{
	int i;
	float mayor=0.0;
	float menor = 100.0;
	char nombreM[30];
	char nombrem[30];
	
	for(i=0;i<j;i++)
	{
		cal[i].prom=(cal[i].mate+cal[i].ingles+cal[i].espaniol)/3;
	}

	printf("El promedio de los alumnos es:\n");
	for(i=0;i<j;i++)
	{
		printf("alumno: %s, promedio: %.1f\n",cal[i].alumno,cal[i].prom);
	}
	for (i=0;i<j;i++)
	{
		if(cal[i].prom>mayor)
		{
			mayor=cal[i].prom;
			strcpy(nombreM,cal[i].alumno);
		}
		if(cal[i].prom<menor)
		{
			menor=cal[i].prom;
			strcpy(nombrem,cal[i].alumno);
		}
	}
	printf("El alumno con el menor promedio es %s con un promedio de %.1f\n",nombrem,menor);
	printf("El alumno con el mayor promedio es %s con un promedio de %.1f\n",nombreM,mayor);
	
	
}
