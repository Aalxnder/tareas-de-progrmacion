#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define numero_de_strings 0
#define maximo_de_caracteres 40

void error();
int clave();
void menuprod();
void menucompras();
void nuestros();
void regproduct();
void inventario();
void modificar();
void borrar();
void End();
void agrecarrito();
void vercarr();
int ticket();
int consulproduct();

int opcion,j=0, posprod=0;


struct tienda
{
    char nombre[20], codigo[10];
    int precio;
    int cantidad;
}PRODUCTO[100];


int main ()
{
    int opci, i;

    system ("color E0");

   do
   {
   system("cls");
   printf("\n\n  1 para ingresar como administrador\n\n");
   printf("  2 para ingresar a la tienda\n\n");
   printf("  3 para salir\n\n");

   printf("\nIngrese su opcion:");
   scanf("%d",&opci);

   system ("cls");

   switch(opci)
   {
       case 1:clave();
       break;

       case 2:menucompras();
       break;

       case 3:
       return 0;

       default:printf("\n Dato no valido:"),sleep(1);
   }
   }
   while(opci!=3);

   End();

   return 0;
}

int clave()
{
    int cont2=3,contra;
    int band=0;

    while (band==0 && cont2>0)
    {
        system("cls");
        printf("\n\n\tINGRESE EL CODIGO DE ACCESO\n");

        printf("\tIntentos restantes [%i]\n",cont2);
        scanf("%d", &contra);

        if (contra==2103)
        {
            band=1;
        }

        else
        {
            system("cls");
            printf("\n\n\n\n\t\tERROR"),sleep(1);
            cont2--;
        }
    }

    if (band==1)
    {
        menuprod();
    }

    else
    {
        system ("cls");
        printf("\n\n\tDEMASIADOS INTENTOS FALLIDOS\n\tCONSULTE A SU SUPERIOR\n\n");
        system ("pause");
    }
}

void menuprod()
{

 do
 {
   system("cls");

   printf(" 1  Nuestros productos\n\n");
   printf(" 2  Registrar productos \n\n");
   printf(" 3  borrar un producto\n\n");
   printf(" 4  modificar producto\n\n");
   printf(" 5  mostrar inventario\n\n");
   printf(" 6  buscar un producto \n\n");
   printf(" 7  volver al menu principal\n\n\n");

   printf("\nIngrese su opcion:");
   scanf("%d",&opcion);

   switch (opcion)
   {
       case 1:nuestros();
       break;

       case 2:regproduct();
       break;

       case 3:borrar();
       break;

       case 4:modificar();
       break;

       case 5:inventario();
       break;

       case 6:consulproduct();
       break;

       case 7:main();
       break;
  }
 }
while(opcion!=7);
}

void menucompras()
{
    do
    {
        system("cls");
        printf(" 1  Agregar productos al carrito \n\n");
        printf(" 2  Ver tu carrito de compras\n\n");
        printf(" 3  Finalizar la compra\n\n");
        printf(" 4  Menu principal\n\n");

        printf("\nIngrese su opcion:");
        scanf("%d",&opcion);

        switch (opcion)
        {
            case 1: agrecarrito();
            break;

            case 2: vercarr();
            break;

            case 3:ticket();
            break;

            case 4: main();
            break;

            default: error();}
    }
    while (opcion<=4);
}


void End()
{
    system("cls");
    printf("\n\nFin del programa....\n");
}


void regproduct()
{
     int op,i;

     system("cls");

     printf("\n\t\t INGRESO DE PRODUCTOS AL INVENTARIO \n");

    do
    {

        printf("\n\nProducto No. %d \n", j+1);

        printf("NOMBRE: \n");
        fflush(stdin),scanf("%[^\n]",&PRODUCTO[j].nombre);

        printf("CODIGO: \n");
        fflush(stdin),scanf("%[^\n]",&PRODUCTO[j].codigo);

        printf("PRECIO: \n"),scanf("%d",&PRODUCTO[j].precio);

        printf("CANTIDAD: \n"),scanf("%d",&PRODUCTO[j].cantidad);

        printf("\n\nDeseas agregar otro producto?\n1)Si.\n2)No.");
        scanf("%d",&op);

        j++;
        posprod++;
    }
    while (op!=2);

    system("pause");
}
int consulproduct(regproduct)
{
    int i, busqueda;
    int bandera = 0;//el valor no se enceuentra

    printf("Ingrese el numero del producto a consultar:");
    scanf("%d", &busqueda);

    //for (i=1; i<=posprod;i++)

    if (busqueda==posprod)
    {
        bandera = 1;//el dato fue encontrado
    }
    else if(bandera == 1)
    {
        printf("\nDATOS PRODUCTO %d\n\n\n",posprod);

        printf("\t NOMBRE %s \n",PRODUCTO[i].nombre);
        printf("\t CODIGO %s \n",PRODUCTO[i].codigo);
        printf("\t PRECIO %d \n",PRODUCTO[i].precio);
        printf("\t CANTIDAD %d \n\n\n",PRODUCTO[i].cantidad);
    }
    else if(bandera != 1)
    {
        printf("NO EXISTE PRODUCTO CON DICHO NUMERO\n");

        menuprod();
    }

    system ("pause");
}


void inventario()
{
    int i;

    system("cls");

    printf("\n\t PRODUCTOS EN INVENTARIO\n\n");

    for (i=0;i<j;i++)
        {
        printf("\t PRODUCTO %i\n\n", i+1);
        printf("\t NOMBRE %s \n",PRODUCTO[i].nombre);
        printf("\t CODIGO %s \n",PRODUCTO[i].codigo);
        printf("\t PRECIO %d \n",PRODUCTO[i].precio);
        printf("\t CANTIDAD %d \n\n\n",PRODUCTO[i].cantidad);
        }

    printf("\n\n");
    system("pause");
}


void borrar()
{
    int i;

    system("cls");
    printf("BORRAR\nCual de los %d elementos desea borrar?\n", j+1);

    for (i=0; i<j; i++)
    {
        printf("\n%10s...........%d\n", PRODUCTO[i].nombre, i+1);
    }

    printf("dame tu selecion \n");
    scanf("%d", &i);

    strcpy(PRODUCTO[i-1].nombre, "----");
    strcpy(PRODUCTO[i-1].codigo, "----");
    PRODUCTO[i-1].precio=0;
    PRODUCTO[i-1].cantidad=0;

    printf("\n\n\tHA SIDO ELIMINADO CORRECTAMENTE\n\n");
    system("pause");
}

void modificar()
{
    int i;
    system("cls");

    printf("MODIFICAR");

    for (i=0; i<j; i++)
    {
        printf("\n%10s...........%d\n", PRODUCTO[i].nombre, i+1);
    }

    printf("\n\ncual desea modificar\n ");
    scanf("%d", &i);

    printf("Nuevo NOMBRE del producto\n");
    fflush(stdin);
    scanf("%[^\n]",&PRODUCTO[i-1].nombre);

    printf("Nuevo CODIGO del producto\n");
    fflush(stdin);
    scanf("%[^\n]",&PRODUCTO[i-1].codigo);

    printf("Nuevo PRECIO del producto\n");
    scanf("%d",&PRODUCTO[i-1].precio);

    printf("Nueva CANTIDAD del producto\n\n");
    scanf("%d",&PRODUCTO[i-1].cantidad);

system("pause");
}


char nombre[numero_de_strings][maximo_de_caracteres] = {};
int cant[];
int costo[];
int total [];
int sizeA,totaly;


void agrecarrito()
{
    int i;
    int age[sizeA];

    printf("\n\t PRODUCTOS EN VENTA\n\n");

    for (i=0;i<j;i++)
    {
    printf("\t PRODUCTO %i\n\n", i+1);
    printf("\t NOMBRE %s \n",PRODUCTO[i].nombre);
    printf("\t CODIGO %s \n",PRODUCTO[i].codigo);
    printf("\t PRECIO %.d \n",PRODUCTO[i].precio);
    printf("\t CANTIDAD %d \n\n\n",PRODUCTO[i].cantidad);
    }

    printf("\n\n");
    printf("ingresa la cantidad de productos que deseas comprar:");
    scanf("%i",&sizeA);

    for (i=0;i<sizeA;i++)
    {
        fflush(stdin);
        printf("\n\nIngresa el nombre del producto:\n");
        gets(nombre[i]);
        printf("Ingresa la cantidad del producto\n");
        scanf("%d",&cant[i]);
        printf("Ingresa el costo del producto:\n");
        scanf("%d",&costo[i]);
    }

    system("pause");
}


void vercarr()
{
    int i;

    printf("\n\n\t TU CARRITO\n");
    printf("\n NOMBRE   |   CANTIDAD\n");

    for (i=0;i<sizeA;i++)
    {
        printf("\n %s........%d \n",nombre[i],cant[i]);
    }

    printf("\n\n\n");
    system("pause");
}

void cargando()
{
    printf("\n\n\n                                                    ENVIANDO/IMPRIMIENDO SU TICKET\n");
    Sleep(500);
    printf("                                                     .");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".\n\n");
    Sleep(500);
    printf("                                                   SU TICKET\n\n\n\n\n\n");
    Sleep(100);
    system ("pause");
    printf("\n\n\n\n");

    system ("cls");
}

int ticket()
{
    int i;

    system ("cls");

    cargando();

    for (i=0;i<sizeA;i++)
    {
        total[i] = costo[i]*cant[i];
        totaly += total[i];
    }

    printf("\n\tSU COMPRA FUE REALIZADA CON EXITO...\n\n\n");
    srand (time(NULL));
    printf("\tCODIGO DE COMPRA: %d\n", rand());
    printf("\n\n\n\tTOTAL A PAGAR: $%d\n\n\n",totaly);
    printf("\n DEPOSITAR A LA CUENTA: 1234567890\n\nUNA VEZ REALIZADO EL DEPOSITO CON EL MONTO ANTES INDICADO\n");
    printf("\n CONTACTARSE PARA ACORDAR DETALLES DE ENVIO CON:\n\n\n Daniel Sevilla\n TEL:336021\n EMAIL:dani.sev@gmail.com");
    printf("\n\n\n ..........AGRADECEMOS SU COMPRA\n\n\n..........\n\n\n");

    system ("pause");
}


void nuestros()
{
    system("cls");

    printf("\n\nNuestra empresa  tiene como objetivo lograr la satisfaccion del cliente, dandoles lo que necesitan al mejor precio.\n");
    printf("Por eso es que nuestra gente y nuestros productos son de lo mejor\n\n\n\n\n\n");

    system ("pause");
}


void error()
{
    system("cls");
    printf("\n\tDato invalido...");
    sleep(1);
}
