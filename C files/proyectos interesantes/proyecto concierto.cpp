#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))
#define n 100
#define N 9
//variables globales
int filas, columnas;
int j=0,k=0;
int boletos[1000][1000];
int passw = 2187;
int codigoi=0;
int ncont;
int comprobacion=0;
char nombrec[30];
int comprobar1=0;
//prototipos de funcion
void registrar(void);
void ver(void);
void mostrara(void);
void menu(void);
void salir(void);
void contra(void);
void menuadm(void);
void modificar(void);
void eliminar(void);
void cambiarcontra(void);
void olvido(void);
void acercade(void);
void comp(void);
void menucliente(void);
void comprar(void);
//estructura de arrays
struct concierto
{
	char nombre[30];
	float precio;
	int dia,mes,ao;	
}conciertos[30];

//estructura de matrices
struct asiento
{
	int vacio;
	int asi;
}asientos[6][6];


int main()
{
	system("color E0");
	menu();
	system("pause");
	return 0;
}
//funcion menu
void menu(void)
{
	system("cls"); //limpiar pantalla
	//variable para elegir opcion
	int opc;
	//ciclo do while para repetir el menu al menos una vez
	do
	{
		printf("[1] menu de admin\n");
		printf("[2] menu de cliente\n");
		printf("[3] salir\n");
		scanf("%d",&opc);
		//switch para tomar la opcion leida
		switch(opc)
		{
			case 1:
			{
				contra();
				break;
			}
			case 2:
			{
				comp(); //menucliente();
				break;
			}
			case 3:
			{
				salir();
				break;
			}
			default:
			{
				printf("opcion no disponible\n");
				system("pause");
				break;
			}
		}
	}while(opc!=4);
}

//funcion para registrar la informacion del concierto
void registrar(void)
{
	system("cls");
	int i,opc2;
	//ciclo do while oara registrar productos de segun si el usuario escribe si o no repitiendo el ciclo al menos una vez
	do
	{
		fflush(stdin); //limpiar el buffer de memoria
		//ingresar los datos al struct de datos
		printf("ingresa el nombre de la banda que dara el concierto\n");
		gets(conciertos[j].nombre);
		printf("ingresa el costo de los boletos del concierto de %s\n",conciertos[j].nombre);
		scanf("%f",&conciertos[j].precio);
		while(conciertos[j].precio<=0)  //estos bucles son por si se ingresan datos erroneos
		{
			Sleep(500);
			printf("Error, este apartado no puede ser menor a 0:\n");
			printf("ingresa el costo de los boletos del concierto de %s\n",conciertos[j].nombre);
			scanf("%f",&conciertos[j].precio);
		}
		printf("ingresa el dia del concierto\n");
		scanf("%d",&conciertos[j].dia);
		while(conciertos[j].dia>31 || conciertos[j].dia<=0)
		{
			Sleep(500);
			printf("Error, ingresa un dia valido:\n");
			printf("ingresa el dia del concierto\n");
			scanf("%d",&conciertos[j].dia);
		}
		printf("ingresa el mes del concierto\n");
		scanf("%d",&conciertos[j].mes);
		while(conciertos[j].mes>12 || conciertos[j].mes<=0)
		{
			Sleep(500);
			printf("Error, ingrese un mes valido:\n");
			printf("ingresa el mes del concierto\n");
			scanf("%d",&conciertos[j].mes);
		}
		printf("ingresa el año del concierto\n");
		scanf("%d",&conciertos[j].ao);
		while(conciertos[j].ao<=2021)
		{
			Sleep(500);
			printf("Error, ingrese un año valido:\n");
			printf("ingresa el año del concierto\n");
			scanf("%d",&conciertos[j].ao);
		}
		fflush(stdin);   //limpiar el buffer 
		//generar la matriz en la struct de matriz y igualarla a 0
		for(i=0;i<6;i++)
		{
			for(k=0;k<6;k++)
			{
				asientos[i][k].asi=0; //igualar la matriz a 0
			}
		}
		printf("desea ingresar un nuevo registro de un concierto?\n[1] Si\n[2] No\n");
		scanf("%d",&opc2); //capturar si se quiere realizar un nuevo registro, si es asi se repite el bucle si no acaba
		j++; //aumentar el contador de j
		comprobacion=1; //cambiar el estado de comprobacion para poder acceder al menu de cliente
		system("cls");
	}while(opc2 != 2);
	system("pause");
	menuadm();
}
//funcion para ver los conciertos registrados 
void ver(void)
{
	int i;
	system("cls");
	for (i=0;i<j;i++)
	{
		printf("Nombre:\t %s\n\n",conciertos[i].nombre);
		printf("precio del boleto:\t %.1f\n\n",conciertos[i].precio);
		printf("fecha del concierto\n");
		printf("Dia: %d ",conciertos[i].dia);
		printf("mes: %d ",conciertos[i].mes);
		printf("año: %d\n\n",conciertos[i].ao);
		mostrara(); //llamamos a la funcion que nos mostrara la matriz de los asientos correspondientes
	}
	printf("\n");

}
//funcion que mostrara la matriz 
void mostrara(void)
{
	int i;
	printf("asientos disponibles:\n");
	printf("Simbologia:\n[0] asiento disponible\n[1] Asiento ocupado\n\n");
	for(i=0;i<6;i++) //recorrer la matriz
	{
		for(k=0;k<6;k++)
		{
			printf("%d ",asientos[i][k].asi); //mostrar los asientos disponibles
		}
		printf("\n");
	}
}
void salir(void)
{
	int s;
	char opcion [10];
	system("cls");
	printf("ha oprimido la opcion de finalizar el programa\n");
	Sleep(1000);
	printf("Ingresa 0 para terminar el programa o cualquier otro numero para permanecer\n");
	gets(opcion);
	s=atoi(opcion); //convertir el valor string a entero
	Sleep(1000);
	if(s==0) //si el usuario ingresa el 0 se acaba el programa
	{
		printf("usted ha decidido permanecer finalizar el programa\n");
		exit(-1); //el exit es lo que realmente finaliza el programa
		system("pause");
	}
	else
	{
		printf("usted ha decidido permanecer en el programa\n");
		system("pause");
		menu(); //volvemos al menu principal en caso de que no se haya oprimido el 0
	}
}
void contra(void)
{
	int passa; //declaro la variable qwue contendra lo tecleado por el usuario
	char ccontra[10]; //cadena para almacenar el valor antes de convertirlo a entero
	int intentos=3; //declaro intentos disponibles
	system("cls");
	Sleep(1000);
	printf("tendra 3 intentos para poner la contraseña correcta\nDe lo contrario el programa se cerrara por cuestiones de seguridad\n");
	Sleep(500);
	printf("ingrese la contraseña:\n");
	scanf("%d",&passa);
	while(intentos>0) //bucle que se repetira mientras los intentos sean mayores a 0
	{
		//si el valor digitado por el usuario es igual a el que esta en la contraseña de admin se ejecuta este if
		if(passa==passw)
		{
			Sleep(1000);
			printf("contraseña correcta\n");
			system("pause");
			menuadm(); //si el valor fue correcto nos lleva al menu admin
		}
		//si el intento al colocar la contraseña fallo
		else
		{
			system("cls");
			printf("contraseña incorrecta\n");
			intentos= intentos-1; //restamos los intentos
			printf("sus intentos restantes son %d\n",intentos); //muestro los intentos disponibles
			printf("ingrese la contraseña:\n");
			scanf("%d",&passa);
			//gets(ccontra); //leo la variable como string 
			//passa=atoi(ccontra); //la convierto a entero
			if(intentos==0) //si los intentos llegan a 0 me saca del programa 
			{
				Sleep(500);
				printf("demasiadoas intentos fallidos, cerrando el programa por cuestiones de seguridad\n");
				exit(-1);
			}
		}
	}
}

//funcion del menu admin
void menuadm(void)
{
	int opc3;
	system("cls");
	do
	{
		//opciones disponibles
		printf("Menu de administrador\n\n");
		printf("[1] Registrar conciertos\n");
		printf("[2] Mirar conciertos disponibles\n");
		printf("[3] Modificar la informacion de un concierto\n");
		printf("[4] Cambiar contraseña de menu de administrador\n");
		printf("[5] Eliminar registros de un concierto\n");
		printf("[6] Acerca de\n");
		printf("[7] volver al menu principal\n");
		scanf("%d",&opc3);
		switch(opc3)
		{
			case 1:
			{
				registrar();
				break;
			}
			case 2:
			{
				ver();
				break;
			}
			case 3:
			{
				modificar();
				break;
			}
			case 4:
			{
				cambiarcontra(); //cambiar_contra();
				break;
			}
			case 5:
			{
				eliminar();//Eliminar();
				break;
			}
			case 6:
			{
				acercade(); //Acercade();
				break;
			}
			case 7:
			{
				menu();
				system("pause");
				break;
			}
			default:
			{
				printf("opcion no disponible\n");
				system("pause");
				break;
			}
		}
	}while(opc3 != 8);
}
void modificar(void)
{
	int i;
	char mod[10];
	system("cls");
	printf("conciertos disponibles\n");
	ver(); //lamar a la fucion q muestra los productos
	//ingresar que numero de concierto vamos a modificar
	printf("\ningrese el numero del concierto que desea modificar:\n");
	scanf("%d",&i);
	Sleep(500);
	//agregar nuevos datos

    printf("Nuevo NOMBRE de la banda\n");
    fflush(stdin);
    scanf("%[^\n]",&conciertos[i].nombre);

    printf("Nuevo precio del boleto\n");
    fflush(stdin);
    scanf("%f",&conciertos[i].precio);
    while(conciertos[i].precio<=0)
	{
		Sleep(500);
		printf("Error, este apartado no puede ser menor a 0:\n");
		printf("ingresa el costo de los boletos del concierto de %s\n",conciertos[j].nombre);
		scanf("%f",&conciertos[i].precio);
	}

    printf("Nueva dia del concierto\n");
    scanf("%d",&conciertos[i].dia);
	while(conciertos[i].dia>31 || conciertos[i].dia<=0)
	{
		Sleep(500);
		printf("Error, ingresa un dia valido:\n");
		printf("ingresa el dia del concierto\n");
		scanf("%d",&conciertos[i].dia);
	}
    printf("Nuevo mes del concierto\n");
    scanf("%d",&conciertos[i].mes);
    while(conciertos[i].mes>12 || conciertos[i].mes<=0)
	{
		Sleep(500);
		printf("Error, ingrese un mes valido:\n");
		printf("ingresa el mes del concierto\n");
		scanf("%d",&conciertos[i].mes);
	}
    printf("Nuevo año del concierto\n");
    scanf("%d",&conciertos[i].ao);
	while(conciertos[j].ao<2022)
	{
		Sleep(500);
		printf("Error, ingrese un año valido:\n");
		printf("ingresa el año del concierto\n");
		scanf("%d",&conciertos[j].ao);
	}
	fflush(stdin);
}


//funcion para eliminar la informacion de un concierto de un registro
void eliminar(void)
{
	int elim,i;
	system("cls");
	Sleep(500);
	printf("Eliminar productos\n");
	Sleep(500);
	printf("Productos disponibles");
	ver(); //llamar a la funcion de mostrar productos
	printf("Ingresa el numero de el concierto que deseas eliminar\n");
	scanf("%d",&i); //variable que almacenara la variable i
	while(i>j)
	{
		printf("Error, no existe un concierto con dicho numero\n");
		printf("Ingresa el numero de el concierto que deseas eliminar\n");
		scanf("%d",&i); //variable que almacenara la variable i
	}
	Sleep(500);
	printf("realmente deseas eliminar el producto %d?\n",i);
	printf("presiona [1] Si\n[2] No\n");
	scanf("%d",&elim);
	if(elim == 1)
	{
		strcpy(conciertos[i].nombre, "concierto cancelado\n");
		conciertos[i].precio = 0.0;
		conciertos[i].dia = 0;
		conciertos[i].mes = 0;
		conciertos[i].ao = 0;
		Sleep(500);
		printf("El producto se ha eliminado con exito, para visualizar los cambios recargue la opcion de ver conciertos\n");
		system("pause");
	}
	else
	{
		Sleep(500);
		printf("Ha decidido no eliminar ningun producto\n");
		Sleep(500);
		printf("regresando al menu de administrador...\n");
		Sleep(500);
		system("pause");
		menuadm();
	}
	menuadm();
}

//funcion para cambiar la contraseña
void cambiarcontra(void)
{
	Sleep(500);
	int intentos=3;
	int contra,ncontra;
	printf("Para cambiar la contraseña es necesario ingresar la contraseña anterior\n");
	printf("tiene 3 intentos para ingresar la contraseña correcta, de lo contrario el programa se cerrara\n");
	Sleep(500);
	printf("ingrese la antigua contraseña\n"); //pedir la antigua contraseña y guardarla en la variable contra
	scanf("%d",&contra);
	while(contra != passw) //si no son iguales se ejecutara este bucle
	{
		//se restara un intento al contador 
		intentos = intentos-1;
		Sleep(500);
		system("cls");
		//se mostraran los intentos
		printf("error, sus intentos restantes son %d\nIngrese la contraseña correcta\n",intentos);
		Sleep(500);
		olvido(); //llamar a la funcion de olvido
		//passw=ncont;
		printf("ingrese la contraseña antigua para poder cambiar la contraseña\n>");
		scanf("%d",&contra);
		//si los intentos llegan a 0 se ejecuta esta sentencia y se cierra el programa
		if (intentos == 0)
		{
			printf("demasiados intentos fallidos\n");
			Sleep(500);
			printf("cerrando programa por cuestiones de seguridad\n");
			exit(-1);
		}
	}
	if(contra == passw);
	{
		Sleep(500);
		printf("las contraseñas coinciden\n");
		Sleep(500);
		printf("Ingresa la nueva contraseña\n");
		scanf("%d",&ncontra);
		passw=ncontra; //esta opcion establece el valor de la nueva contraseña
		printf("La contraseña ha cambiado con exito\n");	
	}
	system("pause");
	menuadm();
}


//funcion de olvidar contraseña
void olvido(void)
{
	int num[4];
	int i,olv,ncont;
	printf("¿Olvido su contraseña?\n");
	printf("[1] Si [2] no\n");
	scanf("%d",&olv);
	if (olv == 1)
	{
		randomize;
		ncont=rand()%101+999;
		printf("generando su codigo de recuperacion de contraseña\n");
		Sleep(500);
		system("cls");
		printf("su codigo de recuperacion es: %d\n",ncont);
		Sleep(500);
		printf("use este numero para reestablecer su contraseña\n");
		
	}
	else
	{
		printf("ha decidido no pedir el numero de olvido la contraseña\n");
	}
	passw=ncont;
	system("pause");
}

//funcion de acerca de
void acercade(void)
{
	Sleep(500);
	printf("Acerca de\n\n");
	Sleep(500);
	printf("Proyecto de administracion de una pagina de conciertos\n\n");
	Sleep(500);
	printf("Desde el menu de adminisrador se pueden registrar los datos de los conciertos que decida el usuario(30 de maximo)\n\n");
	Sleep(500);
	printf("segun los conciertos disponibles desde un menu de administrador se puede alegir los boletos siempre y cuando el concierto exista\n\n");
	Sleep(500);
	printf("Proyecto creado por Levi Alexander Perez Elizondo\n\n");
	Sleep(500);
	printf("Estudiante de ingenieria en computacion del centro universitario de ciencias exactas e ingenierias\n\n");
	Sleep(500);
	printf("Fecha de creacion: 25 de Enero del 2022\n\n");
	system("pause");
	menuadm();
	
}

//funcion de comprobacion (Si no se ha pasado primero por el menu de dministrador no va a dejar acceder a el menu de cliente)
void comp(void)
{
	if(comprobacion == 0)
	{
		printf("No se ha registrado aun ningun dato de algun concierto\n\nEs necesario ingresar algun producto para poder usar esta funcion\n");
		system("pause");
		menu();
	}
	else
	{
		printf("Ingresando al menu de cliente...\n");
		Sleep(1000);
		system("pause");
		menucliente();
	}
}

//funcion del menu de cliente
void menucliente(void)
{
	int opc5;
	system("cls");
	do
	{
	printf("Menu de cliente\n");
	printf("[1] Mirar conciertos disponibles\n");
	printf("[2] Comprar boletos para un concierto\n");
	printf("[3] Mirar los boletos comprados\n");
	printf("[4] Mirar su ticket de compra\n");
	printf("[5] Volver al menu principal\n");
	printf("Elija una opcion\n");
	scanf("%d",&opc5);
	switch(opc5)
	{
		case 1:
		{
			ver(); //mirar los conciertos disponibles
			break;
		}
		case 2:
		{
			comprar(); //llamar a la funcion de comprar boletos;
			break;
		}
		case 3:
		{
			//comp1(); //mirar los boletos que has compradom llamando a una funcion q comprobara si se han registrado asientos 
			break;
		}
		case 4:
		{
			//comp2(); //lo mismo que la opcion anterior
			break;
		}
		case 5:
		{
			menu();
			break;
		}
		default:
		{
			printf("opcion no disponible\n");
			break;	
		}
	}
	}while(opc5 != 6);
}


//declarar arreglos para esta funcion
char nombre[30][30] = {};
int cant[100];
int canti;
float costo[100];
int di[100];
int me[100];
int aoo[100];
int sizeA, totally;
//funcion para registrar los asientos;
void comprar(void)
{
	int i;
	int opc6;
	printf("\nProductos Disponibles\n\n");
	Sleep(500);
	ver(); //llamar a la funcion ver
	//limpiar el buffer
	fflush(stdin);
	printf("Ingresa tu nombre:\n");
	gets(nombrec);
	printf("Ingresa la cantidad de conciertos distintos de los que quieres comprar boletos\n");
	scanf("%d",&sizeA);
	while(sizeA > j)
	{
		printf("No hay suficientes conciertos disponibles\n");
		printf("Ingresa la cantidad de conciertos distintos de los que quieres comprar boletos\n");
		scanf("%d",&sizeA);
	}
	for(i=0;i<sizeA;i++)
	{
		fflush(stdin);
		printf("ingresa el nombre de la banda de la que quieres comprar boletos\n");
		gets(nombre[i]);
		while(strcmp(conciertos[i].nombre, nombre[i]) != 0) //compararar ambas cadenas
		{
			Sleep(500);
			printf("Error, no existe el registro de un concierto de una banda con ese nombre\n");
			Sleep(500);
			printf("ingresa el nombre de la banda de la que quieres comprar boletos\n");
			gets(nombre[i]);
		}
		printf("Ingresa el costo de los boletos de la banda %s\n",conciertos[i].nombre);
		scanf("%f",&costo[i]);
		while(costo[i] != conciertos[i].precio)
		{
			printf("Error, el costo de los productos ingreaados no es correcto\n");
			printf("Ingresa el costo de los boletos de la banda %s\n",conciertos[i].nombre);
			scanf("%f",&costo[i]);
		}
		printf("Ingresa el dia del concierto de la banda %s\n",conciertos[i].nombre);
		scanf("%d",&di[i]);
		while(di[i] != conciertos[i].dia)
		{
			printf("El dia del concierto no es correcto\n");
			printf("Ingresa el dia del concierto de la banda %s\n",conciertos[i].nombre);
			scanf("%d",&di[i]);
		}
		fflush(stdin);
		printf("Ingresa el mes del concierto de la banda %s\n",conciertos[i].nombre);
		scanf("%d",&me[i]);
		while(me[i] != conciertos[i].mes)
		{
			printf("Error, no se ha ingresado la fecha correcta\n");
			printf("Ingresa el mes del concierto de la banda %s\n",conciertos[i].nombre);
			scanf("%d",&me[i]);
		}
		printf("Ingresa el año del concierto de la banda %s\n",conciertos[i].nombre);
		scanf("%d",&aoo[i]);
		while(aoo[i] != conciertos[i].ao)
		{
			printf("Error, no se ha ingresado el año correcto\n");
			printf("Ingresa el año del concierto de la banda %s\n",conciertos[i].nombre);
			scanf("%d",&aoo[i]);
		}
		comprobar1=1;
		mostrara();
		
		printf("ingresa la cantidad de boletos que quieres comprar\n");
		scanf("%d",&canti);
		for(i=0;i<canti;i++)
		{
			for(k=0;k<canti;k++)
			{
				printf("ingrese la fila y columa del asiento que quiere elegir:\n");
				scanf("%d",&asientos[i][k].asi);	
				while(asientos[i][k].asi==1 || asientos[i][k].asi>6 || asientos[i][k].asi<0)
				{
					printf("Error, el asiento ya esta ocupado, ingrese uno que no haya sido ocupado\n");
					printf("ingrese la fila y columa del asiento que quiere elegir:\n");
					scanf("%d",&asientos[i][k].asi);
				}
				asientos[i][k].asi=1;
			}
		}
		
		printf("Asientos actualizados\n");
		mostrara();
	}
	system("pause");
}
