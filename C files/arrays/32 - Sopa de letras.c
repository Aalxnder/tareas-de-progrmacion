int main()
{
	char palabra[100];
	char sopa[8][8];
	int f, c, i, fila, columna;
	srand(time(NULL));

	/* Generamos la sopa de letras aleatoria */
	for (f = 0; f < 8; f++)
		for (c = 0; c < 8; c++)
			/* El código ASCII de la A es 65 y el de la Z es 91, así que
			   sacamos un aleatorio de 65 a 91 */
			sopa[c][f] = rand()%26 + 65;

	/* Pedimos al usuario que teclee su palabra */
	printf("Introduzca una palabra (máximo 8 letras)\n");
	gets(palabra);

	/* Comprobamos la longitud de la palabra. Si es mayor que 8, la truncamos */
	if (strlen(palabra) > 8)
		palabra[8] = '\0';

	/* Seleccionamos al azar la fila y la columna en la que ocultar la palabra */
	fila = rand()%8;
	columna = rand()%(8 - strlen(palabra));

	/* Insertamos la palabra dentro de la sopa */
	i = 0;
	for (c = columna; c < columna + strlen(palabra); c++)
	{
		sopa[c][fila] = palabra[i];
		i++;
	}

	/* Por último, mostramos la sopa de letras */
	for (f = 0; f < 8; f++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c ", sopa[c][f]);
		}
		printf("\n");
	}

	return 0;
}

