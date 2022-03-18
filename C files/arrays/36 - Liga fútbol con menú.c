#include <stdio.h>

#define MAX_EQUIPOS 20              // N� m�ximo de equipos que puede manejar el programa

// Estructura de datos de cada equipo
struct s_equipo
{
   char nombre[50];
   int jug, gan, per, emp;
   int puntos;
};

// Prototipos de funciones
void introducir_datos(struct s_equipo equipos[MAX_EQUIPOS]);
void mostrar_datos(struct s_equipo equipos[MAX_EQUIPOS]);


int main(void)
{
   int opc;
   char txt[50];
   struct s_equipo equipos[MAX_EQUIPOS];    // Array donde almacenaremos los datos

   do
   {
      // Mostrar el men� de opciones
      printf("\n\nPROGRAMA DE LA LIGA DE FUTBOL\n\n");
      printf("MENU DE OPCIONES\n\n");
      printf("1 - Introducir datos\n");
      printf("2 - Mostrar datos\n");
      printf("3 - Salir del programa\n");
   
      // Leer la opci�n seleccionada por el usuario
      do
      {
         printf("\nElija una opci�n (1-3): ");
         gets(txt);
         opc = atoi(txt);
      }
      while ((opc < 1) || (opc > 3));
   
      // Llamar a la funci�n correspondiente segn la opci�n elegida
      switch (opc)
      {
         case 1: introducir_datos(equipos); break;
         case 2: mostrar_datos(equipos); break;
      }
   }
   while (opc != 3);
   
   return 0;
}


// Leer por teclado los datos de los equipos y los inserta en el vector
void introducir_datos(struct s_equipo equipos[MAX_EQUIPOS])
{
   char aux[50];
   int i;
   
   for (i=0; i < MAX_EQUIPOS; i++)
   {
   	// Leemos los datos de un equipo por teclado y los almacenamos en la posici�n "i" del array
	printf("Introduzca los datos del equipo n� %i\n", i);
	printf("  Nombre: ");
   	gets(equipos[i].nombre);
   	printf("  Jugados: ");
   	gets(aux);
   	equipos[i].jug = atoi(aux);
   	printf("  Ganados: ");
   	gets(aux);
   	equipos[i].gan = atoi(aux);
   	printf("  Perdidos: ");
   	gets(aux);
   	equipos[i].per = atoi(aux);
   	equipos[i].emp = equipos[i].jug - equipos[i].gan - equipos[i].per;
   	equipos[i].puntos = equipos[i].gan * 3 + equipos[i].emp * 1;
   }
}


// Recorre los datos del vector de equipos y muestra su contenido en la pantalla
void mostrar_datos(struct s_equipo equipos[MAX_EQUIPOS])
{
   int i;   
   
   printf("\nEQUIPO              JUG GAN EMP PER PUNTOS\n\n");
   // Recorremos el array de datos y los mostramos en la pantalla
   for (i = 0; i < MAX_EQUIPOS; i++)
   {
      printf("%-20s %2i  %2i  %2i  %2i   %2i\n", equipos[i].nombre, equipos[i].jug, equipos[i].gan,
             equipos[i].emp, equipos[i].per, equipos[i].puntos);
   }
}
