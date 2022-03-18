#include <stdio.h>
#include <stdlib.h>
//funcion main
int main()
{
	system("color E0");
	int vector[5] = {1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band = 'F';
	printf("valores en el arreglo\n");
	for (int i=0;i<5;i++)
	{
	printf("%d  ",vector[i]);
	}
	//damos valor a dato
	printf("\ningresa el numero a buscar\n");
	scanf("%d",&dato);
	//valores a inf y sup
	inf = 0;
	sup = 5;
	while(inf <= sup)
	{
		mitad = (inf+sup)/2;
		if(vector[mitad] == dato)
		{
			band = 'V';
			break;
		}
		if(vector[mitad] > dato)
		{
			sup = mitad;
			mitad=(inf+sup)/2;
		}
		if(vector[mitad] < dato)
		{
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}
	if (band == 'F')
	{
		printf("el numero no se ha encontrado\n");
	}
	else if(band == 'V')
	{
		printf("el numero se ha encontrado en la posicion %d\n", mitad);
	}
	system("pause");
	return 0;
	
	
}
