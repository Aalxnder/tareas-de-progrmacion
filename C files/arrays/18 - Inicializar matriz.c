int main(void)

{
	int m[10][10];
	int fila, columna;

	// Inicializamos la matriz
	for (fila = 0; fila < 10; fila++)
	{
		for (columna = 0; columna < 10; columna++)
		{
			m[columna][fila] = -1;
		}
	}

	// Mostramos la matriz en la pantalla
	for (fila = 0; fila < 10; fila++)
	{
		for (columna = 0; columna < 10; columna++)
		{
			printf("%i ", m[columna][fila]);
		}
		printf("\n");
	}

	return 0;
}
