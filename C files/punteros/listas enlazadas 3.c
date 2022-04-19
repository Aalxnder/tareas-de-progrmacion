#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nodo
{
    int NumAlumno;
	int cal;
	struct nodo* siguiente;
}NODO;

int bandera = 0;
int i;
//prototipos
NODO* crearnodo(int cal,int NumAlumno);
int ingresarAlumnos(void);
void menu(NODO* cabeza);
void menuBuscar(void);
int insertarinicio(NODO** cabeza, int cal, int NumAlumno);
void imprimir(NODO* cabeza);
int insertarAlInicio(NODO* cabeza);

int main(NODO*cabeza)
{
	system("color E0");

    menu(cabeza);

	system("pause");
	return 0;
}


void menu(NODO *cabeza)
{
    system("cls");
    int opc;
    do
    {

        printf("MENU\n[1] Registrar alumnos\n[2] Insertar un alumno al inicio\n[3] insertar alumno al final\n[4] Imprimir lista\n[5] Buscar\n");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
            {
                ingresarAlumnos();
                break;
            }
            case 2:
            {
                insertarAlInicio(cabeza);
                break;
            }
            case 3:
            {
                //InsertarAlFinal();
                break;
            }
            case 4:
            {
                imprimir(cabeza);
                break;
            }
            case 5:
            {
                //menuBuscar();
                break;
            }
            default:
            {
                printf("Opcion no valida\n");
                break;
            }
        }
    }while(opc!=345323);
}

void menuBuscar(void)
{
    system("cls");
    int opc;
    do
    {

        printf("Menu de busqueda\n[1] Buscar por matricula\n[2] buscar por calificacion\n");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
            {
                //buscarMat();
                break;
            }
            case 2:
            {
                //buscarCal();
                break;
            }
            default:
            {
                printf("Opcion no valida\n");
                break;
            }
        }
    }while (opc!= 345434);
}
int ingresarAlumnos(void)
{
    system("cls");
    int* Dato;
    int* alumno;
    int cant;
    NODO* nuevo;
    printf("Ingresa la cantidad de alumnos\n");
    scanf("%d",&cant);
    alumno = (int*)malloc(cant*sizeof(int));
    Dato = (int*)malloc(cant*sizeof(int));
    if(alumno==NULL||Dato==NULL)
    {
       perror("Error en la reserva de memoria dinamica\n");
       return 1;
    }
    else
    {
    for(i=0;i<cant; i++)
    {
        printf("ingresa la matricula del alumno\n");
        scanf("%d",&*(alumno+i));
        printf("Ingresa la calificacion\n");
        scanf("%d",&*(Dato+i));
        nuevo = crearnodo(Dato[i],alumno[i]);
        printf("La calificacion en la materia del alumno con la matricula %d es de %d\n",nuevo->NumAlumno,nuevo->cal);
    }
    bandera=1;
    }
}

int insertarAlInicio(NODO* cabeza)
{
    system("cls");
    if(bandera == 1)
    {

        int* Dato;
        int* alumno;
        int cant;

        NODO* cabeza = NULL;
        printf("Ingresa la cantidad de alumnos\n");
        scanf("%d",&cant);
        alumno = (int*)malloc(cant*sizeof(int));
        Dato = (int*)malloc(cant*sizeof(int));
        if(alumno==NULL||Dato==NULL)
        {
            perror("Error en la reserva de memoria dinamica\n");
            return 1;
        }
        else
        {
        for(i=0;i<cant; i++)
        {
            printf("ingresa la matricula del alumno\n");
            scanf("%d",&*(alumno+i));
            printf("Ingresa la calificacion\n");
            scanf("%d",&*(Dato+i));
            imprimir(cabeza);
        }

        }
    }
    else
    {
        printf("deberia añadir elementos a la struct primero\n");
        menu(cabeza);
    }
}

NODO* crearnodo(int cal,int NumAlumno)
{
	NODO* nuevo = NULL;
	nuevo = (NODO*)malloc(sizeof(NODO));

	if(nuevo == NULL)
	{
		perror("error en la asignacion de memoria\n");
		exit(-1);
	}
	else
	{
	    nuevo->cal = cal;
	    nuevo->NumAlumno = NumAlumno;
	    nuevo->siguiente = NULL;
		return nuevo;
	}
}


int insertarinicio(NODO** cabeza, int cal, int NumAlumno)
{
    NODO* nuevo = NULL;
    nuevo = crearnodo(cal,NumAlumno);

    if(nuevo != NULL)
    {
        nuevo->siguiente = *cabeza;
        *cabeza = nuevo;
        return 1;
    }
    else
    {
        return 0;
    }
}

void imprimir(NODO* cabeza)
{
    NODO *naux = cabeza;

    while(naux != NULL)
    {
        printf("%d\n",naux->cal);
        printf("%d\n",naux->NumAlumno);
        naux = naux->siguiente;
    }
}
