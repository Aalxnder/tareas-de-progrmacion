/*#include <stdio.h>
#include <cstdlib>
int main()
{
	int numeros[1000];
	int cant =0,mayor, menor;
	printf("cuantos numeros se van a introducir?.\n");
	scanf("%d",&cant);
	for (int i=0;i<cant;i++)
	{
		printf("introduce el valor del numero #%d: ",i+1);
		scanf("%d",&numeros[i]);
	}
	mayor = numeros[0];
	menor = mayor;
	
	for(int i=1;i<cant;i++)
	{
		if (numeros[i]>mayor)
		{
			mayor = numeros[i];
		}
		else if (numeros[i]<menor)
		{
			menor = numeros[i];
		}
	}
	printf("el numero mayor es el numero: %d\n",mayor);
	printf("el numero menor es el numero: %d\n",menor);
	return 0;
}*/
//encontrar numeros perfectos
#include <stdio.h>
int main()
{
	int num,cant,i;
	int contador = 0;
	printf("encontrar numeros perfectos.\n");
	//saber q cantidad de numeros se van a verificar
	printf("introduce la cantidad de numeros que deseas probar:\n");
	scanf("%d",&cant);
	for (i=0;i<cant;i++)
	{
		//mensaje para que pida el numero
		printf("introduce el numero que deseas verificar: ");
		scanf("%d",&num);
		for (i=1;i<num;i++) //ayuda a detectar los divisores
		{
			//encontrar los divisores
			if(num % i == 0)
			{
				contador=contador + i;
			}
		
		}
		if (contador == num)
		{
			printf("%d\n",contador);
			printf("el numero %d si es un numero perfecto.\n",num);
		}
		else if(contador != num)
		{
			printf("%d\n",contador);
			printf("el numero %d no es un numero perfecto.\n",num);
		}
	}
	return 0;
}
