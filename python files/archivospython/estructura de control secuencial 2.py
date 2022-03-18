#Problemática: Introducir dos números reales para realizar las siguientes operaciones: suma, resta, multiplicación, división, raiz cuadrada del primer número y raíz cuadrada del segundo número. Imprimir en pantalla el resultado de cada operación
#levi Alexander Perez Elizondo
#septiembre 10 del 2021
import math
math.sqrt
math.pow
#datos de entrada
print("introduce un numero cualquiera menor a 100")
n1 = float(input())
print("introduce un numero cualquiera menor a 100 ")
n2 = float(input())
#proceso
suma = n1+n2
resta = n1-n2
multiplicacion = n1*n2
division = n1/n2
raiz1 = math.sqrt(n1)
raiz2 = math.sqrt(n2)
potencia = math.pow(n1,n2)
#datos de salida
print("el resultado de la suma es:",str(suma))
print("la resta es: ",str(resta))
print("la multiplicacion es: ",str(multiplicacion))
print("la division es: ",str(division))
print("la raiz cuadrada es: ",str(raiz1))
print("la raiz cuadrada 2 es:",str(raiz2))
print("el resultado de la potencia es",str(potencia))
