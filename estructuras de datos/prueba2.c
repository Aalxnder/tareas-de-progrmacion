#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//estructura pa los datos que se almacenaran en la estructura
typedef struct
{
	char nombre[30];
	int edad;
	long int codigo;
	char materia1[30],materia2[30],materia3[30],diaMateria1[30],diaMateria2[30],diaMateria3[30];
	float horaInicioo,horaInicio2,horainicio3,horaFin,horafin2,horafin3;
}tElem;

typedef struct Nodo //estructura de el nodo y el puntero q apunta a siguiente
{
	tElem dato;
	struct Nodo* siguiente;
}tNodo;


//crear el tipo de dato de tlista;
typedef tNodo* tLista;


//prototipos
tLista nuevaLista();
void menu2(tLista lis, tElem e);
void menu (tLista lis, tElem e);
tElem nuevoElem();
int comparaElem(tElem e1, tElem e2);
void agregarFinal(tLista* lis, tElem e);
void agregarInicio(tLista* lis, tElem e);
void agregarOrdenado(tLista* lis, tElem e);
void eliminarElem(tLista* lis, tElem e);
void mostrarLista(tLista lis);
void salir(tLista lis , tElem e);
void guardar(tElem e, int paso);

int main(void)
{
    system("color E0");
    int opc;
	tLista lis;  //crear cada una de las variables con su tipo correspondiente
	tElem e;

	lis = nuevaLista();

    menu(lis, e);
	return 0;
}
//void menu principal
void menu(tLista lis, tElem e)
{
    int opc;
    do
    {
         printf("\
                 ------------------Menu------------------\n\
                 | 1-Agregar un alumno                  |\n\
                 | 2-Mirar el historial                 |\n\
                 | 3-salir                              |\n\
                 ----------------------------------------\n");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
            {
               menu2(lis, e);
               break;

            }
            case 2:
            {
                printf("mirando historial");
                break;
            }
            case 3:
            {
                printf("salir");
                salir(lis, e);
                break;
            }
            default:
            {

                printf("Opcion no disponible\n");
            }


        }

    }while(opc != ' ');


}


//menu 2
void menu2(tLista lis, tElem e)
{

	int opc;
	do
    {


        system("cls");
        printf("\
               ------------------Menu------------------\n\
               | 1-Agregar un elemento al final       |\n\
               | 2-Agregar un elemento al inicio      |\n\
               | 3-Agregar un elemento ordenado       |\n\
               | 4-Eliminar un elemento               |\n\
               | 5-Buscar un elemento                 |\n\
               | 6-mostrar lista                      |\n\
               | 7-Volver al menu principal           |\n\
               | 8-salir                              |\n\
               ----------------------------------------\n");
        printf("Ingresa una opcion :" );
        scanf("%d",&opc);

		switch(opc)
		{
			case 1:
			{
			    system("cls");
				printf("Ingrese los valorea a insertar: \n");
				e = nuevoElem();
				agregarFinal(&lis, e);
				printf("Valores agregado al final con exito\n");
				system("Pause");
				break;
			}
			case 2:
			{
			    system("cls");
				printf("Ingrese un Elemento al inicio: \n");
				e = nuevoElem();
				agregarInicio(&lis, e);
				printf("Valores agregado al inicio con exito\n");
				system("pause");
				break;
			}
			case 3:
			{
			    system("cls");
				printf("Ingrese un elemento ordenado\n");
				e = nuevoElem();
				agregarOrdenado(&lis, e);
				printf("los valores han sido agregados en el orden correspondiente\n");
				system("Pause");
				break;
			}
			case 4:
			{
			    system("cls");
				printf("Ingresa el elemento que deseas eliminar\n");
				e = nuevoElem();
				eliminarElem(&lis, e);
				system("pause");
				break;
			}
			case 5:
			{
			    system("cls");
				printf("Ingresa el nombre del alumno a buscar\n");
				//Aqui va la funcion de buscar
				system("Pause");
				break;
			}
			case 6:
			{
			    system("cls");
				printf("Mostrando la lista\n\n");
				mostrarLista(lis);
				system("pause");
				break;
			}
			case 7:
			{
			    system("cls");
				printf("Volviendo al menu principal\n");
				menu(lis, e);
				system("pause");
				break;
			}
			case 8:
			{
			    system("cls");
				salir(lis, e);
				system("pause");
				break;
			}
			default:
			{
			    system("cls");
				printf("Opcion no valida\n");
				system("pause");
				break;
			}

		}
	}while(opc != ' ');

}

void guardar(tElem e, int paso)
{
    FILE* fichero;
    fichero = fopen("Prueba.txt", "a+");
    switch(paso)
    {
        case (1): ;
            char cadena1 [] = "=== Horario SIAPP ===\n\n";
            //char cadena2 [] = "Fracción:";
            //char cadena3 [] = "/";
            //char cadena4 [] = "\n";

            //archivo.writelines("===SIMPLIFICACIÓN DE FRACCIONES===\n\n");
            //archivo.writelines("Fracción:"+ str(n)+ "/"+ str(d)+ "\n");

            fprintf (fichero, "%s", cadena1);
            fclose(fichero);

            break;
        case (2): ;           // Nombre: Eduardo de jesus quintero meza
            //                 ╔════════════════════════════════════════════════════════════╦════════════════════╦════════════════════╗\n
            //                 ║ Nombre:                                                    ║ Codigo:            ║ Edad:              ║\n

            char cadenaa [] = "╔════════════════════════════════════════════════════════════╦════════════════════╦════════════════════╗\n";
            char cadenab [] = "║ Nombre: ";
            char cadenaI [60];
            sprintf(cadenaI, "%s", e.nombre);
            char cadenac [] = "║ Codigo: ";
            char cadenaI2 [10];
            sprintf(cadenaI2, "%li", e.codigo);
            char cadenad [] = "║ Edad: ";
            char cadenaI3 [3];
            sprintf(cadenaI3, "%d", e.edad);
            char cadenae [] = "║\n";//60,20,20
            char cadenaA [] = "╠════════════════════════════════════════════════════════════╬════════════════════╬════════════════════╣\n";
            char cadenaB [] = "║                          Materia                           ║       Horas        ║        Dia         ║\n";
            char cadenaC [] = "╠════════════════════════════════════════════════════════════╬════════════════════╬════════════════════╣\n";

            //archivo.writelines("╔═════════╦══════════════════╦══════════╗\n");
            //archivo.writelines("║ Divisor ║ Veces que se usó ║ Producto ║\n");
            //archivo.writelines("╠═════════╬══════════════════╬══════════╣\n");
            ////archivo.writelines("╠123456789012345678901234567890123456789012345678901234567890╬12345678901234567890╬12345678901234567890╣");

            fprintf (fichero, "%s%s%s%s%s%s%s%s%s%s%s", cadenaa, cadenab, cadenaI, cadenac, cadenaI2, cadenad, cadenaI3, cadenae, cadenaA, cadenaB, cadenaC);
            fclose(fichero);

            break;
        case (3): ;
            int divisoresA;
            int vecesA;
            int productoA;

            char linea [] = "║";
            char espacio [] = " ";
            char linea_final [] = "\n";

            char cadenaA1 [60];// = divisores + '0';//str(divisores)
            sprintf(cadenaA1, "%s", e.materia1);
            char cadenaA2 [15]; //= veces + '0';    //str(veces)
            sprintf(cadenaA2, "%.2f", e.horaInicioo);
            char cadenaA3 [15]; //= producto +'0';  //str(producto)
            sprintf(cadenaA3, "%s", e.diaMateria1);

            int A1 = strlen(cadenaA1);      //len(str(divisores))
            int A2 = strlen(cadenaA2);      //len(str(veces))
            int A3 = strlen(cadenaA3);      //len(str(producto))

            if (A1 < 60)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "materia"
            {
                divisoresA = 60 - (A1);
            }
            else
            {
                divisoresA = 0;
            }
            if ((A2) < 20)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "horas"
            {
                vecesA = 20 - (A2);
            }
            else
            {
                vecesA = 0;
            }
            if (A3 < 20)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "dia"
            {
                productoA = 20 - (A3);
            }
            else
            {
                productoA = 0;
            }
            fprintf(fichero, "%s%s", linea, cadenaA1);
            //archivo.writelines("║"+str(divisores));
            for (int A=0; A < divisoresA; A++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, cadenaA2);
            //archivo.writelines("║"+ str(veces));
            for (int B=0; B < vecesA; B++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, cadenaA3);
            //archivo.writelines("║"+ str(producto));
            for (int C=0; C < productoA; C++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, linea_final);
            //archivo.writelines("║\n");
            fclose(fichero);

            break;
        case (4): ;

            char inicio [] = "╚════════════════════════════════════════════════════════════╩════════════════════╩════════════════════╝\n\n";
            //char fracc [] = "Fraccion resultante:";
            //char diagonal [] = "/";
            //char lineas_finales [] = "\n\n";

            fprintf(fichero, "%s", inicio);
            //archivo.writelines("╚═════════╩══════════════════╩══════════╝\n\n");
            //archivo.writelines("Fracción resultante:"+ str(sn)+ "/"+ str(sd)+ "\n\n");
            fclose(fichero);

            break;
    }
}

//pedir los valores
tElem nuevoElem()
{
	tElem e; //crear un elemento del tipo tElem llamado e
	//datos generales
	fflush(stdin);
	printf("Ingresa el nombre: \n");
	gets(e.nombre);
	printf("Ingresa el codigo del alumno: \n");
	scanf("%li",&e.codigo);
	printf("Ingresa la edad del alumno %s: \n",e.nombre);
	scanf("%d",&e.edad);

	//materia 1
	fflush(stdin);
	printf("Ingresa la materia numero 1:\n");
	gets(e.materia1);
	printf("Ingresa el dia de la materia %s:\n",e.materia1);
	gets(e.diaMateria1);
	printf("Ingresa la hora de inicio de la clase 1: \n");
	scanf("%f",&e.horaInicioo);
	printf("Ingresa la hora de fin de la clase 1:\n");
	scanf("%f",&e.horaFin);

	//materia 2
	fflush(stdin);
	printf("Ingresa la materia numero 2:\n");
	gets(e.materia2);
	printf("Ingresa el dia de la materia %s:\n",e.materia2);
	gets(e.diaMateria2);
	printf("Ingresa la hora de inicio de la clase 2: \n");
	scanf("%f",&e.horaInicio2);
	printf("Ingresa la hora de fin de la clase 2:\n");
	scanf("%f",&e.horafin2);

	//materia 3
	fflush(stdin);
	printf("Ingresa la materia numero 3:\n");
	gets(e.materia3);
	printf("Ingresa el dia de la materia %s:\n",e.materia3);
	gets(e.diaMateria3);
	printf("Ingresa la hora de inicio de la clase 3: \n");
	scanf("%f",&e.horainicio3);
	printf("Ingresa la hora de fin de la clase 3:\n");
	scanf("%f",&e.horafin3);

    int uno = 1;
    int dos = 2;
    int tres = 3;
    int cuatro = 4;

    guardar(e, uno);
    guardar(e, dos);
    guardar(e, tres);
    guardar(e,cuatro);
	return e;
}


//comparar valores
int comparaElem(tElem e1, tElem e2)
{
	int d1,d2;
	if (d1<d2)
	{
		return -1;
	}
	else
	{
		if(d1>d2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}


//funcion para imprimir y solo imprimir los valores
void mostrarElem(tElem e)
{
	printf("Nombre del alumno: %s\n",e.nombre);
	printf("Codigo del alumno: %li\n",e.codigo);
	printf("Edad del alumno: %d\n",e.edad);

	printf("Materia numero 1: %s\n",e.materia1);
	printf("Dia de la materia %s: %s\n",e.materia1,e.diaMateria1);
	printf("Materia 1 Inicio de clases: %.1f	",e.horaInicioo);
	printf("Materia 1 fin de clases: %.1f\n",e.horaFin);

	printf("Materia numero 2: %s\n",e.materia2);
	printf("Dia de la materia %s: %s\n",e.materia2,e.diaMateria2);
	printf("Materia 2 Inicio de clases: %.1f	",e.horaInicio2);
	printf("Materia 2 fin de clases: %.1f\n",e.horafin2);

	printf("Materia numero 3: %s\n",e.materia3);
	printf("Dia de la materia %s: %s\n",e.materia3,e.diaMateria3);
	printf("Materia 3 Inicio de clases: %.1f	",e.horainicio3);
	printf("Materia 3 fin de clases: %.1f \n\n\n",e.horafin3);
	printf("\n");
}


//ahora se viene lo chido, aqui se crea el Nodo
tLista crearNodo(tElem e)
{
	tLista nodo;
	nodo = (tLista)malloc(sizeof(tNodo));
	if(nodo == NULL)
	{
		perror("Error en la reserva de memoria");
		exit(-1);
	}

	nodo->dato = e;
	nodo->siguiente = NULL;

	return nodo;
}


//crear una lista por si la lista esta vacia
tLista nuevaLista()
{
	return NULL;
}


//funcion agregar al final
void agregarFinal(tLista* lis, tElem e)
{
	tLista aux;
	if(*lis != NULL) //si la lista no esta vacia
	{
		aux = *lis;  //aux es la direccion a la que apunta lis
		while(aux->siguiente != NULL) //si el nodo que sigue al nodo en el que estamos es null deja de cumplirse
		{
			aux = aux->siguiente; //mover el nodo;
		}
		aux->siguiente = crearNodo(e);  //si ya no se cumplio el while es que el nodo en el que estamos es el ultimo de la lista, asi que agregamos otro despues de ese
	}
	else //si la lista esta vacia, creamos un crearNodo
	{
		*lis = crearNodo(e);
	}

}



//funcion agregar al inicio
void agregarInicio(tLista* lis, tElem e)
{
	tLista nodo;

	nodo = crearNodo(e); //crear nodo

	nodo->siguiente = *lis; //la posicion siguiente a el nodo que agreguemos sera el nodo cabeza, por lo que se pondra al inicio
	*lis = nodo;  //y acomodar la lista que apunte a el nodo que pusimos al inicio, porque el nodo cabeza siempre debe ir al inicio
}



//funcion para agregar ordenado
void agregarOrdenado(tLista* lis, tElem e)
{
	tLista nodo,ant,aux;
	nodo = crearNodo(e);

	if(*lis != NULL) //se revisa si la lista esta vacia o no, si esta vacia se coloca en la posicion
	{
		ant = NULL;  //iniciar el nodo anterior en null
		aux = *lis;  //inicializar el nodo aux en siguiente

		while (aux != NULL && comparaElem(aux->dato, e)<0)  //recorrer hasta que no se llegue a null y a la vez al comparar elementos se pueda insertar
		{
			ant = aux;  //acomodar ant en la posicion de aux y aux en la posicion siguiente
			aux = aux->siguiente;
		}
		if (ant != NULL)  //si el valor insertado es el menor de todos, preguntamos si el while algiuna vez se ejecuto, si no es el menor de todos
		{
			ant->siguiente = nodo;  //el nodo anterior ahora apunta al nodo que ingresamos nuevo
			nodo->siguiente = aux;   //el nodo que ingresamos apunta a el siguiente, o sea aux asi ya queda entre los dos
		}
		else  //esto es si el valor ingresado es el menor es decir si el while no se movio(insertar al inicio)
		{
			nodo->siguiente = *lis;
			*lis = nodo;
		}

	}
	else
	{
		*lis = nodo;  //si esta vacia pongo el nodo al inicio
	}
}



//borrar un elemento
void eliminarElem(tLista* lis, tElem e)
{
	tLista ant, aux;


	if(*lis != NULL)
	{
		ant = NULL;
		aux = *lis;
		while(aux != NULL && comparaElem(aux->dato, e) != 0)
		{
			ant = aux;
			aux = aux->siguiente;
		}
		if(aux != NULL) //como aux se parara en el valor a eliminar, si aux llega a null quiede decir que no se encontro el valor
		{
			if(ant != NULL) //verificar si se movio el while es decir si no ant se queda valiendo NULL quiere decir que no se movio
			{
				ant->siguiente = aux->siguiente;  //mover los valores de el anterior a el siguiente de aux
			}
			else //si ant sigue apuntando a null es decir que no se movio el nodo cabeza ahora apuntara a el segundo nodo
			{
				*lis = aux->siguiente;  //si el valor que se quiere ingresar es el primero, lis o sea el puneto cabeza apuntara al segundo nodo
			}
		}
		else
		{
			printf("No se ha encontrado el valor para eliminar\n");
		}
	}
	else
	{
		printf("LA lista esta vacia, no hay ningun elemento para eliminar\n");
	}
}



//funcion para mostrar la lista
void mostrarLista(tLista lis)
{
	if(lis != NULL)
	{
		while(lis != NULL)
		{
			mostrarElem(lis->dato);
			lis = lis->siguiente;
		}
	}
	else
	{
		printf("la lista esta vacia, no hay nadas para mostrar\n");

	}
}




//funcion para salir del programa
void salir(tLista lis, tElem e)
{
	printf("Ha elegido la opcion de salir\n");
	int s;
	printf("realmentre quieres salir del programa?\n");
	printf("Ingresa 0 para finalizar o otro numero para permanecer\n");
	scanf("%d",&s);
	if(s == 0)
	{
		printf("Ha decidido finalizar el programa\n");
		printf("Press 'Enter' to continue: ... \n");
		while ( getchar() != '\n');
		exit(-1);
	}
	else
	{
		printf("ha decidido permanecer en el programa\n");
		system("pause");
		menu(lis, e);
	}
}

