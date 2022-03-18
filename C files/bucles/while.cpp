//programa realiza un calculo de calorias
/*#include <stdio.h>
int main()
{
	int num_de_elementos, calorias_por_alimento,i;
	printf("cuantos alimentos ha ingerido hoy. \n");
	scanf("%d",&num_de_elementos);
	int calorias_total = 0;
	int cuenta = 1;
	printf("introduce el numero de calorias por cada alimento:\n");
	printf("%d %s",num_de_elementos, "alimentos tomados: \n");
	for (i=0;i<num_de_elementos;i++)
	{
		scanf("%d",&calorias_por_alimento);
		calorias_total += calorias_por_alimento;
	}
	printf("las calorias totales consumidas hoy son = ");
	printf("%d \n",calorias_total);
	return 0;
}*/
#include <stdio.h>
#include <math.h>
int main()
{
	float x,f;
	int x_positivo;
	x_positivo = 0; //inicializando a falso
	while (!x_positivo)
	{
		printf("\n Valor de x: ");
		scanf("%f",&x);
		x_positivo = (x > 0.0);//si la condicion se cumple cambia a verdadero es decir, cambia a 1
	}
	f = x*log(x);
	printf("f(%.1f) = %.3e",x,f);
	return 0;
}
