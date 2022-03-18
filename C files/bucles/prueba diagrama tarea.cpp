#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color E0");
	float cal;
	float suma=0,promedio;
	int contador =0,opc;
	do
	{	

		printf("ingresa una calificacion\n");
		scanf("%f",&cal);
		suma += cal;
		contador++;
		printf("quiere agregar otra calificacion?\n[1] si\n[2] no\n");
		scanf("%d",&opc);
		
	}while(opc != 2);
	
	promedio=suma/contador;
	printf("El promedio es: %.1f\n",promedio);
	system("pause");
	return 0;
}

