//Primer programa de pilas
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct nodo
{
	int data;
	struct nodo* sig;		
};

struct nodo* crearNodo(int data);
void push(int data,struct nodo **pila);
int pop (struct nodo** pila);
void mostrarPila(struct nodo** pila);

int main(void)
{
	int dato;
	printf("Ingresa el elemento");
	scanf("%d",&dato);
	
	struct nodo* pila = crearNodo(dato);
	push(2,&pila);
	push(77,&pila);
	push(89,&pila);
	
	mostrarPila(&pila);
	for(int i=0;i<5;i++)
	{
		printf("Eliminando %d\n",pop(&pila));
		mostrarPila(&pila);
	}
	return 0;
}


//creo un nodo
struct nodo* crearNodo(int data)
{
	struct nodo* nuevo = (struct nodo*)malloc(sizeof(struct nodo));
	
	nuevo->data = data;
	nuevo->sig = NULL;
	
	return nuevo;
}


//agregar nodo
void push(int data,struct nodo **pila)
{
	struct nodo* nuevo = crearNodo(data);
	
	nuevo->sig = *pila;
	
	*pila = nuevo;
}


int pop (struct nodo** pila)
{
	//Si la pila esta vacia
	if(!(*pila))
	{
		return INT_MIN;
	}
	
	//Si la pila no esta vacia
	struct nodo* primero = *pila;  //Crear un nodo que aputunte al primer elemento
	
	int data = primero->data;  //guardar el elemento a eliminar
	*pila = (*pila)->sig;   //la pila es como el primer elemento, asi que ahora, como solo se pueden eliminar los ultimos, ahora apunta a el segundo elemento
	
	free(primero);
	
	return data;
}


void mostrarPila(struct nodo** pila)
{
	struct nodo* temp = *pila;
	
	while(temp)
	{
		printf("%d, ",temp->data);
		temp = temp->sig; //avanzar el nodo
	}
	printf("\n");
}
