//calcular la edad de un individuo
/*#include <stdio.h>
int main()
{
	int dia, mes,ao,dia1,mes1,ao1,edadd,edadm,edada;
	printf("introduce tu dia de nacimiento:\n");
	scanf("%d",&dia);
	printf("introduce tu mes de nacimiento en numero:\n");
	scanf("%d",&mes);
	printf("introduce tu año de nacimiento:\n");
	scanf("%d",&ao);
	
	printf("introduce el dia actual:\n");
	scanf("%d",&dia1);
	printf("introduce el mes actual en numero:\n");
	scanf("%d",&mes1);
	printf("introduce el año actual:\n");
	scanf("%d",&ao1);
	
	edadd = dia - dia1;
	edadm = mes1 - mes;
	edada = ao1 - ao;
	if (edada >= 1)
	{
		printf("su edad es: %d dias con %d meses\n y %d años\n",edadd,edadm,edada);
	}
	else if(edada < 1)
	{
		printf("su edad es: %d dias, con %d meses\n",edadd,edadm);
	}
	return 0;
}*/
#include <stdio.h>
#define salario 100
#define horas_extra 1.5
#define impuestos 1
#define impuestos1 0.10
int main()
{
	float horas,pagaB,pagaN,tasa,extra;
	printf("ingresa las horas que has trabajado en la semana: ");
	scanf("%f",&horas);
	pagaB = horas*salario;
	if (horas <= 38)
	{
		if (pagaB >= 800)
		{
			printf("\n\ntu paga bruta por tus horas trabajadas es: %.1f\n",pagaB);
			tasa = pagaB * impuestos1;
			pagaN = pagaB - tasa;
			printf("tu pago menos impuestos es de: %.1f\n",pagaN);
			
		}
		
		else if (pagaB < 800)
		{
			pagaN = pagaB * impuestos;
			printf("\n\ntu paga bruta por tus horas trabajadas es es: %.1f\n",pagaB);
			printf("tu pago menos impuestos es: %.1f\n",pagaN);
		}
	}
	
	else if (horas > 38 )
	{
		if (pagaB >= 800)
		{
			extra = pagaB * horas_extra;
			printf("\n\ntu paga bruta por tus horas trabajadas es es: %.1f\n",pagaB);
			printf("tu paga bruta contando tus horas extra es de: %.1f\n",extra);
			tasa = extra * impuestos1;
			pagaN = extra - tasa;
			printf("tu pago menos impuestos es de %.1f\n",pagaN);
		}
		else if(pagaB < 800) 
		{
			extra = pagaB * horas_extra;
			printf("\n\ntu paga bruta por horas trabajando es de: %.1f\n",pagaB);
			printf("tu paga bruta contando tus horas extra es de: %.1f\n",extra);
			pagaN = extra * impuestos;
			printf("tu paga menos impuestos del 10% es de: %.1f",pagaN);
		}
	}
	return 0;
}
