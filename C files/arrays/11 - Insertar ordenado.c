
int main(void)
{
	int i, n, posicion_insercion, v[10];
	srand(time(NULL));	/* Inicialización de los números aleatorios */

	/* Para generar el vector ordenado, asignaremos un número de 0 a 9 a la primera posición,
	de 10 a 19 a la segunda, de 20 a 29 a la tercera, y así sucesivamente. Hay otras
	formas de generar vectores aleatorios ordenados */

	for (i = 0; i <  10; i++)
	{
		v[i] = rand()%10 + (i*10);
	}
	imprimir_vector(v);

	/* Pedimos al usuario que teclee un número entre 0 y v[9] */
	do {
		printf("Introduzca un número entre 0 y %i: ", v[9]);
		scanf("%i", &n);
	}
	while ((n < 0) || (n > v[9]));

	/* Buscamos la posición en la que hay que insertar el número n */
	i = 0;
	while (v[i] < n)
		i++;

	posicion_insercion = i;

	/* Desplazamos los números del vector desde la posición de inserción hasta el final */
	for (i = 9; i > posicion_insercion; i--)
		v[i] = v[i-1];

	/* Insertamos el número en la posición de inserción */
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
