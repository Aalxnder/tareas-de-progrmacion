/*#include <stdio.h>
int main()
{
	float nota;
	char nombre [30];
	printf("ingresa tu nombre:\n");
	gets(nombre);
	printf("ingresa la nota que obtuviste en formato de 0 a 100: \n");
	scanf("%f",&nota);
	printf("el alumno %s ",nombre);
	printf("obtuvo la calificacion de %.1f \n",nota);
	if (nota >= 60)
		printf("\nfelicidades has aprobado\n");
		
	else if (nota < 60)
		printf("mamaste\n");
	return 0;
}*/

//calcular la tarifa de la luz segun el gasto de corriente electrica
//para un gasto menor de 1000 kwh la tarifa es de 1.2
//para un gasto entre 1000 y 1850 la tarifa es de 1.0
//para un gasto mayor de 1850 la tarifa es de 0.9
/*#include <stdio.h>
#define Tarifa 1.2
#define Tarifa1 1.0
#define Tarifa2 0.9
int main()
{
	float gasto, tasa, costo;
	printf("ingrese el gasto de corriente\n");
	scanf("%f",&gasto);
	if (gasto < 1000)
		tasa = Tarifa;
		costo = gasto * tasa;
	if (gasto >= 1000 && gasto <= 1850)
		tasa = Tarifa1;
		costo = gasto * Tarifa1;
	if (gasto > 1850)
		tasa = Tarifa2;
		costo = gasto * tasa;
	printf("la tarifa que le corresponde a %.1f kwh es de %f\n",gasto, tasa);
	printf("el dinero a pagar por %.1f kwh es de %.1f pesos", gasto, costo);
	return 0;
}*/
//realizar selecciones multiples con la sentencia if else
#include <stdio.h>
int main()
{
	float numero;
	printf("introduce un numero positivo o negativo:\n");
	scanf("%f",&numero);
	//comparar numero con 0
	if (numero > 0)
	{
		printf("%.2f %s",numero,"es mayor que cero\n");
		puts("pruebe de nuevo introduciendo un numero negativo.");
	}
	else if (numero < 0)
	{
		printf("%.2f %s",numero,"es menor que cero\n");
		puts("pruebe de nuevo introduciendo un numero positivo.");
	}
	else 
	{
		printf("%.2f %s",numero,"es igual que cero\n");
		puts("¿porque no prueba introduciendo otro numero?");
	}
	return 0;
}
