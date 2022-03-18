//dada la nota de un examen, escribir la literal que le corresponde 
//ejercicio resuelto con la sentencia switch
/*#include <stdio.h>
int main()
{
	int nota;
	printf("ingresa la nota del examen con numero del 0 al 10.\n");
	scanf("%d",&nota);
	
	switch (nota)
	{
		case 5: puts("sera mejor que te esfuerzes mas para la proxima.\n");
		break;
		
		case 6: puts("panzaste brodi, por poco no la libras.\n");
		break;
		
		case 7: puts("obtuviste una calificacion suficiente.\n");
		break;
		
		case 8: puts("obtuviste una calificacion buena.\n");
		break;
		
		case 9: puts("obtuviste una calificacion muy buena.\n");
		break;
		
		case 10: puts("obtuviste una calificacion excelente.\n");
		break;
		
		default:
				puts("no es posible esta nota.\n");
	}
	puts("final del programa");
	return 0;
}*/
/*Crea un programa que usando puts y gets (sin usar printf ni scanf) pida al usuario su nombre y 
ciudad de nacimiento. Tras esto se deberá mostrar el siguiente mensaje: “Bienvenido nombre, encantado 
de hablar con alguien de ciudad”. Donde nombre y ciudad deben ser reemplazados por los datos proporcionados por 
el usuario. Por ejemplo si el usuario introduce como nombre Juan y como ciudad Lima, deberá mostrarse 
“Bienvenido Juan, encatando de hablar con alguien de Lima*/

//seleccionar un tipo de vehiculo segun un valor numerico

#define carro 5
#define moto 3.5
#define camion 10 
#define metro 10
#define barco 560
#define helicoptero 1200
#define avion 3600
#include <stdio.h>
int main()
{
	int tipo_vehiculo;
	float km,costo;
	int cam;
	printf("los tipos de vehiculos son\n1)carro\n2)motos \n3)camion \n4)metro \n5)barco \n6)helicoptero \n7)avion\n");
	printf("ingresa el tipo de vehiculo que quieres:\n");
	scanf("%d",&tipo_vehiculo);
	
	switch(tipo_vehiculo)
	{
		case 1:puts("usted eligio el tipo de vehiculo 1, carro");
		printf("ingrese los km a recorrer: (tome en cuenta que gastara 5 pesos por cada km recorrido):\n");
		scanf("%f",&km);
		costo = km * carro;
		printf("el gasto que realizo en %.1f km recorridos fue de: %.1f pesos",km,costo);
		break;
		
		case 2:puts("usted eligio el tipo de vehiculo 2, moto");
		printf("ingrese los km a recorrer: (tome en cuenta que gastara 3.5 pesos por cada km recorrido):\n");
		scanf("%f",&km);
		costo = km * moto;
		printf("el gasto que realizo en %.1f km recorridos fue de: %.1f pesos",km,costo);
		break;
		
		case 3:puts("usted eligio el tipo de vehiculo 3, camion ");
		printf("ingrese el numero de camiones que tomara: (tome en cuenta que gastara 10 pesos en la tarifa de cada camion):\n");
		scanf("%d",&cam);
		costo = cam * camion;
		printf("el gasto que realizo en %d camiones tomados fue de: %.1f",cam,costo);
		break;
		
		case 4:puts("usted eligio el tipo de vehiculo 4, metro");
		printf("ingrese el numero de lineas de metro que tomara (tome en cuenta que gastara 10 pesos por la tarifa del metro):\n");
		scanf("%d",&cam);
		costo = cam * metro;
		printf("el gasto que realizo en %d lineas de metro tomadas fue de: %.1f",cam,costo);
		break;
		
		case 5:puts("usted eligio el tipo de vehiculo 5, barco");
		printf("ingrese los km a recorrer: (tome en cuenta que gastara 560 pesos por cada km recorrido)");
		scanf("%f",&km);
		costo = km * barco;
		printf("el gasto que realizo en %.1f km recorridos fue de: %.1f",km,costo);
		break;
		
		case 6:puts("usted eligio el tipo de vehiculo 6, helicoptero");
		printf("ingrese los km a recorrer: (tome en cuenta que gastara 1200 pesos por cada km recorrido):\n");
		scanf("%f",&km);
		costo = km * helicoptero;
		printf("el gasto que realizo en %.1f km recorridos fue de: %.1f",km,costo);
		break;
		
		case 7:puts("usted eligio el tipo de vehiculo 7, avion");
		printf("ingrese el numero de aviones que tomara (tome en cuenta que gastara 3600 pesos por vuelo):\n");
		scanf("%d",&cam);
		costo = cam * avion;
		printf("el gasto que realizo en %d vuelos tomados fue de: %.1f",cam,costo);
		break;
		
		default: 
			printf("vehiculo no disponible");
	}
	return 0;
}
















