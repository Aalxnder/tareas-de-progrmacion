/*Leer un número decimal en forma de cadena y convertirlo a su equivalente en notación binaria

Para resolver este problema se usa el siguiente "truco": para convertir un número (por ejemplo, el 1) a carácter (es decir, '1'), basta con sumar 48 al número, ya que 48 es el código ASCII del carácter '0', 49 el del carácter '1', 50 el del '2', y así sucesivamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int resto, i, j;
    char n_bin[100], result[100];
    int n_dec;
    
    printf("Introduzca numero decimal: ");
    scanf("%i", &n_dec);
    
    i = 0;
    while (n_dec > 0)            // Bucle principal
    {
        resto = n_dec % 2;       // Vamos obteniendo los restos de las divisiones 
        n_dec = n_dec / 2;
        result[i] = resto + 48;  //... y los almacenamos en la cadena "result"
        i++;
    }
    result[i] = '\0';            // Añadimos el nulo al final de la cadena

    // "result" contendrá el número binario AL REVÉS. Vamos a darle la vuelta
    j = 0;
    for (i=strlen(result)-1; i>=0; i--)
    {
       n_bin[j] = result[i];    // En "n_bin" obtendremos el binario en el orden correcto
       j++;
    }
    n_bin[j] = '\0';            // Añadimos el nulo al final de la cadena
    
    printf("El número binario equivalente es: %s\n\n", n_bin);
    
    system("PAUSE");
    return 0;
}

