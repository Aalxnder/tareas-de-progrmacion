#include <stdio.h>
#include <stdlib.h>

int area(float*base, float*altura);
int datos(float*base, float*altura,float *area,int cant);
void liberar(float*base, float*altura,float *area);

int main(void)
{
	system("color E0"); //cambiar el color
	float *base;
	float *altura; //declaracion de punteros
	
	area(base,altura);
	
	system("pause");
	return 0;
}

int area(float*base, float*altura)
{
	float *area;
	int cant;
	
	printf("Ingresa la cantidad de triangulos de los cuales quieres sacar el area\n");
	scanf("%d",&cant);
	base = (float*)malloc(cant*sizeof(float));
	altura = (float*)malloc(cant*sizeof(float)); //asignar memoria dinamica a los punteros
	area =(float*)malloc(cant*sizeof(float));
	
	if(base == NULL ||altura == NULL ||area == NULL)  //revisar si se pudo abrir
	{
		perror("error en la asignacion de memoria\n");
		return 1;
	}
	
	datos(base,altura,area,cant);
	liberar(base,altura,area);
}

int datos(float*base, float*altura,float *area,int cant)
{
	int i;
	FILE *archivo;
	archivo = fopen("triangulos.txt","wt");
	if(archivo == NULL)
	{
		perror("El archivo no nse pudo abrir\n");
		return 2;
	}
	
	//pedir datos
	for(i=0;i<cant;i++)
	{
		printf("Ingresa la base del triangulo\n");
		scanf("%f",&*(base+i));
		printf("Ingresa la altura del triangulo\n");
		scanf("%f",&*(altura+i));
		area[i] = (*(base+i)**(altura+i))/2;
		printf("El area del triangulo %d es: %.1f\n",i,*(area+i));
		fprintf(archivo,"datos del triangulo %d base %.1f, altura %.1f \n",i,*(base+i),*(altura+i));
		fprintf(archivo,"area del tiangulo %d es %.1f\n",i,*(area+i));
		fputc('\n',archivo);
	}
	fclose(archivo);
}

void liberar(float*base, float*altura,float *area)
{
	free(base);
	free(altura);
	free(area);
}
