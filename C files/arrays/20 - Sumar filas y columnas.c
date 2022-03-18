int main(void)
{
	int m[3][3];
	int fila, columna, suma;

	// Inicializamos la matriz
	for (fila = 0; fila < 3; fila++)
	{
		for (columna = 0; columna < 3; columna++)
		{
			printf("Introduce el valor de la columna %i, fila %i: ", columna, fila);
			scanf("%i", &m[columna][fila]);
		}
	}

	// Mostramos la matriz en la pantalla
	for (fila = 0; fila < 3; fila++)
	{
		for (columna = 0; columna < 3; columna++)
		{
			printf("%3i ", m[columna][fila]);
		}
		printf("\n");
	}

	// Mostramos la suma de las filas
	for (fila = 0; fila < 3; fila++)
	{
		suma = 0;
		for (columna = 0; columna < 3; columna++)
		{
			suma = suma + m[columna][fila];
		}
		printf("La suma de la fila %i es: %i\n", fila, suma);
	}
	
	// Mostramos la suma de las columnas
	for (columna = 0; columna < 3; columna++)
	{
		suma = 0;
		for (fila = 0; fila < 3; fila++)
		{
			suma = suma + m[columna][fila];
		}
		printf("La suma de la columna %i es: %i\n", columna, suma);
	}

	return 0;
}
