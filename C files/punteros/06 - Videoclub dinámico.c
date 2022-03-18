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


int main(void)
{
  struct s_pelicula *peliculas;
  FILE *f;
  int i, tam, encontrado;
  char busc[100];

  // Abrimos el fichero y miramos su longitud
  f = fopen("video.dat", "a+b");
  if (f == NULL) { printf("No se puede abrir el fichero video.dat\n"); exit(1); }
  fseek(f, 0, SEEK_END);	// Saltamos al final del fichero
  tam = ftell(f) / sizeof(struct s_pelicula);	// Calculamos el n�mero de registros
  fseek(f, 0, SEEK_SET);	// Nos volvemos a situal al comienzo del fichero

  // Reservamos memoria y leemeos el fichero completo
  peliculas = (struct s_pelicula*)malloc(tam*sizeof(struct s_pelicula));
  if (peliculas == NULL) { printf("Memoria insuficiente\n"); exit(1); }
  fread(peliculas, sizeof(struct s_pelicula), tam, f);
  printf("Archivo video.dat cargado con �xito (%i registros)\n\n", tam);
  fclose(f);

  // Preguntamos por el t�tulo que queremos buscar
  printf("Introduzca el t�tulo de la pel�cula que busca:\n");
  gets(busc);
    
  // Realizamos la b�squeda
  encontrado = 0;
  for (i = 0; i < tam && encontrado == 0; i++)
  {
    if (strcmp(peliculas[i].titulo, busc) == 0) {
      encontrado = 1;
      i--;
    }
  }

  // Mostramos el resultado
  if (encontrado == 1) {
    printf("Ficha de la pel�cula:");
    printf("C�digo:   %i\n", peliculas[i].codigo);
    printf("T�tulo:   %s\n", peliculas[i].titulo);
    printf("Director: %s\n", peliculas[i].director);
    printf("Reparto:  %s\n", peliculas[i].reparto);
    printf("G�nero:   %s\n", peliculas[i].genero);
    printf("Pa�s:     %s\n", peliculas[i].nacionalidad);
    printf("Duraci�n: %i min.\n", peliculas[i].duracion);
  }
  else
    printf("Pel�cula no encontrada\n");

  free(peliculas);
  return 0;
}
