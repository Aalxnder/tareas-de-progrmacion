int main(void)
{
    float v[10];
    float suma_neg, suma_pos;
    int i;

    printf("Introduce 10 números:");
    for (i=0; i<=9; i++)
       scanf("%f", &v[i]);

    suma_neg = 0 ;
    suma_pos = 0 ;
    for (i=0 ; i<=9 ; i++)
    {
       if (v[i] < 0)
		suma_neg = suma_neg + v[i];
	if (v[i] > 0)
		suma_pos = suma_pos + v[i];
    }

    printf("La suma de los negativos es: %.2f\n", suma_neg);

    printf("La suma de los positivos es: %.2f\n", suma_pos);

    system("PAUSE");
    return 0;
}
