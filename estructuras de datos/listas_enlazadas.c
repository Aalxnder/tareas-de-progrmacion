#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

typedef struct
{
	float x,y;
}tElem;


//estructura del nodo

typedef struct Nodo
{
	tElem dato;
	struct Nodo* sig;
}tNodo;

//estructura de la lista
typedef tNodo* tLista;  //definir un tipo de dato lista como un puntero al inicio


//prototipos
tLista nuevaLista();
void agregarFinal(tLista *lis,tElem e);
void agregarInicio(tLista *lis, tElem e);
void agregarOrdenado(tLista *lis, tElem e);
void eliminarElem(tLista *lis, tElem e);
void mostrarLista(tLista lis);
tElem nuevoElem();
int comparaElem(tElem e1, tElem e2);
void mostrarElem(tElem e);
int menu();

int main(void)
{
	int opc;
	tLista lis;
	tElem e;
	
	lis = nuevaLista();
	do
	{
		opc=menu();
		system("cls");
		switch(opc)
		{
			case 1:
			{
				printf("Cargue el elemento que desea insertar\n");
				e = nuevoElem();
				agregarFinal(&lis, e);
				printf("Insercion al final exitosa\n");
				break;
			}
			case 2:
			{
				printf("Cargue el elemento que desea insertar\n");
				e = nuevoElem();
				agregarInicio(&lis, e);
				printf("Insercion al inicio exitosa\n");
				break;
			}
			case 3:
			{
				printf("Cargue el elemento que desea insertar\n");
				e = nuevoElem();
				agregarOrdenado(&lis, e);
				printf("Insercion ordenada exitosa");
				break;
			}
			case 4:
			{
				printf("Cargue el elemento que desea insertar\n");
				e = nuevoElem();
				eliminarElem(&lis, e);
				
				break;
			}
			case 5:
			{
				mostrarLista(lis);
				break;
			}
			case 6:
			{
				printf("Hasta luego\n");
				break;
			}
			default:
			{
				printf("Opcion incorrecta\n");
			}
			
		}
		
	} while(opc != 6);
}


//menu 
int menu()
{
	int opc;
	printf("\
				------------------Menu------------------\n\
				| 1-Agregar un elemento al final       |\n\
				| 2-Agregar un elemento al inicio      |\n\
				| 3-Agregar un elemento ordenado       |\n\
				| 4-Eliminar un eleemnto               |\n\
				| 5-mostrar lista                      |\n\
				| 6-salir                              |\n\
				----------------------------------------\n");
	printf("Ingresa una opcion :" );
	scanf("%d",&opc);
	return opc;
}	


//funcion para ingresar un nuevo elemento
tElem nuevoElem()
{
	tElem e;
	printf("Ingresa la coordenada x: \n");
	scanf("%f",&e.x);
	
	printf("Ingresa la coordenada y: \n");
	scanf("%f",&e.y);
	
	return e;
}


//comparar los elementos
int comparaElem(tElem e1, tElem e2)
{
	int d1,d2;
	
	d1 = sqrt(e1.x * e1.x + e1.y * e1.y);
	d2 = sqrt(e2.x * e2.x + e2.y * e2.y);
	
	if (d1<d2)
	{
		return -1;
	}
	else
	{
		if (d1>d2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}


//funcion para mostrar los elementos de la lista(esto solo imprime, la funcion que recorre todo y la muestra esta mas adelante)
void mostrarElem(tElem e)
{
	printf("(%.2f, %.2f)\n",e.x,e.y);
}


//funcion para crear un nuevo nodo
tLista crearNodo(tElem e)
{
	tLista nodo;  //como ya le asigne a tNodo un elemento de tipo tLista solo asigno nodo del tipo tLista
	nodo = (tLista)malloc(sizeof(tNodo)); //le asigno memoria a el nodo, devuelve un puntero de tipo lista
	
	if (nodo == NULL)
	{
		perror("Error en la asignacion de memoria");
	}
	nodo->dato = e;
	nodo->sig = NULL;
	return nodo;
}


//crear una nueva lista
tLista nuevaLista()  //crear una nueva lista, como este sera el unico nodo este apunta a null pq no hay nada 
{
	return NULL;
}


//funcion para agregar al final de la lista
void agregarFinal(tLista* lis, tElem e)  //por lo mismo que ya esta definido tNodo como tLista se pone asi, que es lo mismo que tNodo**
{
	tLista aux;
	
	if (*lis != NULL)
	{
		aux = *lis; //resguardar la direccion de lis
		while(aux->sig != NULL) //iterar hasta que se llegue a null, poner la referencia del siguiente nodo con la flechita, de lo contrario la referencia se perdera pq llegara a null
		{
			aux = aux->sig; //si no es null el proximo elemento de la lista, movemos el nodo auxiliar(aux)
		}
		aux->sig = crearNodo(e); //una vez se llegue a el ultimo nodo, crear un nodo y ese se pondra al final 
	}
	else
	{
		*lis=crearNodo(e); //si la lista esta vacia, creo un nodo y como esta vacia ese sera el ultimo 
	}
}


//funcion para agregar al inicio 
void agregarInicio(tLista* lis, tElem e)
{
	tLista nodo;
	nodo = crearNodo(e);
	
	nodo->sig = *lis;  //hacer que el nodo siguiente apunte a lis o sea que ira antes
	*lis = nodo; //pero para no dejar lis en ningun momento en un lugar que no sea la direccion a el primer elemento, porque esta es como la cabeza de la lista, ahora lis apunta al nodo primero
}


//funcion para agregar los nodos de forma ordenada
void agregarOrdenado(tLista* lis, tElem e)
{
	tLista ant, aux,nodo;  //declarar las variables, anterior, auxiliar y el nodo a insertar
	
	nodo = crearNodo(e);  //crear el nodo
	if(*lis != NULL)
	{
		ant = NULL; //inicializar los nodos, el anterior en null 
		aux = *lis; //y el siguiente al anterior en este caso llamado aux en la direccion de lis
		
		while(aux != NULL && comparaElem(aux->dato, e)<0) //recorrer hasta que no se llegue a null y a la vez al comparar elementos se pueda insertar
		{
			ant = aux;  //reacomodar los punteros, el anterior estara donde estaba el auxiliar
			aux = aux->sig; //y el auxiliar se pondra en el siguiente nodo
		}
		if(ant != NULL) //si el valor insertado es el menor de todos, preguntamos si el while algiuna vez se ejecuto, si no es el menor de todos 
		{
			//aqui entra si el while si se movio, es decir que si esta entre dos valores
			ant->sig=nodo; //el nodo anterior ahora apunta al nodo que ingresamos nuevo
			nodo->sig=aux;  //el nodo que ingresamos apunta a el siguiente, o sea aux asi ya queda entre los dos
		}
		else //si no entro al while es decir que es el menor, entonces se inserta al inicio
		{
			nodo->sig = *lis;
			*lis = nodo;
		}
	}
	else  //si la lista esta vacia
	{
		*lis=nodo; //como no hay nada la lista comienza en el nodo recien creado
 	}
}

void eliminarElem(tLista* lis, tElem e)
{
	tLista ant,aux;
	if(*lis != NULL)
	{
		ant = NULL;
		aux = *lis;
		while(aux != NULL && comparaElem(aux->dato,e)!= 0) //se recorre mientras los elementos no sean iguales
		{
			ant = aux ; //el anterior se posiciona en donde estaba el auxiliar (el aux se parara justo cuando se encuentre el valor
			aux = aux->sig; 
		}
		if(aux != NULL) //si auxiliar es null significa que el elemento no se encontro , asi que no puedo eliminar nada;
		{
			if(ant != NULL) //verificar si se movio el while(lo que se quiere borrar si esta entra los valores
			{
				ant->sig = aux->sig; //enganchar el anterior a el nodo que le sigue a auxiliar, puesto que auxiliar se detendra en el elemento q queremos borrar
			}
			else  //si no se movio, es decir que el elemento q quieren borrar es el primero se hace esto
			{
				*lis = aux->sig; //si quiero eliminar el primero hacer que lis apunte al siguiente nodo(el segundo)
			}
			free(aux); //como aux es el q se va a borrar liberamos su memoria
		}
		else
		{
			printf("No se ha encontrado el valor a eliminar");
		}
		
	}
	else
	{
		printf("La lista ya esta vacia");
	}
	
}

//esta funcion si muestra la lista
void mostrarLista(tLista lis)
{
	if (lis != NULL)
	{
		while(lis != NULL) //aqui se pone solo distinto de null y no con lis->sig != null porque necesito recorrer todos los nodos, incluyendo el ultimo, si lo pongo con la flechita, parare en el ultimo y no lo mostrara porque nunca llegara a null
		{
			mostrarElem(lis->dato);
			lis= lis->sig; //una vez mostrado el dato, nos movemos al siguiente
		}
	}
	else
	{
			printf("La lista se encuentra vacia\n");
	}
	
}
