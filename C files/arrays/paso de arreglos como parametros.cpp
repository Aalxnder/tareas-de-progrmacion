/*paso de arreglos como parametros 
en el ejercicio se pide un arreglo de tamaño maximo L, pero el numero de elementos sera determinado por la funcion leer array
por lo cual el segundo argumento es por lo tanto un apuntador para asi poder transmitir por referencia y obtener dicho dato de la funcion */
/*#include <stdio.h>
#include <stdlib.h>
#define L 100
//prototipos
void leer(double vector[],int* num); //n es el valor que obtendremos de la funcion y determinara el tamaño del arreglo
void imprimir(const double vector[], int n);
int main()
{
	system("color E0");
	double vector[L];
	int n;
	leer(vector, &n); //como es un puntero al pasar el valor a la llamada se le tiene que poner el asperson, en strings no aplica esto
	printf("el vector tiene %d posiciones\n",n);
	imprimir(vector, n);
	return 0;
}

//funcion para leer el array
void leer(double vector[],int* num)
{
	int n;
	puts("introdusca los datos, y para finalizar introduzca el numero 0:\n");
	for(n=0;n<L;n++)
	{
		printf("introduzca el valor %d\n",n);
		scanf("%lf",&vector[n]);
		if(vector[n] == 0)
		{
			puts("programa finalizado\n");
			break;
		}
	}
	*num = n; //igualar el valor de n al puntero num
}

//funcion para imprimir el array
void imprimir(const double vector[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\tposicion %d: %.1lf\n",i,vector[i]);
	}
}*/

/*introduce 10 valores de entero y calcula la suma y el valor mayor, todo esto realizando el paso de valores por parametros*/
#include <stdio.h>
#include <stdlib.h>
int total = 0;
//parametros
int suma(const int arrayenteros[],int numelem);
int mayor(const int arrayenteros[],int numelem);
int promedio(const int arrayenteros[],int numelem);
int main()
{
	system("color E0");
	int vector [10];
	int total,i;
	for(i=0;i<10;i++)
	{
		printf("ingresa el valor de la posicion %d\n",i);
		scanf("%d",&vector[i]);
	}
	printf("total = %d \n",suma(vector,10));
	printf("el numero mayor es: %d\n",mayor(vector,10));
	printf("el promedio es: %d\n",promedio(vector,10));
	return 0;
}

//funcion pa sumar las cosas
int suma(const int arrayenteros[],int numelem)
{
	int i;
	for(i=0;i<numelem;i++)
	{
		total += arrayenteros[i];
	}
	return total;
}
//funcion pa obtener el mayor numero
int mayor(const int arrayenteros[],int numelem)
{
	int i;
	int may;
	may =0;
	for(i=0;i<numelem;i++)
	{
		if(arrayenteros[i] >may)
		{
			may = arrayenteros[i];
		}
		else
		{
			may=may;
		}
	}
	return may;
}
//funcion para sacar el promedio
int promedio(const int arrayenteros[],int numelem)
{
	int prom,i;
	prom = 0;
	for(i=0;i<numelem;i++)
	{
		prom = (prom+total)/numelem;
	}
	return prom;
}
