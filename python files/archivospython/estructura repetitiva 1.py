#Planteamiento: Introducir un número entero positivo. Imprimir las primeras 10 potencias del número introducido.
#Tener una variable para la potencia donde la primera vez sea 1
#para que se esté multiplicando esa variable por el número que se introdujo
#y se guarde en la misma potencia e imprima en pantalla su resultado diez veces.
#levi Alexander Perez Elizondo
#septiembre 17 del 2021
#librerias
import math
math.pow
#datos de entrada
print("----estructura de control repetitiva while----")
print("introduce un numero entero positivo: ")
numero1 = int(input())
limite=int(input("¿hasta que numero quieres calcular?"))
i=0
#condicional
while  i<=limite:
    potencia=math.pow(numero1,i)
    print({potencia})
    i += 1
#datos de salida
print("presiona enter para continuar")
