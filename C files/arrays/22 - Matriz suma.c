// Prototipo de la función para imprimir matrices en la pantalla
void imprimir_matriz(int m[10][5])

int main(void)
{
	int m1[10][5], m2[10][5], msuma[10][5];
	int fila, columna;

	srand(time(NULL));	// Inicialización del generador de números aleatorios

	// Inicializamos las matrices m1 y m2
	for (fila = 0; fila < 5; fila++)
	{
		for (columna = 0; columna < 10; columna++)
		{
			m1[columna][fila] = rand()%256;
			m2[columna][fila] = rand()%256;
		}
	}

	// Calculamos la matriz suma (msuma)
	for (fila = 0; fila < 5; fila++)
	{
		for (columna = 0; columna < 10; columna++)
		{
			msuma[columna][fila] = m1[columna][fila] + m2[columna][fila];
		}
	}

	// Mostramos las tres matrices en la pantalla
	printf(“MATRIZ 1:\n---------\n”);
	imprimir_matriz(m1);

	printf(“MATRIZ 2:\n---------\n”);
	imprimir_matriz(m2);

	printf(“MATRIZ SUMA:\n---------\n”);
	imprimir_matriz(msuma);

	return 0;
}


void imprimir_matriz(int m[10][5])
{
	int fila, columna;

	for (fila = 0; fila < 5; fila++)
	{
		for (columna = 0; columna < 10; columna++)
		{
			printf("%3i ", m[columna][fila]);
		}
		printf("\n");
	}
}
