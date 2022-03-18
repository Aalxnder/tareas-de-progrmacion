
int main(void)
{
	int i, n, posicion_insercion, v[10];
	srand(time(NULL));	/* Inicializaci�n de los n�meros aleatorios */

	/* Para generar el vector ordenado, asignaremos un n�mero de 0 a 9 a la primera posici�n,
	de 10 a 19 a la segunda, de 20 a 29 a la tercera, y as� sucesivamente. Hay otras
	formas de generar vectores aleatorios ordenados */

	for (i = 0; i <  10; i++)
	{
		v[i] = rand()%10 + (i*10);
	}
	imprimir_vector(v);

	/* Pedimos al usuario que teclee un n�mero entre 0 y v[9] */
	do {
		printf("Introduzca un n�mero entre 0 y %i: ", v[9]);
		scanf("%i", &n);
	}
	while ((n < 0) || (n > v[9]));

	/* Buscamos la posici�n en la que hay que insertar el n�mero n */
	i = 0;
	while (v[i] < n)
		i++;

	posicion_insercion = i;

	/* Desplazamos los n�meros del vector desde la posici�n de inserci�n hasta el final */
	for (i = 9; i > posicion_insercion; i--)
		v[i] = v[i-1];

	/* Insertamos el n�mero en la posici�n de inserci�n */
	v[posicion_insercion] = n;

	/* Mostramos el vector resultante */
	imprimir_vector(v);

	return 0;
}

void imprimir_vector(int v[10])
{
	int i;

	for (i=0; i<10; i++)
		printf("%i ", v[i]);
}
