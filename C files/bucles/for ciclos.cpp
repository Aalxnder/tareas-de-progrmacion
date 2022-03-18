/*#include<stdio.h>
#include <math.h>
#define gravedad 10
#define veli 0
int main()
{
	int contador = 0;
	int contador2 = 0;
	float altura,velocidad;
	float tiempo,operacion,operacion1;
	int objetos,i=0;
	printf("calcular la velocidad y el tiempo que tarda un objeto en caida libre en tocar el suelo.\n\n");
	printf("la gravedad se considera como 10 m/s^2\n");
	printf("introduce la cantidad de objetos que deseas calcular:\n");
	scanf("%d",&objetos);
	while (objetos>contador)
	{
		printf("introduce la altura a la que se encuentra el objeto: %d\n",i+=1);
		scanf("%f",&altura);
		operacion = (gravedad/2);
		operacion1 = altura/operacion;
		tiempo = sqrt(operacion1);
		printf("el tiempo que tardo en caer el objeto %d es de: %.1f segundos\n",i,tiempo);
		velocidad = (2*gravedad);
		velocidad *= altura;
		velocidad = sqrt(velocidad);
		printf("la velocidad final del objeto %d al tocar el piso es de: %.1f metros sobre segundo\n",i,velocidad);
		contador += 1;
	}
	return 0;
}*/
#include <stdio.h>
#define pulgada .39
int main()
{
	printf("este programa hace la conversion entre centimetros a pulgadas, libras a kilos ");
	int conversion,cant,i=0,centinela=-1;
	float unidad,pulgadas;
	printf("ingresa el numero segun lo que desees convertir\n1)centimetros a pulgadas:\n2)libras a kilos\n");
	scanf("%d",&conversion);
	switch(conversion)
	{
		case 1:
		{
			printf("ingresa la cantidad de longitudes que deseas convertir.\n\n");
			scanf("%d",&cant);
			for (i=0;i<cant;i++)
			{
				printf("ingrese la longitud numero %d: \n",i+=1);
				scanf("%d",&unidad);
				while(unidad >= 0)
				{
				pulgadas = unidad * pulgada;
				printf("la equivalencia de %.1f centimetros es de %.1f pulgadas",unidad,pulgadas);
				}	
			}
			break;
		}
	}
	return 0;
}
