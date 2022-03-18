int main(void)
{
	int n, i, j, repetido, v[6];

	srand(time(NULL));	// Inicializaci�n del generador de n�meros aleatorios
	for (i = 0; i < 6; i++)
	{
		// Sacamos n�meros repetidamente hasta dar con uno que no haya salido todav�a
		do
		{
			n = rand() % 49 + 1;	// Sacamos un n�mero al azar entre 1 y 49
			repetido = 0;
			for (j = 0; j < i; j++)	// Comprobamos si el n�mero ha salido ya
			{
				if (v[j] == n)	// El n�mero ya ha salido !!
					repetido = 1;
			}
		} while (repetido == 1);	// Si el n�mero ya ha salido, repetimos para sacar otro
		
		v[i] = n;		// Guardamos el n�mero elegido en el vector v
	}

	// Mostramos la combinaci�n
	printf("Combinaci�n para la primitiva\n");
	for (i = 0; i < 6; i++)
		printf("%i\n", v[i]);

	return 0;
}
