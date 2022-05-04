#include <stdio.h>
#include <stdlib.h>

struct nodo
{
	int dato;
	struct nodo* sig;
};

void agregarPila(struct nodo** pila, int dato);
struct nodo* crearNodo(int dato);

int main(void)
{
	struct nodo* pila = NULL;
	int n1,n2;
	
	printf("Ingrese el numero 1: \n");
	scanf("%d",&n1);
	printf("Ingrese el numero 2: \n");
	scanf("%d",&n2);
	
	agregarPila(&pila,n1);
	agregarPila(&pila,n2);
}


struct nodo* crearNodo(int dato)
{
	struct nodo* nuevo = (struct nodo*)malloc(sizeof(struct nodo));
	nuevo->dato= dato;
	nuevo->sig = NULL;
	
	return nuevo;
}
void agregarPila(struct nodo** pila, int dato)
{
	struct nodo* nuevo = crearNodo(dato);
	
	nuevo->sig = *pila;
	
	*pila = nuevo;
	
	printf("Elemento %d agregado correctamente\n",dato);
}
