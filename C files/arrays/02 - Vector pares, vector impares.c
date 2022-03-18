int main(void)
{
    int pares[100], impares[100];	// Los dos vectores
    int i;

    // Inicializamos los vectores
    for (i = 0; i < 100; i++)
    {
	pares[i] = i * 2;
	impares[i] = (i * 2) + 1;
    }
    
    // Mostramos el contenido de los vectores en la pantalla
    // (para ver si todo ha ido bien)
    printf("\n\nPares: ");
    for (i = 0; i < 100; i++)
	printf("%i ", pares[i]);
    printf("\n\nImpares: ");
    for (i = 0; i < 100; i++)
	printf("%i ", impares[i]);
        
    system("PAUSE");
    return 0;
}
