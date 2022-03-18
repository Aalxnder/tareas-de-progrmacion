#include <stdio.h>
//test de operadores ++ y --
int main()
{
	int a,b;
	int suma,mult,rest,div,resto;
	
	printf("programa que realizara las operaciones basicas de 2 numeros introducidos por teclado\n\n");
	printf("ingresa en valor entero el primer numero que deseas calcular\n");
	scanf("%d",&a);
	printf("ingresa en valor entero el segundo numero que deseas calcular\n");
	scanf("%d",&b);
	
	suma = a + b;
	rest = a - b;
	mult = a * b;
	div = a / b;
	resto = a % b;
	
	printf("\nEste es el resultado de las operaciones:\n");
	printf(" la suma es:%d\n ",suma);
	printf("la resta es:%d\n ",rest);
	printf("la multiplicacion es:%d\n ",mult);
	printf("la division es:%d\n ",div);
	printf("el resto es:%d\n ",resto);

	return 0;
}
