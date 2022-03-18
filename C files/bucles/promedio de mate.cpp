//programa para calcular la equivalente de tiempo dado en horas en segundos y minutos
/*#include <stdio.h>

int main()
{
	int hora, sec, min;
	float dias;
	float sem;
	printf("este programa te mostrara la equivalencia en dias, minutos ,horas, semanas del tiempo elegido.\n\n");
	printf("ingresa el tiempo en segundos que desees convertir:\n");
	scanf("%d",&sec);
	sec = sec;
	min = sec/60;//listo
	hora = (min * 1)/60;
	dias = hora/24;
	sem = dias/7;
	
	printf("el equivalente en segundos de los segundos elegidas son de:%d\n",sec);
	printf("el equivalente en minutos de los segundos elegidos son de:%d\n",min);
	printf("el equivalente en dias de los segundos elegidos es de:%.2f\n",dias);
	printf("el equivalente en horas de los segundos elegidos es de:%d\n",hora);
	printf("el equivalente en semanas de los segundos elegidos es de:%.2f\n",sem);
	return 0;
}*/
//determinar si un año es biciesto o no 
/*#include <stdio.h>
#define mult 4
#define a 400
#define b 100
int main()
{
	int ao;
	printf("ingrese el año.\n");
	scanf("%d",&ao);
	
	
	if (ao%b == 0 and ao%a != 0)
		printf("el año no es biciesto.\n");
			
	else if (ao%b == 0 and ao%a == 0)
		printf("el año es biciesto");
			
	else if (ao%mult == 0 )	printf("el año es biciesto");
		
	
	else printf("el año no es biciesto");
		
	return 0;
}*/

//sacar mi calificacion de mate
#include <stdio.h>
#include <string.h>
#define examena .20
#define examenb .20
#define tareas .60
int main()
{
	//definir variables
	char nombre [30];
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	float promedioa, promedioA, promedioE,promedioe1,promedioe2,calificacionT;
	float examen1, examen2;
	//mensajes
	printf("este programa calcula si pase mate o si mame y valio verga.\n");
	printf("ingrese el nombre del alumno:\n");
	//leer nombre
	gets(nombre);
	printf("ingrese las calificaciones de las actividades:\n");
	//leer y calcular la calificacion obtenida por las actividades
	printf("ingrese la calificacion 1:\n");
	scanf("%f",&a);
	printf("ingrese la calificacion 2:\n");
	scanf("%f",&b);
	printf("ingrese la calificacion 3:\n");
	scanf("%f",&c);
	printf("ingrese la calificacion 4:\n");
	scanf("%f",&d);
	printf("ingrese la calificacion 5:\n");
	scanf("%f",&e);
	printf("ingrese la calificacion 6:\n");
	scanf("%f",&f);
	printf("ingrese la calificacion 7:\n");
	scanf("%f",&g);
	printf("ingrese la calificacion 8:\n");
	scanf("%f",&h);
	printf("ingrese la calificacion 9:\n");
	scanf("%f",&i);
	printf("ingrese la calificacion 10:\n");
	scanf("%f",&j);
	printf("ingrese la calificacion 11:\n");
	scanf("%f",&k);
	printf("ingrese la calificacion 12:\n");
	scanf("%f",&l);
	printf("ingrese la calificacion 13:\n");
	scanf("%f",&m);
	printf("ingrese la calificacion 14:\n");
	scanf("%f",&n);
	printf("ingrese la calificacion 15:\n");
	scanf("%f",&o);
	printf("ingrese la calificacion 16:\n");
	scanf("%f",&p);
	printf("ingrese la calificacion 17:\n");
	scanf("%f",&q);
	printf("ingrese la calificacion 18:\n");
	scanf("%f",&r);
	printf("ingrese la calificacion 19:\n");
	scanf("%f",&s);
	printf("ingrese la calificacion 20:\n");
	scanf("%f",&t);
	printf("ingrese la calificacion 21:\n");
	scanf("%f",&u);
	printf("ingrese la calificacion 22:\n");
	scanf("%f",&v);
	printf("ingrese la calificacion 23:\n");
	scanf("%f",&w);
	printf("ingrese la calificacion 24:\n");
	scanf("%f",&x);
	printf("ingrese la calificacion 25:\n");
	scanf("%f",&y);
	printf("ingrese la calificacion 26:\n");
	scanf("%f",&y);
	//calcular promedios 
	promedioa = (a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z)/26;
	promedioA = promedioa * tareas;
	printf("la calificacion que optuviste de las tareas fue de:%.1f\n",promedioA);
	//calificacion de examen 1
	printf("ingresa las calificaciones optenidas en el primer examen:\n");
	scanf("%f",&examen1);
	promedioe1 = examen1 * examena;
	printf("el puntaje opbtenido en el examen 1 fue de: %f\n",promedioe1);
	//calificacion examen 2
	printf("ingresa las calificaciones optenidas en el segundo examen:\n");
	scanf("%f",&examen2);
	promedioe2 = examen2 * examenb;
	printf("el puntaje opbtenido en el examen 2 fue de: %f\n",promedioe2);
	promedioE = promedioe1 + promedioe2;
	printf("la calificacion que obtuviste de examenes fue de:%.1f\n",promedioE);
	//promedio total
	calificacionT = promedioA + promedioE;
	printf("la calificacion final que obtuvo %s ",nombre," fue de:%.1f ",calificacionT,"\n\n");
	
	//ciclos if para saber y mostrar mensaje de si pase
	if (calificacionT >= 60)
		printf("a huevoo pase con%.1f\n ",calificacionT);
	else if (calificacionT <60)
		printf("vergaaaaa mameeeeeee :(\n");
		
	return 0;
}
