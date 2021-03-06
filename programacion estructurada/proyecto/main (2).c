#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//AJUSTE: implementacion de la funcion para buscar informacion del usuario en txt

/*

    Nombre del proyecto: Agenda de Materias
    Integrantes del equipo:
    -Perez Elizondo Levi Alexander
    -Quintero Meza Eduardo de Jes?s
    -Ramos Mel?ndez Jes?s
    Planteamiento del problema: Con este proyecto se pretende solucionar la problem?tica al momento de revisar
    tu horario y ver algo confuso y dif?cil de entender por medio de una aplicaci?n en la que lo pueda organizar
    sin pedir sus datos institucionales para evitar desconfianza ya que muchas aplicaciones que se encuentran
    disponibles actualmente piden datos de su cuenta institucional y no son aplicaciones oficiales.

    El programa va a consistir en el dise?o de un men? en el cual el usuario puede seleccionar una opci?n las cuales
    van referentes al registro, b?squeda, eliminaci?n, vista y ordenamiento de las cosas que ingrese, los primeros datos
    que ingrese son Nombre, materia, d?a, c?digo, nombre, y edad. Posteriormente el programa va a solicitar en orden el
    nombre de la materia, el d?a de la semana, la hora de inicio y la hora de salida, siguiendo este proceso hasta terminar
    acomodando todo en una tabla.
    Finalmente cuando se acabe el registro y se seleccione ver los datos el usuario pueda encontrar de forma ordenada por medio
    de una tabla su horario registrado.

*/

//estructura pa los datos que se almacenaran en la estructura
typedef struct
{
	char nombre[30];
	int edad;
	char codigo[10];
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
void menu2(tLista lis, tElem e,tElem c,tElem w);
void menu (tLista lis, tElem e,tElem c,tElem w);
tElem nuevoElem();
int comparaElem(tElem e1, tElem e2);
void agregarFinal(tLista* lis, tElem e);
void agregarInicio(tLista* lis, tElem e);
void agregarOrdenado(tLista* lis, tElem e);
void eliminarElem(tLista* lis, tElem e);
void mostrarLista(tLista lis);
void salir(tLista lis , tElem e,tElem c,tElem w);
void guardar(tElem e, int paso);
tElem nombreElim();

int historia();
void Buscador();                                   //MODIFICACION
void iniciales_mays(char destino[], char fuente[]);//MODIFICACION


int main(void)
{
    system("color E0");
    int opc;
	tLista lis;  //crear cada una de las variables con su tipo correspondiente
	tElem e;
    tElem c;
    tElem w;
	lis = nuevaLista();

    menu(lis, e,c,w);
	return 0;
}
//void menu principal
void menu(tLista lis, tElem e, tElem c,tElem w)
{
    int opc;
    do
    {
        system("cls");
         printf("\
                 ------------------Menu------------------\n\
                 | 1-Agregar un alumno                  |\n\
                 | 2-Mirar el historial                 |\n\
                 | 3-Buscar tu informacion              |\n\
                 | 4-Salir                              |\n\
                 ----------------------------------------\n");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
            {
               menu2(lis, e,c,w);
               break;
            }
            case 2:
            {
                printf("Mirando historial... \n");
                historia(w);
                system("pause");
                break;
            }
            case 3://FUNCION NUEVA
                printf("Buscando tu informacion...\n");
                Buscador();
                break;
            case 4:
            {
                printf("salir");
                salir(lis, e,c,w);
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
void menu2(tLista lis, tElem e, tElem c,tElem w)
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
               | 5-Mostrar lista                      |\n\
               | 6-Volver al menu principal           |\n\
               | 7-Salir                              |\n\
               ----------------------------------------\n");
        printf("Ingresa una opcion :" );
        scanf("%d",&opc);

		switch(opc)
		{
			case 1:
			{
			    system("cls");
				printf("Ingrese los valores a insertar: \n");
				e = nuevoElem();
				agregarFinal(&lis, e);
				printf("Valores agregado al final con exito\n");
				system("pause");
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
				system("pause");
				break;
			}
			case 4:
			{
			    system("cls");
				printf("Ingresa el elemento que deseas eliminar\n\n");
				e = nombreElim();
				eliminarElem(&lis, c);
				system("pause");
				break;
			}

			case 5:
			{
			    system("cls");
				printf("Mostrando la lista\n\n");
				mostrarLista(lis);
				system("pause");
				break;
			}
			case 6:
			{
			    system("cls");
				printf("Volviendo al menu principal\n");
				menu(lis, e,c,w);
				system("pause");
				break;
			}
			case 7:
			{
			    system("cls");
				salir(lis, e,c,w);
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
    fichero = fopen("Prueba7.txt", "a+");
    switch(paso)
    {
        case (1): ;
            //char cadena1 [] = "---_Horario_SIAPP_---\n\n";
            char cadena1 [10];               //MODIFICACION
            sprintf(cadena1, "%s", e.codigo);//MODIFICACION

            strcat(cadena1, "\n\n");         //MODIFICACION
            //char cadena2 [] = "Fracci?n:";
            //char cadena3 [] = "/";
            //char cadena4 [] = "\n";

            //archivo.writelines("===SIMPLIFICACI?N DE FRACCIONES===\n\n");
            //archivo.writelines("Fracci?n:"+ str(n)+ "/"+ str(d)+ "\n");

            fprintf (fichero, "%s", cadena1);
            fclose(fichero);

            break;
        case (2): ;           // Nombre: Eduardo de jesus quintero meza
            //                 |============================================================|====================|====================|\n
            //                 | Nombre:                                                    | Codigo:            | Edad:              |\n

            char cadenaa [] = "|============================================================|====================|====================|\n";
            char cadenab [] = "|_Nombre:_";
            char cadenaI [60];
            sprintf(cadenaI, "%s", e.nombre);
            char cadenac [] = "|_Codigo:_";
            char cadenaI2 [10];
            sprintf(cadenaI2, "%s", e.codigo);
            char cadenad [] = "|_Edad:_";
            char cadenaI3 [3];
            sprintf(cadenaI3, "%d", e.edad);
            char cadenae [] = "|\n";//60,20,20
            char cadenaA [] = "|============================================================|====================|====================|\n";
            char cadenaB [] = "|__________________________Materia___________________________|_______Horas________|________Dia_________|\n";
            char cadenaC [] = "|============================================================|====================|====================|\n";

            int divisoresA1;
            int vecesA1;
            int productoA1;

            int A1_1 = strlen(cadenaI);      //len(str(divisores))
            int A2_1 = strlen(cadenaI2);      //len(str(veces))
            int A3_1 = strlen(cadenaI3);      //len(str(producto))

            if (A1_1 < 51)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "materia"
            {
                divisoresA1 = 51 - (A1_1);
            }
            else
            {
                divisoresA1 = 0;
            }
            if ((A2_1) < 11)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "horas"
            {
                vecesA1 = 11 - (A2_1);
            }
            else
            {
                vecesA1 = 0;
            }
            if (A3_1 < 13)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "dia"
            {
                productoA1 = 13 - (A3_1);
            }
            else
            {
                productoA1 = 0;
            }

            char espacioA [] = "_";

            fprintf(fichero, "%s%s%s",cadenaa, cadenab, cadenaI);
            //archivo.writelines("|"+str(divisores));
            for (int A=0; A < divisoresA1; A++)
            {
                fprintf(fichero, "%s", espacioA);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", cadenac, cadenaI2);
            //archivo.writelines("|"+ str(veces));
            for (int B=0; B < vecesA1; B++)
            {
                fprintf(fichero, "%s", espacioA);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", cadenad, cadenaI3);
            //archivo.writelines("|"+ str(producto));
            for (int C=0; C < productoA1; C++)
            {
                fprintf(fichero, "%s", espacioA);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s", cadenae);
            //archivo.writelines("|\n");

            //archivo.writelines("|=========|==================|==========|\n");
            //archivo.writelines("| Divisor | Veces que se us? | Producto |\n");
            //archivo.writelines("|=========|==================|==========|\n");
            ////archivo.writelines("|123456789012345678901234567890123456789012345678901234567890|12345678901234567890|12345678901234567890|");

            fprintf (fichero, "%s%s%s", cadenaA, cadenaB, cadenaC);
            fclose(fichero);

            break;
        case (3): ;
            int divisoresA;
            int vecesA;
            int productoA;

            char linea [] = "|";
            char espacio [] = "_";
            char guion [] = "_-_";//guion separador de horas
            char linea_final [] = "\n";

            //----------------- Ingreso de fila 1 ------------------
            char cadenaA1 [60];
            sprintf(cadenaA1, "%s", e.materia1);
            char cadenaA2 [6];
            sprintf(cadenaA2, "%.2f", e.horaInicioo);//hora de inicio
            char cadenaA2_1 [6];
            sprintf(cadenaA2_1, "%.2f", e.horaFin);//hora de fin
            char cadenaA3 [15];
            sprintf(cadenaA3, "%s", e.diaMateria1);

            int A1 = strlen(cadenaA1);
            int A2 = strlen(cadenaA2);
            int A2_f= strlen(cadenaA2_1);
            int A2_2= A2 + A2_f;
            int A3 = strlen(cadenaA3);

            if (A1 < 60)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "materia"
            {
                divisoresA = 60 - (A1);
            }
            else
            {
                divisoresA = 0;
            }
            if ((A2) < (17))//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "horas"
            {
                vecesA = ((17) - (A2_2));
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
            //archivo.writelines("|"+str(divisores));
            for (int A=0; A < divisoresA; A++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s%s%s", linea, cadenaA2, guion, cadenaA2_1);//guarda las horas
            //archivo.writelines("|"+ str(veces));
            for (int B=0; B < vecesA; B++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, cadenaA3);
            //archivo.writelines("|"+ str(producto));
            for (int C=0; C < productoA; C++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, linea_final);
            //archivo.writelines("|\n");

            //-------------- Ingreso de fila 2 -------------------------
            char cadenaX1 [60];
            sprintf(cadenaX1, "%s", e.materia2);
            char cadenaX2 [6];
            sprintf(cadenaX2, "%.2f", e.horaInicio2);
            char cadenaX2_1 [6];
            sprintf(cadenaX2_1, "%.2f", e.horafin2);
            char cadenaX3 [15];
            sprintf(cadenaX3, "%s", e.diaMateria2);

            int X1 = strlen(cadenaX1);
            int X2 = strlen(cadenaX2);
            int X2_f= strlen(cadenaX2_1);
            int X2_2= X2 + X2_f;
            int X3 = strlen(cadenaX3);

            if (X1 < 60)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "materia"
            {
                divisoresA = 60 - (X1);
            }
            else
            {
                divisoresA = 0;
            }
            if ((X2) < (17))//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "horas"
            {
                vecesA = ((17) - (X2_2));
            }
            else
            {
                vecesA = 0;
            }
            if (X3 < 20)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "dia"
            {
                productoA = 20 - (X3);
            }
            else
            {
                productoA = 0;
            }
            fprintf(fichero, "%s%s", linea, cadenaX1);
            //archivo.writelines("|"+str(divisores));
            for (int A=0; A < divisoresA; A++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s%s%s", linea, cadenaX2, guion, cadenaX2_1);//guarda las horas
            //archivo.writelines("|"+ str(veces));
            for (int B=0; B < vecesA; B++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, cadenaX3);
            //archivo.writelines("|"+ str(producto));
            for (int C=0; C < productoA; C++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, linea_final);
            //archivo.writelines("|\n");
            //---------------------- Ingreso de fila 3 -------------------------
            char cadenaY1 [60];
            sprintf(cadenaY1, "%s", e.materia3);
            char cadenaY2 [6]; // hora de inicio
            sprintf(cadenaY2, "%.2f", e.horainicio3);
            char cadenaY2_1 [6];// hora final
            sprintf(cadenaY2_1, "%.2f", e.horafin3);
            char cadenaY3 [15];
            sprintf(cadenaY3, "%s", e.diaMateria3);

            int Y1 = strlen(cadenaY1);
            int Y2 = strlen(cadenaY2);
            int Y2_f= strlen(cadenaY2_1);
            int Y2_2= Y2 + Y2_f;
            int Y3 = strlen(cadenaY3);

            if (Y1 < 60)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "materia"
            {
                divisoresA = 60 - (Y1);
            }
            else
            {
                divisoresA = 0;
            }
            if ((Y2) < (17))//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "horas"
            {
                vecesA = ((17) - (Y2_2));
            }
            else
            {
                vecesA = 0;
            }
            if (Y3 < 20)//a partir de aqui, se establecen los espacios extras para alinear bien la tabla de "dia"
            {
                productoA = 20 - (Y3);
            }
            else
            {
                productoA = 0;
            }
            fprintf(fichero, "%s%s", linea, cadenaY1);
            //archivo.writelines("|"+str(divisores));
            for (int A=0; A < divisoresA; A++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s%s%s", linea, cadenaY2, guion, cadenaY2_1);//guarda las horas
            //archivo.writelines("|"+ str(veces));
            for (int B=0; B < vecesA; B++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, cadenaY3);
            //archivo.writelines("|"+ str(producto));
            for (int C=0; C < productoA; C++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, linea_final);
            //archivo.writelines("|\n");
            //----------------------------------------------------------
            fclose(fichero);

            break;
        case (4): ;
                            //linea final
            char inicio [] = "|============================================================|====================|====================|\n\n";

            fprintf(fichero, "%s", inicio);
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

	char nombreA[100];               //MODIFICACION
	char nombreB[100];               //MODIFICACION

	//No permitir que ingreses un nombre mayor a ciertos caracteres
	printf("Ingresa el nombre: \n");
	gets(nombreB);
	while(strlen(nombreB)>=99)
	{
		printf("Ha ingresado un nombre demasiado largo, ingresa uno mas corto\n");
		printf("Ingresa nuevamente el nombre: \n");
		gets(nombreB);
	}

		//MODIFICACION
	iniciales_mays(nombreA, nombreB);//MODIFICACION
	sprintf(e.nombre, "%s", nombreA);//MODIFICACION
	//gets(e.nombre);
	printf("Ingresa el codigo del alumno: \n");
	gets(e.codigo);

	while(strlen(e.codigo)>=10)
    {
        printf("Ha ingresado un numero mayor de caracteres a los permitidos\n");
        printf("Ingresa nuevmente el codigo del alumno: \n");
        scanf("%s",&e.codigo);
    }

	printf("Ingresa la edad del alumno %s: \n",e.nombre);
	scanf("%d",&e.edad);
	while(e.edad>100 || e.edad<0)
    {
        printf("Error \n");
        printf("Ingrese una edad valida, intente nuevamente:  ");
        scanf("%d",&e.edad);
    }

	//materia 1
	fflush(stdin);

	char materiaA_1[100];                  //MODIFICACION
	char materiaB_1[100];                  //MODIFICACION
	printf("Ingresa la materia numero 1:\n");
	gets(materiaB_1);                      //MODIFICACION
	while(strlen(materiaB_1)>=99)
	{
		printf("Ha ingresado un numero de caracteres mayor a los permitidos\n");
		printf("Ingresa nuevamente el nombre de la materia %s: \n",materiaB_1);
		gets(materiaB_1);
	}
	iniciales_mays(materiaA_1, materiaB_1);//MODIFICACION
	sprintf(e.materia1, "%s", materiaA_1); //MODIFICACION
	//gets(e.materia1);

	printf("Ingresa el dia de la materia %s:\n",e.materia1);
	gets(e.diaMateria1);

	printf("Ingresa la hora de inicio de la clase %s: \n",e.materia1);
	scanf("%f",&e.horaInicioo);
	while(e.horaInicioo<7||e.horaInicioo>19)
    {
        printf("Error \n");
        printf("Ingrese una hora valida:  ");
        scanf("%f",&e.horaInicioo);
    }
	e.horaFin = e.horaInicioo +2;	//materia 2
	fflush(stdin);

	char materiaA_2[100];                  //MODIFICACION
	char materiaB_2[100];                  //MODIFICACION
	printf("Ingresa la materia numero 2:\n");
	gets(materiaB_2);

	while(strlen(materiaB_2)>=99)
	{
		printf("Ha ingresado un numero de caracteres mayor a los permitidos\n");
		printf("Ingresa nuevamente el nombre de la materia %s: \n",materiaB_2);
		gets(materiaB_2);
	}
	//MODIFICACION
	iniciales_mays(materiaA_2, materiaB_2);//MODIFICACION
	sprintf(e.materia2, "%s", materiaA_2); //MODIFICACION
	//gets(e.materia2);

	printf("Ingresa el dia de la materia %s:\n",e.materia2);
	gets(e.diaMateria2);
	printf("Ingresa la hora de inicio de la clase %s: \n",e.materia2);
	scanf("%f",&e.horaInicio2);
	while(e.horaInicio2<7||e.horaInicio2>19)
    {
        printf("Error");
        printf("Ingrese una hora valida");
        scanf("%f",&e.horaInicio2);
    }

	e.horafin2 = e.horaInicio2+2;

	//materia 3
	fflush(stdin);
	char materiaA_3[100];                  //MODIFICACION
	char materiaB_3[100];                  //MODIFICACION
	printf("Ingresa la materia numero 3:\n");
	gets(materiaB_3);                      //MODIFICACION

	while(strlen(materiaB_3)>=99)
	{
		printf("Ha ingresado un numero de caracteres mayor a los permitidos\n");
		printf("Ingresa nuevamente el nombre de la materia %s: \n",materiaB_3);
		gets(materiaB_3);
	}

	iniciales_mays(materiaA_3, materiaB_3);//MODIFICACION
	sprintf(e.materia3, "%s", materiaA_3); //MODIFICACION
	//gets(e.materia3);

	printf("Ingresa el dia de la materia %s:\n",e.materia3);
	gets(e.diaMateria3);
	/*tolower(e.diaMateria3);
	while(e.diaMateria3 != "lunes", e.diaMateria3!= "martes",e.diaMateria3!= "miercoles",e.diaMateria3!= "jueves",e.diaMateria3!= "viernes",e.diaMateria3!= "sabado")
    {
        printf("Error, ingresa un dia valido(lunes-sabado)\n");
        printf("Ingresa nuevamente el dia de la materia %s:\n",e.materia3);
        gets(e.diaMateria3);
        tolower(e.diaMateria3);
    }*/

	printf("Ingresa la hora de inicio de la clase 3: \n");
	scanf("%f",&e.horainicio3);
	while(e.horainicio3<7||e.horainicio3>19)
    {
        printf("Error");
        printf("Ingrese una hora valida");
        scanf("%f",&e.horainicio3);
    }

	e.horafin3 = e.horainicio3+2;

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
	printf("|-------------------------------------------------------------------------------------------------|\n");
	printf("|Nombre del alumno: %s\n",e.nombre);
	printf("|Codigo del alumno: %s\n",e.codigo);
	printf("|Edad del alumno: %d\n",e.edad);

	printf("|-------------------------------------------------------------------------------------------------|\n");
	printf("|Materia numero 1: %s\n",e.materia1);
	printf("|Dia de la materia %s: %s\n",e.materia1,e.diaMateria1);
	printf("|Materia 1 Inicio de clases: %.1f	|	",e.horaInicioo);
	printf("|Materia 1 fin de clases: %.1f\n",e.horaFin);

	printf("|-------------------------------------------------------------------------------------------------|\n");
	printf("|Materia numero 2: %s\n",e.materia2);
	printf("|Dia de la materia %s: %s\n",e.materia2,e.diaMateria2);
	printf("|Materia 2 Inicio de clases: %.1f	|	",e.horaInicio2);
	printf("|Materia 2 fin de clases: %.1f\n",e.horafin2);

	printf("|-------------------------------------------------------------------------------------------------|\n");
	printf("|Materia numero 3: %s\n",e.materia3);
	printf("|Dia de la materia %s: %s\n",e.materia3,e.diaMateria3);
	printf("|Materia 3 Inicio de clases: %.1f	|	",e.horainicio3);
	printf("|Materia 3 fin de clases: %.1f \n\n\n",e.horafin3);
	printf("|-------------------------------------------------------------------------------------------------|\n");
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
tElem nombreElim()
{
    tElem c;
    fflush(stdin);
    printf("Ingresa el nombre del alumno a eliminar:\n");
    gets(c.nombre);


    return c;
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
			printf("Se ha eliminado el registro con exito!\n");
		}
		if(aux != NULL) //como aux se parara en el valor a eliminar, si aux llega a null quiede decir que no se encontro el valor
		{
			if(ant != NULL) //verificar si se movio el while es decir si no ant se queda valiendo NULL quiere decir que no se movio
			{
				ant->siguiente = aux->siguiente;  //mover los valores de el anterior a el siguiente de aux
				printf("Se ha eliminado el registro con exito!\n");
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
		printf("La lista esta vacia, no hay ningun elemento para eliminar\n");
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
void salir(tLista lis, tElem e,tElem c,tElem w)
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
		menu(lis, e,c,w);
	}
}


/*
int historia()
{
    system("cls");
    tElem w;
    FILE *fichero;
    fichero = fopen("Prueba7.txt","rb");
    if(fichero == NULL)
    {
        perror("Error en la apertura del archivo\n");
        return 1;
    }
    else
    {
        while(!feof(fichero))
        {

            fread(&w,sizeof(tElem),1,fichero);
            //fread()

        printf("%s\n",w.nombre);


        printf("\n");
            //printf("codigo: %s",w.codigo);
        }
        fclose(fichero);


    }
    fclose(fichero);

}
*/

int historia()
{
    system("cls");
    tElem w;
    FILE *fichero;
    fichero = fopen("Prueba7.txt","rb");
    if(fichero == NULL)
    {
        perror("Error en la apertura del archivo\n");
        return 1;
    }
    else
    {
        while(!feof(fichero))
        {
            printf("\n");
            fscanf(fichero, "%s", w.nombre);
            printf("%s", w.nombre);

            //fread()

        //printf("%s\n",w.nombre);


        //printf("\n");
            //printf("codigo: %s",w.codigo);
        }
    }
    fclose(fichero);
}

void Buscador()
{
    char sin_interes[1];
    gets(sin_interes);

    char textoExtraido[50];
    FILE* fichero;

    //LECTURA
    fichero = fopen("Prueba7.txt", "rt");

    char linea_1[110];//espacio

    char codigo[100];
    //char Ncodigo [100];
    char parte_final [] = "\n";
    printf("Ingresa tu codigo: ");
    gets(codigo);

    //iniciales_mays(codigo, Ncodigo);

    strcat(codigo, parte_final);//WARNING: es necesario agregar el \n a la comparacion para que sea efectiva

    /*busqueda del codigo de usuario*/
    int k = 0;
    while(!feof(fichero) && k == 0)
    {
        fgets(textoExtraido, 50, fichero);//Lectura del codigo de cabecera
        if (strcmp(textoExtraido, codigo)==0)//si el codigo ingresado es igual al del txt...
        {
            for (int l = 0; l < 11; l++)//sera imprimida su respectiva tabla (de 11 lineas)
            {
                fgets(linea_1, 110, fichero);
                printf("%s", linea_1);

                k = k + 1;//la condicion se romper?, para dejar de buscar
            }
        }
        else if (strcmp(textoExtraido, codigo)!=0)//si el codigo ingresado NO es igual al del txt...
        {
            for (int m = 0; m < 11; m++)//...seran recorridas las 11 lineas de la tabla y buscar? en la siguiente
            {
                fgets(linea_1, 110, fichero);
            }
        }
    }
    if (k == 0)//si no se encontro el codigo en el txt...
    {
        printf("No se encontraron datos\n");//...se mostrara esto en pantalla
    }

    fclose(fichero);
    printf("Proceso de lectura completado\n\n");

    system("pause");

    //return 0;
}

void iniciales_mays(char destino[], char fuente[])
{
    char caracter_anterior = fuente[0]; //letra actual
    int i;
    for (i=0; fuente[i] != '\0'; i++)   //para i si no llega al final del texto
        {
        if (caracter_anterior == ' ')   //si el caracter anterior es un espacio...
            destino[i] = '_';           //...sera reemplazado por un guion bajo
        else
            destino[i] = fuente[i];     //pero si no es un espacio, la letra se mantiene
        caracter_anterior = fuente[i+1];//la letra anterior ser? en la que se qued? al fin de este ciclo
    }
    destino[i] = '\0'; /* Marcamos el final de la cadena destino. */
}

//void liberar(tElem e)
//{
//    free(e);
//}
