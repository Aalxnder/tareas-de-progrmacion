//punteros
/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("color E0");
	int a,b,c;
	int *p1, *p2;
	a=5;
	p1=&a; //p1 apunta  a la direccion de memoria de la variable a
	p2=p1; //a p2 se le asigna la misma direccion que tenga p1
	b=*p1;
	c=*p1+5;//suma 5 a lo que contemga la direccion apuntada por p1
	printf("%d %d %d %p %p",a,b,c,p1,p2);
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("color E0");
	float serie[15];
	int d;
	float *p1, *p2;
	p1=&serie[4];
	p2=&serie[12];
	d=p1-p2;
	printf("%d ",d);
	return 0;
}*/


#include <stdio.h>
#include <stdlib.h>

void funcion1(int, int);
void funcion2(int*,int*);

int main(void)
{
	system("color E0");
	int u,v;
	u=1;
	v=3;
	funcion1(u,v);
	printf("despues de la llamada a la funcion1: u=%d, v=%d\n",u,v);
	funcion2(&u, &v);
	printf("despues de la llamada a la funcion2: u=%d v=%d\n",u,v);
	return 0;
}

void funcion1(int u, int v)
{
	u=0;
	v=0;
}
void funcion2(int *pu, int *pv)
{
	*pu=0;
	*pv=0;
}
