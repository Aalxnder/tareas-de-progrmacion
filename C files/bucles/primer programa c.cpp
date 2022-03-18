/*distancia de la luna en km*/
#include <stdio.h>
int main()
{
	const int luna = 238857;   /*distancia en millas*/
	float luna_kilo;
	printf("distancia de la luna %d millas\n",luna);
	luna_kilo = luna*1.609;  /*una milla = a 1.609 km*;*/
	printf("en kilomentros, la distancia de la luna es %fkm.\n",luna_kilo);
	return 0;
}
