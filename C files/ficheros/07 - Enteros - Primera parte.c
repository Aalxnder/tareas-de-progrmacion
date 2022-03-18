int main()
{
	int i, suma, n[5];
	float media;
	FILE *fich;

	// Parte 1: introducir datos por teclado
	printf("Introduzca cinco n�meros enteros");
	suma = 0;
	for (i=0; i<5; i++) {
		scanf("%i", &n[i]);
		suma = suma + n[i];
	}
	media = (float)suma / 5;
	
	// Parte 2: abrir el archivo en modo "w"
	printf("Creando el archivo mi-fichero.txt...\n");
	fich = fopen("mi-fichero.txt", "wt");
	if (fich == NULL) {
		printf("Error al abrir el archivo para escritura");
		exit(1);
	}

	// Parte 3: escribir los datos en el archivo
	fprintf(fich, "Los n�meros son:\n");
	for (i=0; i<5; i++) {
		fprintf(fich, "%i\n", n[i]);
	}
	fprintf(fich, "La suma es: %i\n", suma);
	fprintf(fich, "La media es: %2.2f\n", media);
 
	printf("Archivo escrito con �xito\n");
	fclose(fich);

	return 0;
}
