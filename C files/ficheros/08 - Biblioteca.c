#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LONG_LIN 500
#define MAX_LIBROS 1600

struct s_libro {
	char autor[60];
	char titulo[100];
	char editorial[50];
	char cdu[20];
};


int main(void)
{
	struct s_libro biblioteca[MAX_LIBROS];
	char linea[LONG_LIN];
	int i, j, k, pos, campo;
	FILE *f;

	// ********** ABRIMOS EL ARCHIVO **************
	f = fopen("libros.txt", "rt");
	if (f == NULL) { printf("\n\n** Error al abrir el archivo libros.txt **\n\n"); exit(1); }

	// ******** PROCESAMOS EL ARCHIVO, METIENDO LOS DATOS EN EL VECTOR ********
	pos = 0;
	while (!feof(f))
	{
		// Leemos una línea del archivo de texto
		printf("Procesando el archivo... %i%%", pos * 100 / MAX_LIBROS);
		printf("%c", 13);
		for (k = 0; k < 1000000; k++);
		fgets(linea, LONG_LIN-1, f);
		if (strlen(linea) >= LONG_LIN-1)
			printf("** AVISO: ¡la línea %i es demasiado larga! **\n", pos + 1);

		// Procesamos la línea del archivo de texto
		j = 0;
		campo = 0;
		for (i = 0; i <= strlen(linea); i++)
		{
			if ((linea[i] != '*') && (linea[i] != '\0'))
			{
				switch(campo)
				{
					case 0: // Apellidos del autor
						biblioteca[pos].autor[j] = linea[i]; break;
					case 1: // Nombre del autor
						biblioteca[pos].autor[j] = linea[i]; break;
					case 2: // Titulo del libro
						biblioteca[pos].titulo[j] = linea[i]; break;
					case 3: // Editorial
						biblioteca[pos].editorial[j] = linea[i]; break;
					case 4: // Código CDU
						biblioteca[pos].cdu[j] = linea[i]; break;
				}
				j++;
			}
			else	// Se ha leido '*' o '\0', es decir, un campo acaba de terminar
			{
				switch(campo)
				{
					case 0: // Apellidos del autor
						biblioteca[pos].autor[j] = ' '; j++; break;
					case 1: // Nombre del autor
						biblioteca[pos].autor[j] = '\0'; j = 0; break;
					case 2: // Titulo del libro
						biblioteca[pos].titulo[j] = '\0'; j = 0; break;
					case 3: // Editorial
						biblioteca[pos].editorial[j] = '\0'; j = 0; break;
					case 4: // Código CDU
						biblioteca[pos].cdu[j] = '\0'; j = 0; break;
				}
				campo++;	// Pasamos al siguiente campo
			}
		}
		pos++;
	}

	fclose(f);
	printf("Fin de la lectura del archivo\nPulse Intro para mostrar los datos.");
	getchar();

	// ************ MOSTRAMOS EL CONTENIDO DEL VECTOR EN LA PANTALLA ************
	printf("\n\n");
	printf("AUTOR                      TITULO                        EDITORIAL          CDU\n");
     printf("--------------------------------------------------------------------------------\n");
	for (i = 0; i < pos; i++)
		printf("%-30s %-30s %-15s %-10s\n", 
		biblioteca[i].autor, biblioteca[i].titulo, biblioteca[i].editorial, biblioteca[i].cdu);

	return 0;
}
