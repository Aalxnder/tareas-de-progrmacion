#include "lista.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

Nodo* CrearNodo(Libro* libro)
{
	Nodo* nodo=(Nodo*)malloc(sizeof(Nodo));
	strncpy(nodo ->libro.titulo,libro->titulo,50);
	strncpy(nodo ->libro.autor,libro ->autor,50);
	strncpy(nodo ->libro.isbn,libro ->isbn,13);
	nodo->siguiente=NULL;
	return nodo;
}
void DestruirNodo(Nodo* nodo)
{
	free(nodo);
}

void insertarPrincipio(Lista* lista,Libro* libro)
{
	Nodo* nodo=CrearNodo(libro);
	nodo->siguiente=lista ->cabeza;
	lista->cabeza =nodo;
}

void insertarFinal(Lista* lista, Libro* libro)
{
	Nodo* nodo=CrearNodo(libro);
	if(lista -> cabeza ==NULL)
	{
		lista->cabeza=nodo;
	}
	else
	{
		Nodo* puntero = lista ->cabeza;
		while(puntero -> siguiente)
		{
			puntero = puntero ->siguiente;
		}
		puntero ->siguiente = nodo;
	}
}

void insertarDespues(int n, Lista* lista, Libro* libro)
{
	Nodo* nodo =CrearNodo(libro)
	if(lista->cabeza == NULL)
	{
		lista->cabeza=nodo;
	}
	else
	{
		Nodo* puntero = lista ->cabeza;
		int posicion = 0;
		while(posicion < n && puntero -> siguiente);
		{
			puntero = puntero ->siguiente;
			posicion++;
		}
		nodo-siguiente = puntero->siguiente;
		puntero ->siguiente = nodo;
	}
}

Libro *obtener(int n,Lista* lista)
{
	if(lista ->cabeza ==NULL)
	{
		return NULL;
	}
	else
	{
		Nodo* puntero = lista->cabeza;
		int posicion =0;
		while (posiciom<n && puntero ->siguiente)
		{
			puntero = puntero -> siguiente;
			posicion++;
		}
		return &puntero ->libro;
	}
}
