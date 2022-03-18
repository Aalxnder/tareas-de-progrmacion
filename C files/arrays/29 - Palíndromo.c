/* Comprueba si una cadena es un PALÍNDROMO
   sin utilizar funciones de librería */

int main()
{
    char c[50], cad[50];
    int i, j, iz, de, diferencias;
    
    puts("Teclee una cadena: ");
    gets(c);

    /* Eliminamos los espacios de la cadena c y la copiamos en cad */
    j = 0;
    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] != ' ') {
            cad[j] = c[i];
            j++;
        }
    }
    cad[j] = '\0';	/* Añadimos el nulo al final de la nueva cadena */

    /* Hacemos un bucle con dos contadores: uno empezará por un extremo de la cadena
       y el otro por el otro extremo, hasta que se crucen. Si todos los caracteres de ambos
       extremos coinciden, entonces es un palíndromo */
    iz = 0;  de = strlen(cad)-1;
    diferencias = 0;
    while ((iz < de) && (diferencias == 0))
    {
        if (cad[iz] != cad[de])	 /* Hemos encontrado una diferencia: NO ES UN PALINDROMO */
           diferencias++;

        iz++;
        de--;
    }

    if (diferencias == 0)
       	puts("La palabra es un palíndromo");
    else
       puts("La palabra NO es un palíndromo");

    return 0;
}
