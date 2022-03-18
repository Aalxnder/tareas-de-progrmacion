//votaciones y contador de votos
/*#include <stdio.h>
int main()
{
	int i,alumnos,votos, mayor;
	int cand1 = 0;
	int cand2 = 0;
	int cand3 = 0;
	int nulos = 0;
	printf("ingrese la cantidad de alumnos que votaran:\n");
	scanf("%d",&alumnos);
	for (i=0; i<alumnos;i++)
	{
		printf("ingresa tu voto;");
		scanf("%d",&votos);
		switch(votos)
		{
			case 1:
				printf("tu voto ha sido para el candidato 1\n");
				cand1++;
				printf("los votos actuales que tiene este candidato son de: %d\n\n",cand1);
				break;
			case 2:
				printf("tu voto ha sido para el candidato 2\n");
				cand2++;
				printf("los votos actuales que tiene este candidato son de: %d\n\n ",cand2);
				break;
			case 3:
				printf("tu voto ha sido para el candidato 3\n");
				cand3++;
				printf("los votos actuales que tiene este candidato son de: %d\n\n",cand3);
				break;
			default:
				printf("tu voto ha sido un voto nulo\n");
				nulos++;
				printf("los votos nulos son de: %d\n\n",nulos);
				break;
		}
	if (cand1 > cand2)
	{
		if (cand1 > cand3)
		{
			mayor = cand1;
		}
		else mayor = cand3;
		}
	else  	
	{
		if (cand2 > cand3)
		{
			mayor = cand2;
		}
		else mayor = cand3;
	}
	}
	printf("\n");
	
	printf("\n");
	if (mayor == cand1)
	{
		printf("\nel candidato que obtuvo mayor cantidad de votos ha sido el candidato 1 con %d votos\n",cand1);
	}
	else if(mayor == cand2)
	{
		printf("el  candidato que obtuvo mayor cantidad de votos ha sido el candidato 2 con %d votos\n", cand2);
	}
	else if(mayor == cand3)
	{
		printf("el candidato que obtuvo mayor cantidad de votos ha sido el candidado 3 con %d votos\n",cand3);
	}
}*/
#include <stdio.h>
#include <math.h>
#define M 15
#define f(x) exp(2*x)-x
int main()
{
	int i;
	double x;
	for (i=0;i<M;i++)
	{
		printf("ingrese el valor de x: \n");
		scanf("%lf",&x);
		printf("f(%.1lf) = %.4g\n",x,f(x));
	}
	return 0;
}
