/*en una empresa de computadoras, los salarios de los empleados aumentaran segun su contrato actual
0 a 9000 dolares +20%, de 9001 a 15000 +10%, 15001 a 20000 +5%, mas de 20000 +0%
escribir un programa que muestre el salario actual y visualiza su aumento*/
#include <stdio.h>
#define aumento .20
#define aumento1 .10
#define aumento2 .5
int main()
{
	int cant,i;
	float sueldos,sueldo1=0,sueldo2=0,sueldo3=0;
	float sueldoss=0,sueldosss=0,sueldossss=0;
	
	printf("ingresa la cantidad de sueldos que deseas visualizar\n");
	scanf("%d",&cant);
	for(i=0;i<cant;i++)
	{
		printf("ingresa el sueldo numero: %d ",i);
		scanf("%f",&sueldos);
		
		while(sueldos<=0)
		{
			printf("ingresa el sueldo numero %d",i);
			scanf("%f",&sueldos);
		}
		sueldo1 = sueldos*aumento;
		sueldoss = sueldos + sueldo1;
		
		sueldo2 = sueldos*aumento1;
		sueldosss = sueldos + sueldo2;
		
		sueldo3 = sueldos*aumento2;
		sueldossss = sueldos + sueldo3;
		
		
		if (sueldos<=9000)
		{
			printf("el sueldo %d mas el aumento establecido es de: %.1f\n",i,sueldoss);
		}
		else if(sueldos >9000 and sueldos <=15000)
		{
			printf("el sueldo %d mas el aumento establecido es de: %.1f\n",i,sueldosss);
		}
		else if(sueldos>15000 and sueldos <=20000)
		{
			printf("el sueldo %d mas el aumento establecido es de: %f.1\n",i,sueldossss);
		}
		else if(sueldos >20000)
		{
			printf("el sueldo %d mas el aumento establecido es de: %.1f\n",i,sueldos);
		}
	}
	return 0;
}
