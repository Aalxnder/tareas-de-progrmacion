int main(void)
{
	int m[5][5];
	int fila, columna;
	int suma, cont, columna_inicial;
	float media;

	// Inicializamos la matriz
	for (fila = 0; fila < 5; fila++)
	{
		for (columna = 0; columna < 5; columna++)
		{
			printf("Introduce el valor de la columna %i, fila %i: ", columna, fila);
			scanf("%i", &m[columna][fila]);
		}
	}

	// Mostramos la matriz en la pantalla
	for (fila = 0; fila < 5; fila++)
	{
		for (columna = 0; columna < 5; columna++)
		{
			printf("%3i ", m[columna][fila]);
		}
		printf("\n");
	}

	// Imprimimos la diagonal principal
	printf("Diagonal principal: ");
	fila = 0;  columna = 0;
	while (fila < 5)
	{
		printf("%i ", m[columna][fila]);
		fila++;
		columna++;
	}
	printf("\n");

	// Calculamos la suma de la triangular superior
	suma = 0;
	cont = 0;
	for (fila = 0; fila < 5; fila++)
	{
		columna_inicial = fila;
		for (columna = columna_inicial; columna < 5; columna++)
		{
			suma = suma + m[columna][fila];
			cont++;
		}
	}
		
	// Calculamos la media de la triangular superior
	media = (float)suma / cont;
	printf("La media de la triangular superior es: %.2f ", media);
	printf("(suma = %i, cuenta = %i)\n", suma, cont);

	return 0;
}
