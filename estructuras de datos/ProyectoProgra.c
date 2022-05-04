#include <stdio.h>
#include <stdlib.h>

//estructura para almacenar los datos de los nodos(estudiantes)
typedef struct 
{
	char nombre[30];
	int edad;
	long int codigo;
	char materia1[30],materia2[30],materia3[30],DiaMateria[30],DiaMateria2[30],DiaMateria3[30];
	float horaInicioo,horaInicio2,horainicio3,horaFin,horafin2,horafin3;
}tElem;

//Estructura de el nodo general y el nodo que apunta al siguiente nodo
typedef struct Nodo
{
	tElem dato;
	struct Nodo* siguiente;
}tNodo;

//Crear el tipo de dato tLista, sin esto las funciones de las strucs deberian ir como "tNodo* nombrefuncion()"(esto lo hacemos por praciticidad)
typedef tNodo* tLista; 

//prototipos
tLista nuevaLista();
tLista crearNodo(tElem e);
void mostrarElem(tElem e);
tElem nuevoElemento();
void mostrarLista(tLista lis);


int main(void) 
{
	//crear cada una de las variables con su tipo correspondiente
	tLista lis;
	tElem e; 
	lis = nuevaLista();
	
	e = nuevoElemento();
	crearNodo(e);
	mostrarLista(lis);
	return 0;
}


//Lista que se crea por si la lista esta vacia
tLista nuevaLista()
{
	return NULL;
}

//funcion para crear un nodo
tLista crearNodo(tElem e)
{
	tLista nuevo; //crear un nodo del tipo tLista(declarado antes), si no seria algo como "tNodo* nuevo"
	nuevo = (tLista)malloc(sizeof(tNodo));  //asignar memoria al Nodo
	
	//comprobar si la asignacion de memoria salio bien
	if(nuevo == NULL)
	{
		perror("Error en la asignacion de memoria");
		exit(-1);
	}
	nuevo->dato = e;
	nuevo->siguiente = NULL;
	
	return nuevo;
}

void mostrarElem(tElem e)
{
	printf("Nombre del alumno: %s\n",e.nombre);
	printf("Codigo del alumno: %li\n",e.codigo);
	printf("Edad del alumno: %d\n",e.edad);
	
	printf("Materia numero 1: %s\n",e.materia1);
	printf("Dia de la materia %s: %s\n",e.materia1,e.DiaMateria);
	printf("Materia 1 Inicio de clases: %.1f   ",e.horaInicioo);
	printf("Materia 1 fin de clases: %.1f \n",e.horaFin);
	
	printf("Materia numero 2: %s\n",e.materia2);
	printf("Dia de la materia %s: %s\n",e.materia2,e.DiaMateria2);
	printf("Materia 2 Inicio de clases: %.1f ",e.horaInicio2);
	printf("Materia 2 fin de clases: %.1f \n",e.horafin2);
	
	printf("Materia numero 3: %s\n",e.materia3);
	printf("Dia de la materia %s: %s\n",e.materia3,e.DiaMateria3);
	printf("Materia 3 Inicio de clases: %.1f ",e.horainicio3);
	printf("Materia 3 fin de clases: %.1f \n",e.horafin3);
	printf("\n");
}

tElem nuevoElemento()
{
	tElem e; //crear un elemento del tipo tElem llamado e
	//datos generales
	printf("Ingresa el nombre: \n");
	scanf("%s",&e.nombre);
	printf("Ingresa el codigo del alumno: \n"); 
	scanf("%li",&e.codigo);
	printf("Ingresa la edad del alumno %s: \n",e.nombre);
	scanf("%d",&e.edad);
	
	//materia 1
	printf("Ingresa la materia numero 1:\n");
	scanf("%s",&e.materia1);
	printf("Ingresa a el dia de la materia %s\n",e.materia1);
	scanf("%s",&e.DiaMateria);
	printf("Ingresa la hora de inicio de la clase 1: \n");
	scanf("%f",&e.horaInicioo);
	printf("Ingresa la hora de fin de la clase 1:\n");
	scanf("%f",&e.horaFin);
	
	//materia 2
	printf("Ingresa la materia numero 2:\n");
	scanf("%s",&e.materia2);
	printf("Ingresa a el dia de la materia %s\n",e.materia2);
	scanf("%s",&e.DiaMateria2);
	printf("Ingresa la hora de inicio de la clase 2: \n");
	scanf("%f",&e.horaInicio2);
	printf("Ingresa la hora de fin de la clase 2:\n");
	scanf("%f",&e.horafin2);
	
	//materia 3
	printf("Ingresa la materia numero 3:\n");
	scanf("%s",&e.materia3);
	printf("Ingresa a el dia de la materia %s\n",e.materia3);
	scanf("%s",&e.DiaMateria3);
	printf("Ingresa la hora de inicio de la clase 3: \n");
	scanf("%f",&e.horainicio3);
	printf("Ingresa la hora de fin de la clase 3:\n");
	scanf("%f",&e.horafin3);
	
	return e;
}

//funcion para recorrer la lista y mostrar
void mostrarLista(tLista lis)
{
	if(lis != NULL)
	{
		while(lis != NULL)
		{
			mostrarElem(lis->dato);
			lis = lis->siguiente;
		}
	}
	else
	{
		printf("la lista esta vacia, no hay nadas para mostrar\n");
	}
}
