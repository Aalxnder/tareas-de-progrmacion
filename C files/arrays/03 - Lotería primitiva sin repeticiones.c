int main(void)
{
	int n, i, j, repetido, v[6];

	srand(time(NULL));	// Inicialización del generador de números aleatorios
	for (i = 0; i < 6; i++)
	{
		// Sacamos números repetidamente hasta dar con uno que no haya salido todavía
		do
		{
			n = rand() % 49 + 1;	// Sacamos un número al azar entre 1 y 49
			repetido = 0;
			for (j = 0; j < i; j++)	// Comprobamos si el número ha salido ya
			{
				if (v[j] == n)	// El número ya ha salido !!
					repetido = 1;
			}
		} while (repetido == 1);	// Si el número ya ha salido, repetimos para sacar otro
		
		v[i] = n;		// Guardamos el número elegido en el vector v
	}

	// Mostramos la combinación
	printf("Combinación para la primitiva\n");
	for (i = 0; i < 6; i++)
		printf("%i\n", v[i]);

	return 0;
}
