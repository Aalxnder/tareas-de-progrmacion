int main(void)
{
    int v[10], suma, i;
    float media;

    // Introducir los datos
    printf("Introduce 10 números enteros: \n");
    for (i = 0; i < 10; i++)
	scanf("%i", &v[i]);

    // Calcular la media
    suma = 0;
    for (i = 0; i < 10; i++)
	suma = suma + v[i];

    media = (float)suma / 10;
    printf("Media = %.2f\n", media);

    // Mostrar números por encima de la media
    printf("Los números por encima de la media son:\n");
    for (i = 0; i < 10; i++)
    {
	if (v[i] > media)
		printf("%i\n", v[i]);
    }

    // Mostrar números por debajo de la media
    printf("Los números por debajo de la media son:\n");
    for (i = 0; i < 10; i++)
    {
	if (v[i] < media)
		printf("%i\n", v[i]);
    }

    return 0;
}
