int main(void)
{
	FILE *f;
	char arch[50], palabra[50], linea[1000], *aux;
	int cont = 0, cont_lin = 0;

	printf("\nEste programa abre un archivo de texto y muestra por la pantalla\n");
	printf("s�lo las l�neas que contengan una palabra introducida por el usuario\n\n");

	// Leemos los nombres de los archivos
	printf("Introduzca el nombre del archivo: ");
	gets(arch);
	printf("Introduzca la palabra buscada: ");
	gets(palabra);

	// Abrimos el archivo de origen (modo lectura)
	f = fopen(arch, "rt");
	if (f == NULL)
	{
		printf("Error al abrir el archivo %s\n", arch);
		exit(1);
	}
	
	// Recorremos el archivo l�nea por l�nea
	printf("Procesando el archivo...\n\n");
	while (!feof(f))
	{
		fgets(linea, 999, f);		// Leemos una l�nea
		cont_lin++;
		aux = strstr(linea, palabra);	// Comprobamos si "palabra" est� contenida en "l�nea"
		if (aux != NULL) {			// �S� que lo est�!
			// Mostramos la l�nea en la pantalla
			printf("L�nea %i ---> %s", cont_lin, linea);	
			cont++;
		}
	}
	fclose(f);

	printf("\n\nFin del archivo\nLa palabra '%s' se ha encontrado %i veces.\n\n", palabra, cont);

	return 0;
}
