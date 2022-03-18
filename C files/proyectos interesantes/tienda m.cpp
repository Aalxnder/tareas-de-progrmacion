//proyecto de tienda con un munu para cliente donde podras adquirir los productos ingresados desde el menu de admin
//librerias necesarias
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#define cuponValido 0.90
//variables globales
int passw = 2187;
int codigoi = 0;
int posprod = 0;
int j = 0;
char nombrec [20];
//variable del cupon 
char ccupon[15] = "cr7siuuu"; //codigo del cupon
char cuponUser[15]; //lo que el usuario digite
//float paga[100];

//prototipos de funciones
void menu(void);
int contra(void);
void menuadm(void);
void salir(void);
void cambiar_contra(void);
void registrar(void);
void mostrar(void);
void acerca_de(void);
void eliminar(void);
void menucliente(void);
void tomar(void);
void vercar(void);
void pago(void);
int ticket(void);
void cupon (void);

//struct para almacenar los datos de los productos
struct tienda
{
	char nombre[20];
	int codigo;
	float precio;
	int cantidad;
	float costot;
	float promediot;
}
producto[30];

//funcion principal donde se hara la llamada a las demas funciones
int main()
{
	system("color E0");
	menu();
	
	
	return 0;
}


//funcion para mostrar el menu principal
void menu()
{
	int opc;
	system("cls");
	do
	{
		//menu principal opciones
	printf("Ingrese una opcion\n\n");
	printf("Menu Principal\n");
	printf("[1] Menu de administrador\n");
	printf("[2] Menu de cliente\n");
	printf("[3] Salir\n\n");
	
	printf("digite su opcion\n");
	scanf("%d",&opc);

	switch(opc)
	{
		case 1:
		{
			Sleep(500);
			contra();
			break;
		}
		case 2:
		{
			Sleep(500);
			menucliente();
			break;
		}
		case 3:
		{
			Sleep(500);
			salir();
			break;
		}
		default:
		{
			Sleep(500);
			printf("opcion no disponible");
			break;
		}
		
	}
	}while (opc != 3);	
}


//funciones de el menu de admin
//funcion para revisar la contraseña para ingresar al menu de admin
int contra()
{
	//variable para guardar la contraseña ingresada por el usuario y verificarla
	int passa;
	int intentos = 3;
	system("cls");
	Sleep(500);
	printf("tendra 3 intentos para escribir la contraseña, de lo contrario el programa se cerrara\n");
	Sleep(500);
	printf("ingrese la contraseña:\n>");
	scanf("%d", &passa);
	while(intentos >0)
	{
	//si contraseña es correcta entonces pasa al menu de admin
	if (passa == passw)
	{
		printf("contraseña correcta!\n");
		Sleep(500);
		menuadm();
	}
	//si la contraseña es incorrecta los intentos bajaran y si llegan a 0 el programa se cerrara
	else
	{
		system("cls");
		printf("contraseña incorrecta, ingrese de nuevo la contraseña\n");
		printf("sus intentos restantes son %d\n",intentos);
		printf("ingrese la contraseña; \n");
		scanf("%d", &passa);
		intentos = intentos - 1;
		if(intentos == 0)
		{
			printf("demasiados intentos fallidos, cerrando el programa por seguridad\n");
			exit(-1);
		}
	}
	}	
}


//funcion para el menu de admin
void menuadm()
{
	int opc2;
	system("cls");
	Sleep(500);
	do
	{
	printf("Menu admin\n");
	printf("[1] Registrar productos\n");
	printf("[2] Visualizar productos\n");
	printf("[3] Eliminar productos\n");
	printf("[4] cambiar contraseña\n");
	printf("[5] Acerca de\n");
	printf("[6] Volver al menu principal\n");
	
	printf("ingrese una opcion\n");
	scanf("%d",&opc2);
	//opciones
	switch(opc2)
	{
		case 1:
		{
			Sleep(500);
			printf("registrar productos\n");
			registrar(); // llamada a la funcion registrar productos
			break;
		}
		case 2:
		{
			Sleep(500);
			printf("visualizar productos\n");
			mostrar(); //llamada a la funcion mostrar productos
			break;
		}
		case 3:
		{
			Sleep(500);
			printf("Eliminar productos\n");
			eliminar();
			break;
		}
		case 4:
		{
			Sleep(500);
			cambiar_contra();
			break;
		}
		case 5:
		{
			Sleep(500);
			system("cls");
			acerca_de();
			break;
		}
		case 6:
		{
			Sleep(500);
			printf("volviendo al menu principal");
			Sleep(2000);
			menu();	
			break;
		}	
		
		default:
		{
			Sleep(500);
			printf("opcion no valida\n");
			break;
		}		
	}
	}while(opc2 != 7);
}


//funcion de salir del programa
void salir(void)
{
	int s;
	system("cls");
	printf("realmente desea salir del programa?\n\n");
	//pedirle al usuario si desea salir
	printf("presione 0 para finalizar\nO cualquier otro numero para permanecer en el programa\n>");
	scanf("%d",&s);
	//si elije 0 se acaba el programa con la funcion exit(-1) y si no no sale
	if(s == 0)
	{
		Sleep(500);
		printf("ha decidido salir del programa de salir\n");
		exit(-1);
	}
	else
	{
		Sleep(500);
		printf("usted ha decidido permanecer en el programa\n");
		menu();
	}
}


//funcion para cambiar la contraseña de ingreso a admin actual
void cambiar_contra(void)
{
	int ncontra,password;
	int intentos =3;
	//limpiar pantalla
	system("cls");
	//pedir la antigua contraseña
	printf("tiene 3 intentos para ingresar la contraseña correcta\nDe lo contrario el sistema se cerrara por cuestiones de seguridad\n\n");
	printf("ingrese la contraseña antigua para poder cambiar la contraseña\n>");
	scanf("%d",&password);
	//mientras la contraseña anterior ingresada sea diferente a la conraseña actual 
	while (password != passw)
	{
		//se restara un intento al contador 
		intentos = intentos-1;
		Sleep(500);
		system("cls");
		//se mostraran los intentos
		printf("error, sus intentos restantes son %d\nIngrese la contraseña correcta\n",intentos);
		Sleep(500);
		printf("ingrese la contraseña antigua para poder cambiar la contraseña\n>");
		scanf("%d",&ncontra);
		//si los intentos llegan a 0 se ejecuta esta sentencia y se cierra el programa
		if (intentos == 0)
		{
			printf("demasiados intentos fallidos\n");
			Sleep(500);
			printf("cerrando programa por cuestiones de seguridad\n");
			exit(-1);
		}
	}
	//si la contraseña ingresada en el apartado contraseña anterior ingresada es igual a la contraseña actual se ejecuta esta sentencia
	if(password=passw);
	{
		Sleep(500);
		printf("ingrese la nueva contraseña\n");
		scanf("%d",&ncontra);
		//esta linea hace el cambio de contraseña
		passw=ncontra;
		Sleep(500);
		printf("la contraseña ha cambiado\n");
	}
	menuadm();
}


//funcion para llenar los productos disponibles
void registrar(void)
{

	int i;
	system("cls");
	int opc3;
	do
	{
		//limpiar memoria para rellenar la struct
		fflush(stdin);
		//ingresar y leer productos
		printf("ingresa el nombre del producto %d\n",j);
		gets(producto[j].nombre);
		//ingresar y leer el codigo
		printf("ingresa el codigo del producto %s\n",producto[j].nombre);
		scanf("%d",&producto[j].codigo);
		//ingresar y leer precio
		printf("ingresa el precio del producto %s\n",producto[j].nombre);
		scanf("%f",&producto[j].precio);
		while(producto[j].precio < 0)
		{
			printf("---Error--- Ingrese un precio valido\n");
			Sleep(500);
			printf("ingresa el precio del producto %s\n",producto[j].nombre);
			scanf("%f",&producto[j].precio);
		}
		//ingresar y leer cantidad
		printf("ingresa la cantidad del producto %s\n",producto[j].nombre);
		scanf("%d",&producto[j].cantidad);
		while (producto[j].cantidad  < 0)
		{
			printf("error, ingrese una cantidad valida\n");
			printf("ingresa la cantidad del producto %s\n",producto[j].nombre);
			scanf("%d",&producto[j].cantidad);
		}
		printf("desea ingresar otro producto?\n");
		printf("ingrese 1) para si o 2) para no\n");
		scanf("%d",&opc3);
		j++;
		posprod++;
		system("cls");
	}while (opc3 != 2);
	system("cls");
	menuadm();
}


//funcion para mostrar los productos;
void mostrar(void)
{
	int i;
	system("cls");
	printf("\tProductos registrados\n");
	//ciclo para imprimir el producto en la posicion i hasta la cantidad que haya 
	for(i=0;i<j;i++)
	{
		//mostrar productos de la struck
		printf("\t PRODUCTO %d\n\n\n", i);
        printf("\t Nombre %s \n",producto[i].nombre);
        printf("\t Codigo %d \n",producto[i].codigo);
        printf("\t Precio %.1f \n",producto[i].precio);
        printf("\t Cantidad %d \n\n",producto[i].cantidad);
	}
	system("pause");
}


//funcion de acerca de, donde se muestran los datos de el que hizo el codigo, o sea yo
void acerca_de(void)
{
	Sleep(500);
	printf("acerca de...\n");
	Sleep(500);
	printf("proyecto de simulacion de una tienda online donde desde la opcion de el menu de admin se pueden\n");
	Sleep(500);
	printf("registrar productos y desde el menu de compras puedes adquirir los productos ya agregados\n");
	Sleep(500);
	printf("proyeto creado por levi alexander perez elizondo\n");
	Sleep(500);
	printf("Fecha de elaboracion: sabado primero de enero del 2022\n");
	Sleep(500);
	printf("gracias por visualizar esta parte\n");
	Sleep(500);
	printf("si te has tomado la molestia de acceder a este apartado \nfelicidades, te has ganado un cupon de descuento en tu compra ingresando el codigo 'cr7siuuu' a la hora de pagar\n");
	getch();
	menuadm();
}


//funcion de eliminar datos
void eliminar()
{
	int elim;
	int i;
	printf("Productos disponibles");
	mostrar(); //llamar a la funcion mostrar 
	
	printf("elije el numero de el producto que deseas eliminar\n");
	scanf("%d",&i);
	Sleep(500);
	
	printf("realmente deseas eliminar el producto %d?\n",i);
	printf("presiona 1) para si o 2) para no.\n");
	scanf("%d",&elim);
	
	if (elim == 1)
	{
		strcpy(producto[i].nombre,"Producto eliminado");
		producto[i].codigo=0;
		producto[i].precio=0.0;
		producto[i].cantidad=0;
		Sleep(500);
		printf("el producto ha sido eliminado exitosamente!!\n");
		getch();
	}

	else
	{
		Sleep(500);
		printf("regresando al menu de administrador\n");
		Sleep(500);
		menuadm();
	}
	menuadm();
}

//menu de cliente
void menucliente(void)
{
	int opc4;
	system("cls");
	//ciclo do para que se muestre el menu repetidas veces al menos una vez
	do
	{
	printf("Menu de Cliente\n");
	printf("[1] Mostrar productos disponibles\n");
	printf("[2] Tomar productos\n");
	printf("[3] Ver carrito\n");
	printf("[4] Ticket de compra\n");
	printf("[5] Volver al menu principal\n");
	
	printf("elija una opcion\n ");
	scanf("%d",&opc4);
	
	switch(opc4)
	{
		case 1:
		{
			//printf("Mostrar productos disponibles\n");
			mostrar();
			break;
		}
		case 2: 
		{
			printf("tomar productos\n");
			tomar();
			break;
		}
		case 3:
		{
			printf("ver carrito\n");
			vercar();
			break;
		}
		case 4:
		{
			printf("pagar\n");
			pago();
			break;
		}
		case 5:
		{
			Sleep(500);
			printf("volviendo al menu principal");
			Sleep(2000);
			menu();
			break;
		}
		default: 
		{
			printf("opcion no valida\n");
			break;
		}
	}
	}while(opc4 != 5);
	system("cls");
}

//arreglos globales para la funcion 
char nombre[20][20] = {};
int costo [100];
int cant [100];
int total [100];
int sizeA,totaly;
//funcion para tomar productos a el carrito
void tomar(void)
{
	int i;
	system("cls");
	printf("productos en venta\n");
	mostrar();
	//limpiar memoria
	fflush(stdin);
	printf("ingresa tu nombre\n");
	gets(nombrec);
	//ingresar la cantidad de productos que se compraran
	printf("ingresa la cantidad de productos distintos que deseas comprar:\n");
	scanf("%d",&sizeA);
	/*si la cantidad de productos diferentes que ingresa el usuario es mayor a la  cantidad de productos diferentes que hay
	se ejecuta este bucle hasta que se introduce una cantidad que si exista*/
	while (sizeA > j)
	{
		printf("no hay suficientes productos en el inventario\nIngrese una nueva cantidad\n");
		printf("ingresa la cantidad de productos distintos que deseas comprar:\n");
		scanf("%d",&sizeA);
	}
	
	for(i=0;i<sizeA;i++)
	{
		fflush(stdin);
		printf("ingresa el nombre de el producto\n");
		gets(nombre[i]);
		//bucle while para asegurarse que se ingrese un nombre de un producto que si exista mediante la funcion strcmp
		while(strcmp(producto[i].nombre,nombre[i]) != 0)
		{
			printf("---Error---\nEl producto no existe, ingrese un producto valido:\n");
			gets(nombre[i]);
		}
		printf("ingresa la cantidad del producto :\n");
		scanf("%d",&cant[i]);
		//ciclo por si se introducen rangos de cantidades no validos
		while(cant[i] > producto[i].cantidad || cant[i]<0)
		{
			printf("error, ingrese una cantidad correcta\n");
			printf("ingresa la cantidad del producto :\n");
			scanf("%d",&cant[i]);
		}
		//esta sentencia va disminuyendo los productos que agarres a los que ya habia
		producto[i].cantidad = producto[i].cantidad - cant[i];
		
		printf("ingresa el costo de el producto :\n");
		scanf("%d",&costo[i]);
		//rango por si no se introduce el precio correcto
		while(costo[i] != producto[i].precio)
		{
			printf("error, ingrese un costo correcto\n");
			printf("ingresa el costo del producto\n");
			scanf("%d",&costo[i]);
		}
		system("cls");
	}
	system("cls");
	system("pause");
	menucliente();
}


//funcion para ver los productos que has agarrado
void vercar(void)
{
	int i;
	system("cls");
	printf("Carrito de compras del cliente %s\n",nombrec);
	printf("Nombre\t|   Cantidad   |   Precio   |\n");
	for (i=0;i<sizeA;i++)
	{
		printf("%s\t|\t%d    |\t%d    |\n",nombre[i],cant[i],costo[i]);
	}
	printf("estos son sus productos\n\n\n");
	system("pause");
}

//funcion de pago que simula como un tipo ticket

void pago(void)
{
	//variables para esta funcion
	char nombreM[30];
	char nombrem[30];
	float menor = 10001;
	float mayor = 0;
	system("cls");
	printf("tus productos\n");
	int i;
	vercar(); //llamar a la funcion vercar para mostrarte que es lo que llevas

	
	for (i=0;i<sizeA;i++)
	{
		//calcular el costo de los productos
		producto[i].costot = (cant[i]*costo[i]);
		printf("el costo del producto %s es de %.1f\n",nombre[i],producto[i].costot);
	}

	//calcular cual es el producto de menor y mayor precio
	for (i=0;i<sizeA;i++)
	{
		if (producto[i].costot > mayor)
		{
			mayor = producto[i].costot;
			strcpy(nombreM,producto[i].nombre);
		}
		if (producto[i].costot < menor)
		{
			menor = producto[i].costot;
			strcpy(nombrem,producto[i].nombre);
		}
	}
	//mostrar el mayor y el menor de los productos elegidos
	printf("el producto de mayor costo es el producto %s con un costo de %.1f\n",nombreM, mayor);
	printf("el producto de menor costo es el producto %s con un costo de %.1f\n",nombrem, menor);
	//llamar a la funcion para calcular el total a pagar
	ticket();
	cupon(); //llamar a la funcion cupon para aplicar el descuento en caso de que se tenga el cupon 
	 
	printf("Para dudas y aclaraciones favor de comunicarse con el creador del codigo\n");
	printf("o sea yo, levi alexander perez elizondo\n");
	printf("gracias por su compra\n");
	getch();
	menucliente();
}


//funcion mostrar el ticket 
int ticket(void)
{
	int i;
	//calcular el total de los productos
	for (i=0;i<sizeA;i++)
	{
		total[i] = costo[i]*cant[i];
		totaly += total[i];
	}
	//generacion de numeros random
	printf("\n\tSU COMPRA FUE REALIZADA CON EXITO...\n\n\n");
    srand (time(NULL));
    printf("\tCODIGO DE COMPRA: %d\n", rand());
    printf("\n\n\n\tTOTAL A PAGAR: $%d\n\n\n",totaly);
   
}
//funcion para aplicar un descuento si el usuario tiene un cupon de descuento
void cupon(void)
{
	int tieneCupon;
	//preguntar si tiene cupon
	printf("\ntiene un cupon de descuento?\nSi = 1\nNo = 0\n");
	scanf("%d",&tieneCupon);
	
	//si no tiene cupon
	if(tieneCupon == 0)
	{
		printf("tu no tienes ningun cupon de descuento, debes pagar el monto completo\n");
		
	}
	else if (tieneCupon == 1)
	{
		printf("digite su cupon\n");
		scanf("%s",&cuponUser); //almacernar el cupon del usuario
		//condicional anidado para comparara ambos cupones
		if(strcmp(ccupon,cuponUser) == 0) //coinciden y aplicamos el descuento
		{
			float descuento;
			Sleep(500);
			printf("Enhorabuena!!!\n");
			Sleep(500);
			printf("tu descuento ha sido aplicado!\nGracias por su compra\n");
			descuento = totaly*cuponValido; //aplicamos el 10 % de descuento
			printf("tu cantidad total a pagar ahora es de: %.1f\n",descuento);
		}
	}
	else
	{
		printf("opcion no disponible\n");
		
	}
}
