int main(void)
{
	int i, suma, n[5];
	float media;
	FILE *fich;
	char txt[50];

	// Parte 1: abrir el archivo para lectura
	printf("Abriendo el archivo mi-fichero.txt...");
	fich = fopen("mi-fichero.txt", "rt");
    	if (fich == NULL) {
		printf("Error al abrir el archivo para lectura");
		exit(1);
	}
	
	// Parte 2: leer los datos del archivo
	fgets(txt, 49, fich);			// Lee el texto "Los números son" (incluido "\n")
	for (i=0; i<5; i++) {
		fscanf(fich, "%i\n", &n[i]);	// Lee los números (cada uno seguido de "\n")
	}
	fgets(txt, 12, fich);			// Lee el texto "La suma es" (12 caracteres)
	fscanf(fich, "%i\n", &suma);	// Lee el valor de la suma (seguido de "\n")
	fgets(txt, 13, fich);			// Lee el texto "La media es" (13 caracteres)
	fscanf(fich, "%f", &media);		// Lee el valor de la media
	fclose(fich);


	// Parte 3: mostrar los datos en la pantalla
	printf("Los datos leídos del archivo son:\n");
	for (i=0; i<4; i++) {
		printf("%i – ", n[i]);
	}
	printf("%i - %f\n", suma, media);

	return 0;
}
