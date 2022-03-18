int main(void)
{
	int m[3][3];
	int fila, columna, aux;

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

	// Permutamos la fila 3 y la fila 1 (es decir, los índices 2 y 0)
	for (columna = 0; columna < 3; columna++)
	{
		aux = m[columna][0];
		m[columna][0] = m[columna][2];
		m[columna][2] = aux;
	}

	// Volvemos a mostrar la matriz para ver cómo ha quedado
	for (fila = 0; fila < 3; fila++)
	{
		for (columna = 0; columna < 3; columna++)
		{
			printf("%3i ", m[columna][fila]);
		}
		printf("\n");
	}

	return 0;
}
