#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s_pelicula
{
  char titulo[50];
  char director[20];
  char reparto[200];
  char genero[20];
  char nacionalidad[10];
  int duracion;
  char borrado;
  int codigo;
};

struct s_nodo
{
  struct s_pelicula peli;
  struct s_nodo* siguiente;
}
  


/* 
   PROTOTIPOS DE FUNCIONES
   Las funciones de lista que se usan en este programa son las mismas que
   las de la lista abierta de n�meros enteros, pero cambi�ndolas un poco
   para que los nodos contengan pel�culas en lugar de n�meros enteros.
*/

void insertar_peli(struct s_nodo **primero, struct s_pelicula dato);
int borrar_por_contenido(struct s_nodo **primero, int codigo);
void borrar_todos(struct s_nodo **primero);
void mostrar_lista(struct s_nodo *primero);

/*
    PROGRAMA PRINCIPAL
    Observa que este programa se podr�a ampliar para hacer una gesti�n
    completa del archivo de datos: buscar, modificar, borrar, etc.
*/

int main(void)
{
  struct s_pelicula pelicula;
  struct s_nodo *primero;
  FILE *f;
  int busc, tam, n;

  // Abrimos el fichero y miramos su longitud
  f = fopen("video.dat", "a+b");
  if (f == NULL) { printf("No se puede abrir el fichero video.dat\n"); exit(1); }
  fseek(f, 0, SEEK_END);	// Saltamos al final del fichero
  tam = ftell(f) / sizeof(struct s_pelicula);	// Calculamos el n�mero de registros
  fseek(f, 0, SEEK_SET);	// Nos volvemos a situal al comienzo del fichero

  // Leemos el fichero completo y vamos insertando las pel�culas en la lista
  while (!feof(f))
  {
      n = fread(&pelicula, sizeof(struct s_pelicula), 1, f);
      if (n > 0)
	  insertar_peli(&primero, pelicula);
  }

  printf("Archivo video.dat cargado con �xito (%i registros)\n\n", tam);
  fclose(f);

  // Mostramos la lista de pel�culas
  printf("Listado de pel�culas\n-----------------------\n");
  mostrar_lista(primero);

  // Borramos una pel�cula
  printf("\n\nIntroduzca el c�digo de la pel�cula que quiere borrar:\n");
  scanf("%i", &busc);
  n = borrar_por_codigo(&primero, busc);
  if (n == 0)
      printf("La pel�cula no existe\n");
  else
      printf("Pel�cula borrada\n");

  // Mostramos de nuevo la lista de pel�culas
  printf("Listado de pel�culas\n-----------------------\n");
  mostrar_lista(primero);

  // Liberamos la memoria antes de terminar
  borrar_todo(&primero);

  return 0;
}


/*
    FUNCIONES DE LISTA
    No se incluyen todas las funciones, s�lo las que se usan
    en este programa.
*/


// Inserta un nodo al principio de la lista
void insertar_peli(struct s_nodo **primero, struct s_pelicula dato)
{
   struct s_nodo *nuevo;
   
   nuevo = (struct s_nodo*) malloc (sizeof(struct s_nodo));
   nuevo->peli = dato;
   nuevo->siguiente = *primero;
   *primero = nuevo;
}


// Borra la pel�cula cuyo c�digo se pasa como par�metro (si existe)
// Devuelve 0 si la pel�cula no existe, o 1 si existe y se ha borrado
int borrar_por_contenido(struct s_nodo **primero, int codigo)
{
   struct s_nodo *nodo, *anterior;
   int encontrado = 0;
   
   nodo = *primero;
   anterior = *primero;
   while ((nodo != NULL) && (encontrado == 0))
   {
      if (nodo->peli.codigo == codigo)
      {
         if (nodo == *primero)
	    *primero = (*primero)->siguiente;
	 else
	    anterior->siguiente = nodo->siguiente;
	 free(nodo);
	 encontrado = 1;
      }
      else
      {
         anterior = nodo;
         nodo = nodo->siguiente;
      }
   }

   return encontrado;
   
}

// Borra todas las pel�culas y libera la memoria
void borrar_todos(struct s_nodo **primero)
{
   struct s_nodo *nodo, *sig;
   
   nodo = *primero;
   while (nodo != NULL)
   {
      sig = nodo->siguiente;
      free(nodo);
      nodo = sig;
   }

   *primero = NULL;
}


// Muestra un listado de las pel�culas que hay en la lista
void mostrar_lista(struct s_nodo *primero)
{
  struct s_nodo *nodo;
  
  nodo = primero;
  printf("Codigo   Titulo\n");
  printf("----------------------------------------\n");
  while (nodo != NULL)
  {
     printf("%i     %s\n", nodo->peli.codigo, nodo->peli.titulo);
     nodo = nodo->siguiente;
  }
}
