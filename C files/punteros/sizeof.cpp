/* imprime el tamaño de valores en coma de float y double*/
/*#include <stdio.h>
#define mult 1.8
int main()
{
	float grados, far;
	printf("programa para convertir grados centigrados a fahrenheit.\n\n");
	printf("ingresa la cantidad de grados centigrados que quieras tranformar a fahrenheit:\n");
	scanf("%f",&grados);
	
	far = (grados * mult) + 32;
	printf("los grados en centigrados son:%.1f\n",grados);
	printf("la equivalencia en grados fahrenheit es:%.1f\n ",far);
	return 0;
} */



/*//resolver un sistema de ecuaciones lineales de la forma ax + by = c /dx + ey = f
#include <stdio.h>
int main()
{
	float a, b, c, d, e, f, x, y;
	printf("se resolvera un sistema de ecuaciones lineales de la forma ax + by = c / dx +ey = f\n");
	printf("introduce los valores de a, b y c\n");
	scanf("%f %f %f",&a,&b,&c);
	printf("introduce los valores de d, e y f\n");
	scanf("%f %f %f",&d,&e,&f);
	x = ((c*e)-(b*f))/((a*e)-(b*d));
	printf("el valor de x es:%.1f\n",x);
	y = ((a*f)-(c*d))/((a*e)-(b*d));
	printf("el valor de y es:%.1f\n",x);
	return 0;
}*/


//escribir un programa que capture la masa de dos cuerpos y la distancia entre ellos y obtenga la fuerza gravitacional entre ellos

/*#include <stdio.h>
int main()
{
	//declarar variables
	float g,m1,m2,d,d2,f;
	//establecer g 
	g = (6.673 * 10)*-11;
	//pedir y leer los valores ingresados por el usuario
	printf("ingresa la masa del objeto 1:\n");
	scanf("%f",&m1);
	printf("ingresa la masa del objeto 2:\n");
	scanf("%f",&m2);
	printf("ingresa la distancia entre los objetos:\n");
	scanf("%f",&d);
	//elevar distancia al cuadrado
	d2 = d * d;
	f = (g*( m1 * m2))/d2;
	printf("la fuerza de atraccion entre las masas es de:%e\n",f);
	return 0;
	
}*/
