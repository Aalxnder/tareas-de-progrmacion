/* cadenas
mostrar como el caracter null se añade a la cadena*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color E0");
	char cadena[] = "CR7SIUUU";
	for(int i=0;i<9;i++)
		printf("cadena[%d] = %c\n",i,cadena[i]);
	return 0;
	//cuando el caracter nulo se llama a imprimir no imprime nada
}*/

//contar la cantidad de palabras en una cadena
/*#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main()
{
	system("color E0"); //cambiar el color de la consola (stdlib.h)
	char cadena[800], *a; //declarar la cadena
	int i, n; //declarar iterador del bucle y contador de palabras
	puts("ingrese una frase:\n");
	a=gets(cadena);
	while(a != NULL) //mientras el valor que ingrese el usuario sea diferente a NULL entramos al iterador
	{
		n=0;
		for(i=0;i<strlen(cadena);i++)
		{
			if(cadena[i] == ' ')  //si el caracter que este en la posicion i es un espacio, se aumentara 1 a la cuenta de n
			{
				n++; //la funcion interpreta cada espacio como una nueva palabra, asi que por cada espacio contara una palabra
			}
		}
		if(i>0)
		{
			++n; //se añadira la ultima palabra al contador porque si no ponemos este if no contara la ultima palabra
		}
		printf("numero de palabras = %d\n",n);
		puts("ingrese una frase:\n");
		a=gets(cadena);
	}
	system("pause");
	return 0;
} */

//El programa cuenta la cantidad de letras vocales de la entrada
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color E0");
	int car;
	int cuenta = 0;
	int cuenta2=0;
	int cuenta3=0;
	int cuenta4=0;
	int cuenta5=0;
	printf("presiona CTRL + Z para ver el resultado\n");
	while((car=getchar()) != EOF)
	{
		if(car == 'a')
		{
			++cuenta;
		}
		
		if(car == 'e')
		{
			++cuenta2;
		}
		
		if(car == 'i')
		{
			++cuenta3;
		}
			
		if(car == 'o')
		{
			++cuenta4;
		}
		
			
		if(car == 'u')
		{
			++cuenta5;
		}
	
	}
	printf("\n%d de letras a encontradas\n",cuenta);
	printf("\n%d de letras e encontradas\n",cuenta2);
	printf("\n%d de letras i encontradas\n",cuenta3);
	printf("\n%d de letras o encontradas\n",cuenta4);
	printf("\n%d de letras u encontradas\n",cuenta5);
	system("pause");
	return 0;
}*/
//convertir a mayusculas la primer letra de cada palabra
//funcion getschar()
/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	system("color E0");
	char car, pre ='\n';
	printf("escriba lo que quiera\n");
	printf("Presione ctrl + Z para finalizar\n\n");
	while((car=getchar()) != EOF)
	{
		if(pre == ' ' || pre == '\n')
		{
			putchar(toupper(car));
		}
		else
		{
			putchar(car);
			pre=car;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}*/
/* El programa lee una frase ingresada por el usuario y escribe en pamtalla tantas lineas como palabras tiene la frase 
cada linea se escribe a partir de la primera pero lo hace sin la ultima palabra de la lina anterior*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//prototipos
void sgtepal(char *p);
int main()
{
	system("color E0");
	char linea [290]; //declarar la cadena donde se almacenara la cadena
	printf("introduce una frase:\n");
	gets(linea); //leer cadena con gets
	while(*linea)  //mientras el puntero de linea sea True
	{
		puts(linea); //escribimos la linea
		sgtepal(linea); //llamamos a la funcion linea
	}
}
//funcion pa ir restando palabras
void sgtepal(char *p) //a la funcion le asiganos un puntero para poder manipular la cadena
{
	int j;  //declaramos J
	j=strlen(p)-1; //buscamos la longitud de la candena con strlen pero restando 1 para no contar el valor nulo
	while(j>0 && p[j] != ' ')  //un bucle que se inicializara mientras j sea mayor a 0 y p(linea al llamar a la funcion) en la posicion j sea diferente a espacio
	{
		j--; /*a j le restamos 1 para ir quitando una palabra con cada vuelta de bucle (cada elemento de j es una palabra separada por el espacio, 
		asi si linea tiene 10 palabras el valor de j sera 10 y se le ira restando uno hasta que el valor sea mayor a 0
		es decir que no haya palabras ya
	}
	p[j]='\0'; //ya que j sea 0 se asingamos el vallor nulo
}*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char linea[200];
char *linea2;
int n;
char car[10];
//prototipos
int extraer(char *dest, const char *fuente , int num_car);
int main()
{
	system("color E0");
	
	puts("\nEscriba la cadena a analizar\n");
	gets(linea);
	do
	{
		printf("ingresa la cantidad de caracteres a extraer:\n");
		gets(car);
		n=atoi(car);
	}while(n<1 || n>strlen(linea));
	linea2=(char*)malloc((n+1) *sizeof (char));
	extraer(linea2,linea,n);
	system("pause");
}

int extraer(char *dest, const char *fuente, int num_car)
{
	int cuenta;
	for(cuenta=1;cuenta<=num_car;cuenta++)
	{
		*dest++;
		*fuente++;
	}
	*dest = '\0';
	printf("cadena extraida %s\n",linea2);
	printf("cuenta: %d",cuenta);
}
