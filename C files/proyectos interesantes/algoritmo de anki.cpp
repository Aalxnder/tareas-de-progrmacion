//algoritmo anki
/*Vrear un programa similar al programa llamado anki, con la opcion de digitar y almacenar nuestras preguntas y respuestas dentro de una estructura de datos.
con la opcion de luego comparar las respuestas, si son correctas finalizar el programa, de lo contrario seguir intentando

anki es un programa desarrollado para ejercitar nuestra memoria ya sea si tenemos que presentarnos ante un examen, simplemente si deseamos recordar ciertas 
cosas, como por ejemplo recordar la sintaxis de un lenguaje de programacion*/
//librerias
#include <stdio.h> //entrada y salida de datos
#include <stdlib.h> //cambiar el color de la consola pa q se vea bonita y poder usar las funciones system
#include <windows.h> //funcion Sleep() pa preguntar cada que tiempo se tiene que repetir el ejercicio
#include <string.h> //copiar y comparar cadenas de texto

//prototipos
void comenzar(void);
int validar();
//variables globales
int i; //iterador para los bucles
int cant; //cuantas preguntas se tienen que estudiar
int tiempo; //cada cuanto tiempo queremos que te preguntes
int puntos = 0; //un puntaje que te sumara 1 por cada respuesta correcta
//struct
struct general
{
	//variables para las preguntas y respuestas originales
	char PreguntaOriginal[100];
	char RespuestaOriginal[100];
	char RespuestaUser[100]; //almacenar la respuesta del usuario
}
general[30];
//funcion principal
int main()
{
	system("color E0");
	printf("introduce la cantidad de preguntas que quieres estudiar:\n");
	scanf("%d",&cant);
	//bucle para llenar los valores del struct
	for (i=0;i<cant;i++)
	{
		//cuando se introducen muchos datos a un struct por medio de bucles se necesita limpiar la memoria
		fflush(stdin);
		printf("ingresa la pregunta %d:\n",i); //ingresar las preguntas del usuario
		gets(general[i].PreguntaOriginal);
		
		//almacenar las respuestas
		printf("ingrese la respuesta %d de la pregunta %s:\n",i,general[i].PreguntaOriginal);
		gets(general[i].RespuestaOriginal);
		//limpiar la consola
		system("cls");
	}
	//preguntar cada cuanto tiempo lanzar las preguntas
	printf("Cada cuanto tiempo quieres que el programa te pregunte?:\n");
	scanf("%d",&tiempo);
	
	//crear una cuenta regresiva antes de preguntar
	for(tiempo=tiempo;tiempo >=0;tiempo--)
	{
		//agregar un intervalo de un segundo
		Sleep(1000);
		//mostrar el tiempo restante
		printf("\rTiempo restante para preguntar %d \n",tiempo);
		//comprobar si ya llego al tiempo estimado
		if (tiempo == 0)
		{
			comenzar();
		}
	}
	return 0;
}


//funcion para comenzar
void comenzar(void)
{
	//comenzar a preguntar
	for(i=0;i<cant;i++)
	{
		//limpiar memoria again
		fflush(stdin);
		printf("ingrese la respuesta a la pregunta %d que dice %s:\n",i,general[i].PreguntaOriginal);
		gets(general[i].RespuestaUser);
		//validar la respuesta
		if (validar() == 1) //respuesta correcta
		{
			puntos += 1;
			printf("respuesta correcta\n");
			printf("tu puntaje ahora es de %d puntos\n",puntos);
		}
		else
		{
			printf("respuesta incorrecta, intenta nuevamente.\n");
			//los puntos se reinician a 0 otra vez y inicias a reunirlos de nuevo con cada pregunta correcta
			puntos=0;
			//llamar de nuevo a la funcion mediante recursividad pa iniciar de nuevo las preguntas
			comenzar();
		}
	}
}

//funcion para validar respuestas
int validar()
{
	//si es verdadera va a retornal 1(True), en el caso que sea falso va a retornar 0 (False) 
	if(strcmp(general[i].RespuestaOriginal,general[i].RespuestaUser) == 0) //si da igual a cero significa que es True y retornamos 1(True)
	{
		return 1; //True
	}
	else
	{
		return 0; //False
	}
}







































//
