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
#define libra .45
int main()
{
	printf("este programa hace la conversion entre centimetros a pulgadas, libras a kilos ");
	int contador = 0;
	int conversion,i=0,centinela=-1;
	
	printf("ingresa el numero segun lo que desees convertir\n1)centimetros a pulgadas:\n2)libras a kilos\n");
	scanf("%d",&conversion);
	switch(conversion)
	{
		case 1:
		{
			puts("usted eligio convertir de centimetros a pulgadas\n ");
			puts("introduce un numero negativo para finalizar\n");
			float unidad,pulgadas;
			
			printf("ingrese los centimetros que desea tranformar a pulgadas\n");
			scanf("%f",&unidad);
			pulgadas = unidad * pulgada;
			printf("la equivalencia de %.1f en pulgadas es de  %.1f pulgadas \n",unidad,pulgadas);
			while (unidad >=0)
			{
				printf("ingrese los centimetros que desea tranformar a pulgadas\n");
				scanf("%f",&unidad);
			
				pulgadas = unidad * pulgada;
				printf("la equivalencia de %.1f en pulgadas es de  %.1f pulgadas \n",unidad,pulgadas);
		 
			if (unidad<=0)
			{
				return 0;	
			}
			}
		}
		case 2:
		{
			puts("usted eligio la opcion de convertir libras a kilogramos\n");
			puts("escribe un numero negativo para finalizar.\n");
			float libras,unil;
			printf("ingrese las libras que desea convertir a kilogramos\n");
			scanf("%f",&unil);
			libras = (unil * libra);
			printf("la equivalencia de %.1f libras es de %.1f kilogramos\n",unil,libras);
			while(unil>=0)
			{
				printf("ingrese las libras que desea convertir a kilogramos\n");
				scanf("%f",&unil);
				
				libras = (unil * libra);
				printf("la equivalencia de %.1f libras es de %.1f kilogramos\n",unil,libras);
		
			if (unil <= 0)
			{
				return 0;
			}
			}
		}
		default:
			{
				printf("opcion no disponible");
			}
	}
	return 0;
}
