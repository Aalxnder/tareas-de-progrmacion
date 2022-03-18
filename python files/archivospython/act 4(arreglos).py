
#alumno: levi Alexander Perez Elizondo
#miescoles 20 de octubre del 2021
#codigo:218701391 clave:I5288 fundamentos de programacion, Horario:mar y mie 1 - 3
#Planteamiento: Crea un arreglo de tipo entero, pregunta al usuario cuántos valores enteros  va a capturar, esa cantidad será la longitud del arreglo.  Tener un menú con las siguientes opciones:

#1. Capturar valores
#2. Ordenar valores
#3. imprimir valores originales
#4. imprimir valores ordenados
#5. Salir
#Cuando se oprima la opción de salir deberá preguntar al usuario si desea salir o no antes de salir del programa.
#datos de entrada (longitud de arreglos)
#importar librerias

import os
import sys
#funcion menu
opcion = 0
def menu ():
    print("presiona la tecla enter para continuar:")
    input()
    os.system("cls")
    opc = int(input("Menu Principal \n"+
                    "1.capturar valores \n"+
                    "2.ordenar \n"+
                    "3.imprimir valores originales \n"+
                    "4.imprimir valores ordenados \n"+
                    "5.Salir \n"+
                    "  Elija una opcion :) \n"))
    return opc
#fin funcion menu
print("!importante¡ ingresa la opcion 1 primero")

#elegir opciones
while opcion != 6:
    opcion = menu()

#opcion 1(capturar valores) "selectiva simple If"
    if opcion == 1:
        a = int(input("ingrese la longitud de su arreglo: "))
        b = []
        ordenados = []

#opcion 2 (ordenar) selectiva simple if
    if opcion == 2:
        for i in range (0,a):
            ordenados.append(input("ingrese los numeros que desea ordenar\n"))
            print(" ")
            ordenados.sort()
        print("los numeros ahora estan ordenados :) ")


#opcion 3 (imprimir valores originales)
    if opcion ==3:
        for i in range (0,a):
            b.append(input("introduce los numeros que desea capturar: "))
            print(" ")
            print(b)
#opcion 4 (imprimir valores ordenados)
    if opcion == 4:
        print("numeros ordenados")
        print(" ")
        print(ordenados)

#opcion 5 (Salir)
    if opcion == 5:
        print("¿realmente desea finalizar el programa?")
        print("ingrese el numero cero para finalizar, ingrese cualquier otro numero para finalizar\n")
        s = int(input())
        if s == 0:
           sys.exit("usted ha decidido finalizar el programa.")
        else:
           print("usted ha decidido permanecer en el programa")
    if opcion == 6:
        print(" ")
    #codigo 2 inicio
