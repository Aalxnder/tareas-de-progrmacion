int main()
{
	char cad[100];
	int i, cont;

	/* Pedimos al usuario que teclee su cadena */
	printf("Introduzca una cadena de caracteres: ");
	gets(cad);

	/* Recorremos la cadena buscando los espacios */
	cont = 0;
	for (i = 0; i < strlen(cad); i++)
	{
		if (cad[i] != ' ')	/* No es un espacio: mostramos el car�cter en la pantalla */
			printf("%c", cad[i]);
		else    /* ES UN ESPACIO: hacemos un salto de l�nea e incrementamos el contador */
		{	
			printf("\n");
			cont++;
		}
	}

	/* Como la �ltima palabra no est� seguida de un espacio, la contamos ahora */
	printf("\n");
	cont++; 

	printf("Total: %i palabras\n", cont);

	return 0;
}
