#include <stdio.h>
#include <stdlib.h>

//estructura para almacenar los datos de los nodos(estudiantes)
typedef struct 
{
	char nombre[30];
	int edad;
	long int codigo;
	char materia1[30],materia2[30],materia3[30],DiaMateria[30],DiaMateria2[30],DiaMateria3[30];
	char horaInicioo[30],horaInicio2[30],horainicio3[30],horaFin[30],horafin2[30],horafin3[30];
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
void menu();
void menu2(); 
void agregarInicio(tLista* lis, tElem e);

int main(void) 
{
	//crear cada una de las variables con su tipo correspondiente
	tLista lis;
	tElem e; 
	lis = nuevaLista();
	
	menu();
	/*e = nuevoElemento();
	crearNodo(e);
	mostrarLista(lis);*/
	
	return 0;
}


//Lista que se crea por si la lista esta vacia
tLista nuevaLista()
{
	return NULL;
}


//funcion pal menu principal
void menu (tElem e, tLista lis)
{	
	system("clear");
	int opc;
	do
	{
	
		printf("Menu Principal\n\n");

		printf("[1] registrar usuario \n");
		printf("[2] ver historial \n");
		printf("[3] salir \n");
		printf("Escoge una opcion \n");
		scanf("%d",&opc); //entrada para seleccion de opcion
		switch(opc)
		{
			case 1:
			{
				menu2(e, lis);
				break;
			}
			case 2:
			{
				printf("Mostrar historial\n");
				break;
			}
			case 3:
			{	
				printf("Salir\n");
				break;
			}
			default:
			{
				printf("Opcion no valida\n");
				break;
			}
		}
	}while(opc!=' ');

}


//Menu 2, menu de registro de usuario
void menu2(tElem e,tLista lis)
{
	system("clear");
	int opc;
	do
	{
		printf("Menu de registro\n");
		printf("[1] Insertar al inicio\n");
		printf("[2] Insertar al final \n");
		printf("[3] Insertar ordenado \n");
		printf("[4] Eliminar un elemento \n");
		printf("[5] Buscar un elemento \n");
		printf("[6] Mostrar registros \n");
		printf("[7] Regresar a menu principal \n");
		printf("[8] Salir \n");
		scanf("%d",&opc); //entrada para seleccion de opcion
		switch(opc)
		{
			case 1:
			{
				system("clear"); //esto es el system cls pero en linux no jala el system cls :(
				printf("Ingrese los elementos a insertar al inicio\n\n");
				e = nuevoElemento();
				agregarInicio(&lis,e);
				printf("Valores insertados al inicio con exito\n");
				break;
			}
			case 2:
			{
				printf("Ingrese los valores a insertar al final\n\n");
				break;
			}
			case 3:
			{
				printf("Inserte los valores a insertar de manera ordenada\n");
				break;
			}
			case 4:
			{
				printf("elija un elemento para eliminar\n");
				break;
			}
			case 5:
			{
				printf("Buscar un elemento\n");
				break;
			}
			case 6: 
			{
				printf("Mostrando registros\n");
				mostrarLista(lis);
				break;
			}
			case 7:
			{
				printf("Regresar al menu principal\n");
				menu(e,lis);
				break;
			}
			case 8:
			{
				printf("Salir");
				break;
			}
			default:
			{
				printf("Opcion no valida\n");
				break;
			}
		}
	}while(opc != ' ');
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


//Funcion para mostrar un elemento(esto solo imprime, el bucle que recorre la lista esta mas adelante)
void mostrarElem(tElem e)
{
	printf("Nombre del alumno: %s\n",e.nombre);
	printf("Codigo del alumno: %li\n",e.codigo);
	printf("Edad del alumno: %d\n",e.edad);
	
	printf("Materia numero 1: %s\n",e.materia1);
	printf("Dia de la materia %s: %s\n",e.materia1,e.DiaMateria);
	printf("Materia 1 Inicio de clases: %s	",e.horaInicioo);
	printf("Materia 1 fin de clases: %s \n",e.horaFin);
	
	printf("Materia numero 2: %s\n",e.materia2);
	printf("Dia de la materia %s: %s\n",e.materia2,e.DiaMateria2);
	printf("Materia 2 Inicio de clases: %s	",e.horaInicio2);
	printf("Materia 2 fin de clases: %s \n",e.horafin2);
	
	printf("Materia numero 3: %s\n",e.materia3);
	printf("Dia de la materia %s: %s\n",e.materia3,e.DiaMateria3);
	printf("Materia 3 Inicio de clases: %s	",e.horainicio3);
	printf("Materia 3 fin de clases: %s \n",e.horafin3);
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
	while(e.edad<0 ||e.edad>115)
	{
		printf("Error, ingrese una edad valida\n");
		printf("Ingresa nuevamente la edad del alumno %s: \n",e.nombre);
		scanf("%d",&e.edad);
	}
	
	//materia 1
	printf("Ingresa la materia numero 1:\n");
	scanf("%s",&e.materia1);
	printf("Ingresa a el dia de la materia %s\n",e.materia1);
	scanf("%s",&e.DiaMateria);
	printf("Ingresa la hora de inicio de la clase 1: \n");
	scanf("%s",&e.horaInicioo);
	printf("Ingresa la hora de fin de la clase 1:\n");
	scanf("%s",&e.horaFin);
	
	//materia 2
	printf("Ingresa la materia numero 2:\n");
	scanf("%s",&e.materia2);
	printf("Ingresa a el dia de la materia %s\n",e.materia2);
	scanf("%s",&e.DiaMateria2);
	printf("Ingresa la hora de inicio de la clase 2: \n");
	scanf("%s",&e.horaInicio2);
	printf("Ingresa la hora de fin de la clase 2:\n");
	scanf("%s",&e.horafin2);
	
	//materia 3
	printf("Ingresa la materia numero 3:\n");
	scanf("%s",&e.materia3);
	printf("Ingresa a el dia de la materia %s\n",e.materia3);
	scanf("%s",&e.DiaMateria3);
	printf("Ingresa la hora de inicio de la clase 3: \n");
	scanf("%s",&e.horainicio3);
	printf("Ingresa la hora de fin de la clase 3:\n");
	scanf("%s",&e.horafin3);
	
	return e;
}

//Funcion para ingresar un elemento al inicio
void agregarInicio(tLista* lis, tElem e)
{
	tLista nodo; //crear un nodo
	
	nodo = crearNodo(e);
	nodo->siguiente = *lis;  //la posicion siguiente a el nodo que agreguemos sera el nodo cabeza, por lo que se pondra al inicio
	*lis = nodo;   //y acomodar la lista que apunte a el nodo que pusimos al inicio, porque el nodo cabeza siempre debe ir al inicio
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
