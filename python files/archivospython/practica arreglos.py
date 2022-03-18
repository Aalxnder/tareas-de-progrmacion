#la empresa VR Natural quiere desarrollar un programa que le permita ingresar el total de ventas
#registradas por dia, durante un numero n de dias n. una vez ingresada esta ingormacion necesita
#que el programa indique
#el total de ventas realizadas en los n dias
#el dia con mayor numero de ventas
#el dia con menor numero de ventas
#promedio de ventas
#import os
#import sys

#opcion = 0
#def menu():
#    print("presiona la tecla enter para continuar: ")
#    print(" ")
#    input()
#    os.system("cls")
#    opc = int(input("1. ingrese los dias que desea capturar \n"+
#                    "2. total de ventas realizadas en los dias especificos \n"+
#                    "3. el dia con mayor numero de ventas \n"+
#                    "4. el dia con menor numero de ventas \n"+
#                    "5. promedio de ventas \n"+
#                    "6. Salir \n"+
#                    "   elija una opcion :) \n"))
#    return opc
#datos de entrada
#while opcion != 7:
#    opcion = menu()

#    if opcion == 1:
#        n = int(input("ingrese los dias que desea capturar "))
#        cuentas = [None]*n
        #suma = 0
        #for i in range (0,a):
#    if opcion == 2:
#        for i in range (0,n):
#            cuentas[i] = int(input("ingrese el total de ventas realizadas en los dias " + str(i + 1)+" "))
#        suma = 0
#        for i in range (0,n):
#            suma = suma + cuentas[i]
#        print("el total de ventas durante los dias elegidos fue:\n "+str(suma))

#    if opcion == 3:
#        diamayor = 0
#        mayor = cuentas[0]
#        for i in range (0,n):
#            if (cuentas[i] > mayor):
#                mayor = cuentas[i]
#                diamayor = i + 1
#        print("el dia "+str(diamayor)+" fue el dia en el que mas ventas se registraron con un total de: "+str(mayor))
#    if opcion == 4:
#        diamenor = 0
#        menor = cuentas[0]
#        for i in range (0,n):
#            if (cuentas[i] < menor):
#                menor = cuentas[i]
#                diamenor = i+1
#        print("el dia "+str(diamenor)+" fue el dia en que menos ventas se registraron con un total de: "+str(menor))
#    if opcion == 5:
#        promedio = suma/n
#        print("durante los dias elegidos el promedio de ventas fue\n"+str(promedio))
#    if opcion == 6:
#        print("realmente desea finalizar el programa? ")
#        print("ingrese el numero 0 para finalizar o ingrese cualquier otro numero si desea permanecer en el programa. ")
#        s = int(input())
#        if s == 0:
#            sys.exit("usted ha decidido finalizar el programa")
#        else:
#            print("usted ha decidido permanecer en el programa")
#    if opcion == 7:
#        print(" ")

#inicio codigo 2
#Crea un array o arreglo unidimensional donde le indiques el tamaño por teclado y crear una función
#que rellene el array o arreglo con los múltiplos de un número pedido por teclado. Por ejemplo,
#si defino un array de tamaño 5 y elijo un 3 en la función, el array contendrá 3, 6, 9, 12, 15.
# Muestralos por pantalla usando otra función distinta.
#datos de entrada
#a = int(input("introduce la longitud del arreglo (es la cantidad de veces que quieres que se muestre un codigo): "))
#b = int(input("introduce el numero que deseas multiplicar: "))
#c = []
#desarrollo
#for i in range (0,a):
#    c.append(i*a)
#print(c)

#codigo 3

#5.1.1. Crea un programa que pida al usuario 10 números enteros y luego muestre los que eran pares,
#todos ellos en la misma línea separados por un espacio en blanco.
#a = int(input("ingresa la longitud del arreglo:\n"))
#pares = []
#impares = []

#for i in range (0,a):
#    b = int(input("introduce 10 numeros"))
#    if b %2== 0:
#        pares.append(b)
#        print("estos numeros son pares:\n")
#        print(pares)
#    else:
#        impares.append(b)
#        print("estos numeros son impares:\n")
#        print(impares)

#codigo 3
#5.1.2. Crea un programa que pida al usuario 10 números enteros,
#los guarde en un array y luego le pregunte de forma repetitiva qué número quiere buscar
#Le responderá si dicho número estaba ono entre los datos que se habían
#introducido inicialmente. Dejará de repetirse cuando se introduzca el número 0.
#import os
#import sys
#cantidad
#opcion = 0
#funcion menu
#def menu():
#    print("presiona enter para continuar:")
#    input()
#    os.system("cls")
#    opc = int(input("1.ingresa la cantidad de numeros a ingresar (opcion 1)\n"+
#                    "2.ingrese los numeros que desea en la lista (opcion 2)\n"+
#                    "3.ingrese el numero que desea encontrar (opcion 3)\n"+
#                    "4.el numero se ha o no encontrado (opcion 4)\n"+
#                    "5.veces que se ha encontrado el numero (opcion 5)\n"+
#                    "6.salir (opcion 6)\n"+
#                    "elija una opcion :)\n"))
#    return opc
#print("importante inicia por la opcion 1. ")
#    #fin funcion menu
#while opcion !=7:
#    opcion = menu()
#    if opcion == 1:
#        a = int(input("ingresa la cantidad de numeros que deseas ingresar:\n"))
#        list = []
#        list_enc = []
#    if opcion == 2:
#        for i in range (a):
#            b = int(input("ingrese los numeros que quiere en la lista{}: ".format(i+1)))
#            list.append(b)
#        print(list)
#    if opcion == 3:
#        c = int(input("ingrese el numero que desea encontrar:\n"))
#    if opcion == 4:
#        for j in range(len(list)):
#            if c == list[j]:
#                print("el numero se ha encontrado {} se ha encontrado en la posicion {}".format(c,j))
#                list_enc.append(c)
#            else:
#                print("el numero {} no se ha encontrado en la posicion {} :(".format(c,j))
#    if opcion == 5:
#        print("el numero {} se ha encontrado {} vez/veces".format(c,len(list_enc)))
#    if opcion == 6:
#        print("realmente quiere salir del programa?")
#        print("ingrese el numero 0 para finalizar o cualquier otro numero para permanecer en el programa")
#        s = int(input())
#        if s == 0:
#            sys.exit("usted ha decidido finalizar el programa. :(")
#        else:
#            print("usted ha decidido permanecer en el porgrama :) ")
#    if opcion == 7:
#        print(" ")

#codigo 5
#calcular numero mayor y menor de una lista en python
lista = []
cant = int(input("ingresa la cantidad de numeros:\n"))
mayor = 0
menor = 0
i = 1
while cant > 0:
    numero = float(input("ingresa el numero#"+str(i)+": "))
    lista.append(numero)
    i = i + 1
    cant = cant - 1
mayor = max(lista)
menor = min(lista)

print("lista",lista)
print("mayor",mayor)
print("menor",menor)
