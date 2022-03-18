/* Crear el archivo de texto personas.dat de tal forma que cada linea contenga un registro con los datos de una persona que tiene los campos
nombre, fecha de nacimiento dia(nn), mes(nn)y año (nnnn) y mes en ASCII
en la struct persona se declaran los campos correspondientes, se define una funcion que devuelve una estructura persona leida del teclado. el mes ASCII 
se optiene de una funcion q tiene como entrada el numero de mes y devuelve una cadena con el mesd ASCII, y los campos son escritos en el archivo con fprintf*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct 
{
	char* nm;
	int dia;
	int ms;
	int aa;
	char mes[11];
}persona;


void entrada (persona* p);
char* mes_ascii(short n);
int main()
{
	system("color E0");
	FILE *archivo;
	int opc;
	char r= 'S';
	archivo = fopen("persons.txt","wt");
	if(archivo == NULL)
	{
		perror("Error al abrir los archivos\n");
		return 1;
	}
	do
	{
		persona pt;
		entrada(&pt);
		printf("%s %d-%d-%d %s\n",pt.nm,pt.dia,pt.ms,pt.aa,pt.mes);
		fprintf(archivo,"%s %d-%d-%d %s\n",pt.nm,pt.dia,pt.ms,pt.aa,pt.mes);
		printf("Otro registro?\notro=SI\2 = NO\n");
		scanf("%d",&opc);
	}while(opc != 2);
	
	fclose(archivo);
	return 0;
}

//Se leen los atributos de una persona por teclado
void entrada(persona *p)
{
	char bf[81];
	fflush(stdin);
	printf("Nombre: ");
	gets(bf);
	p->nm=(char*)malloc((strlen(bf)+1)*sizeof(char)); //asigno valor en memoria al puntero
	strcpy(p->nm,bf);
	printf("Fecha de nacimiento: (dd mm aaaa): ");
	scanf("%d %d %d%*c",&p->dia,&p->ms,&p->aa);
	printf("\n %s\n",mes_ascii(p->ms));
	strcpy(p->mes, mes_ascii(p->ms));
	
}

//convertir el mes a formato ascii
char *mes_ascii(short n)
{
	static char *mes[12] = 
	{
		"enero", "febrero", "marzo", "abril",
		"mayo", "junio","julio", "agosto",
		"septiembre","octubre", "noviembre", "diciembre"};
	if(n >= 1 && n<=12)
	{
		return mes[n-1];
	}
	else
	{
		return "error de mes\n";
	}
}
