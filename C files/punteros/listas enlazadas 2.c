#include <stdio.h>
#include <stdlib.h>

//definir la struct nodo
typedef struct nodo
{
	int dato;
	struct nodo *siguiente; //crear ek apuntador para el siguiente nodo

}NODO;

//prototipo crear nodo
NODO* CrearNodo(int dato);
int InsertarInicio(NODO **cabeza, int dato);
void ImprimirLista(NODO *cabeza);
int InsertarFinal(NODO **cabeza, int dato); //dos asteriscos porque si modificaremosla cabeza y pa q no se pierda el puntero
int vacia(NODO *cabeza); //un asterisco porque no haremos modificaciones en la cabeza
int buscar(NODO*cabeza,int dato);

int main(void)
{
	system("color E0");

	NODO *cabeza = NULL;
    int res;
	int Dato,Dato2,dato3,bus;

    printf("Ingresa el valor del nodo\n");
    scanf("%d",&Dato);

    InsertarInicio(&cabeza, Dato); //pasar direccion

    printf("Ingresa el valor del nodo\n");
    scanf("%d",&Dato2);

    InsertarInicio(&cabeza, Dato2); //pasar direccion

    printf("Ingresa el valor del nodo\n");
    scanf("%d",&dato3);
    InsertarFinal(&cabeza,dato3);

    ImprimirLista(cabeza);

    printf("Ingresa el valor a buscar\n");
    scanf("%d",&bus);

    res = buscar(cabeza,bus);
    if(res == 1)
    {
        printf("El dato se ha encontrado\n");
    }
    else
    {
        printf("El elemento no se ha encontrad0\n");
    }
	system("pause>nul");
	return 0;
}

NODO* CrearNodo(int dato)
{
	NODO *nuevo = NULL; //crear un nuevo nodo inicializado en null
	nuevo = (NODO*)malloc(sizeof(NODO));   //asignar memoria

	//comprobar si se pudo crear
	if(nuevo != NULL)
	{
		nuevo->dato = dato;
		nuevo->siguiente = NULL;
	}

	return nuevo;
}

int InsertarInicio(NODO **cabeza, int dato)
{
    NODO* nuevo = NULL;  //declarar el nodo apuntando a null
    nuevo = CrearNodo(dato); //crear el nodo

    if (nuevo != NULL)
    {
        nuevo->siguiente= *cabeza;
        *cabeza= nuevo;
        return 1;
    }
    else
    {
        return 0;
    }
}

void ImprimirLista(NODO *cabeza)
{
    NODO *naux = cabeza;

    while (naux != NULL)
    {
        printf("%d\n",naux->dato);
        naux = naux->siguiente; //hacer que valla recorriendo la lista de uno en uno
    }
}

int InsertarFinal(NODO **cabeza, int dato)
{
    NODO *nuevo = NULL;
    NODO *naux = *cabeza;
    nuevo = CrearNodo(dato);

    if (nuevo != NULL)
    {
        while(naux->siguiente != NULL)
        {
            naux = naux->siguiente; //recorrer hasta el final
        }
        naux->siguiente = nuevo; //hacer que el nodo ultimo apunte al nuevo que acabamos de crear
        return 1;
    }
    else
    {
        return 0;
    }
}

int vacia(NODO *cabeza)
{
    if(cabeza == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int buscar(NODO*cabeza,int dato)
{
    NODO*naux = cabeza;
    while(naux != NULL)
    {
        if(naux->dato == dato)
        {
            return 1;
        }
        naux = naux->siguiente;
    }

    return 0;

}
/*
    comprobacion de la creacion del nodo en main
    int Dato;
	printf("Ingresa el valor del nodo\n");
	scanf("%d",&Dato);
	nuevo=CrearNodo(Dato);
	printf("El dato del nuevo nodo es %d\n",nuevo->dato);*/
