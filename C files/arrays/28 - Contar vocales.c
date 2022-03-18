{
    char cad[50];
    int contA, contE, contI, contO, contU;	// Necesitamos un contador para cada tipo de vocal
    int i;

    printf(“Introduzca una cadena: “);
    gets(cad);

    // Inicializamos todos los contadores a cero
    contA = 0;
    contE = 0;
    contI = 0;
    contO = 0;
    contU = 0;

    // Recorremos la cadena buscando las distintas vocales
    for (i = 0; i < strlen(cad); i++)
    {
       // Miramos el carácter actual para ver si es una vocal
       if ((cad[i] == 'a') || (cad[i] == 'A'))	// Es una A
		contA = contA + 1;

       if ((cad[i] == 'e') || (cad[i] == 'E'))	// Es una E
		contE = contE + 1;

       if ((cad[i] == 'i') || (cad[i] == 'I'))	// Es una I
		contI = contI + 1;

       if ((cad[i] == 'o') || (cad[i] == 'O'))	// Es una O
		contO = contO + 1;

       if ((cad[i] == 'u') || (cad[i] == 'U'))	// Es una U
		contU = contU + 1;
    }

    // Mostramos el contenido final de los contadores
    printf(“A = %i, E = %i, I = %i, O = %i, U = %i\n”, contA, contE, contI, contO, contU);
 
    return 0;
}

