/*crear un programa que el usuario llene un array de 10 elementos y calucule la suma,la media y la desviacion tipica
la dexviacion es una magnitud estadistica que se calcula restando cada valor del valor medio y calculando la media de esas diferencias*/
/*#include <stdio.h> //entrada y salida de datos
#include <stdlib.h> //cambiar el color de la consola y funciones system
#define cant 10
//prototipos
void introducir(float vector[10]);
float sumas(float vector[10]);
float promedios(float vector[10]);
float desviaciones(float vector[10]);
//variables globales
float suma = 0;
float promedio = 0;
float diferencias = 0;
//funcion principal
int main(void)
{
	system("color E0");
	float vector[10];
	float suma,media,desviacion;
	introducir(vector); //llamar a la funcion introducir los valores al vector
	suma = sumas(vector); //igualar la variable suma a el return de la funcion suma, aqui igualmente se llama a la funcion suma
	printf("la suma es: %.1f\n",suma);
	media = promedios(vector);
	printf("el promedio es: %.1f\n",media);
	desviacion = desviaciones(vector);
	printf("la desviacion es: %.1f\n",desviacion);
	return 0;
}

//funcion para introducir valores al array
void introducir(float vector[10])
{
	int i;
	//ciclo para segun la vuelta en la que se encuentre me almacene la variable que el usuario introduzca en la posicion que se encuentre el bucle
	for(i=0;i<cant;i++)
	{
		printf("introduce el valor %d del vector: ",i);
		scanf("%f",&vector[i]);
	}
}

//funcion para devolver la suma de todos los elementos del vector
float sumas(float vector[10])
{
	//iterador
	int i;
	//bucle para el promedio para que valla iterando y cambiando el valor de promedio con cada vuelta
	for(i=0;i<cant;i++)
	{
		//la suma sera igual al valor suma mas lo que haya en vector en la posicion del iterador y en cada vuelta se ira sobreescribiendo
		suma = suma + vector[i];
	}
	//retornar el valor de suma para poder usarlo en la funcion main
	return suma;
}

//funcion para calcular la media o el promedio
float promedios(float vector[10])
{
	int i;
	
	//bucle para el promedio para que valla iterando y cambiando el valor de promedio con cada vuelta
	for(i=0;i<cant;i++)
	{
		//el promedio sera igual a lo que la funcion suma nos haya devuelto sobre cant que definimos en 10
		promedio = suma/cant;
	}
	return promedio;
}

//funcion para la desviacion tipica
float desviaciones(float vector[10])
{
	int i;
	
	//bucle para calcular la desviacion tipica
	for(i=0;i<cant;i++)
	{
		diferencias=diferencias+(vector[i]-promedio);
		diferencias=diferencias/cant;
	}

	return diferencias;
}*/

