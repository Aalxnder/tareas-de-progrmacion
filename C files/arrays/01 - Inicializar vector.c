int main(void)
{
    int v[100], i;

    // Inicializamos el vector
    for(i=0; i<100; i++)
	v[i] = -1;

    // Lo mostramos por la pantalla para comprobar que se ha inicializado bien
    for (i=0; i<100; i++)
	printf("v[%i] = %i\n", i, v[i]);
        
    system("PAUSE");
    return 0;
}
