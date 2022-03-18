int main(void)
{
	int i;
	FILE *fich;
	char txt[500];

	printf("Este programa lee un texto por teclado y lo env�a a un archivo de texto\n");
	printf("sustituyendo todos los espacios por saltos de l�nea.\n\n");

	printf("Introduzca un texto: ");
	gets(txt);

	// Abrir el archivo para escritura
	fich = fopen("quitar_espacios.txt", "wt");
	if (fich == NULL) {
		printf("Error al abrir el archivo");
		exit(1);
	}
	
	// Recorremos la cadena car�cter por car�cter
	for (i=0; i<strlen(txt); i++) 
	{
		if (txt[i] == ' ')		// Si el car�cter es un espacio...
			fputc('\n', fich);	// ... escribimos un salto de l�nea
		else				// Si es cualquier otro car�cter...
			fputc(txt[i], fich);	// ... escribimos ese car�cter
	}
	fclose(fich);

	printf("Se ha generado el archivo quitar_espacios.txt\n\n");

	return 0;
}
