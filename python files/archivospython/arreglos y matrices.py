#arreglos
#ejemplo 1
#imprimir multiplos de un numero ingresawdo por el usuario
#n = int(input("ingrese el tamaño del arreglo:"))
#m = int(input("ingrese el numero de multiplos:"))
#a = []
#for i in range(0,n):
#    a.append(i*m)
#print("el resultado es ")
#print(a)

#lista = [1,5,8,9,30,9,13]
#imprimir en pantalla los numeros impares a 3
#a = [1,5,8,9,30,9,13]
#b = []
#for i in a:
#    if i >3 and i %2!=0:
#        b.append(i)
#print("los numeros impares mayores a 3 son:")
#print(b)

#ejercicio 3
#calcular 10 numeros aleatorios
#modulo random
#import random

#def vector_aleatorio(n):
#    vector = [0]*n
#    for i in range(n):
#        vector[i] = random.randint(0,100)
#    return vector
#print("ingresa cuantos numeros aleatorios deseas optener")
#n = int(input())

#aleatorio = vector_aleatorio(n)
#print(aleatorio)
#crear matrices
#matriz = []
#for i in range (3):
#    matriz.append([0]*4)
#print(matriz)

#declarar matrices ingresadas por el usuario
#matriz = []
#filas = int(input("ingrese la cantidad de filas"))
#columnas = int(input("ingrese la cantidad de columnas"))

#for i in range(filas):
#    matriz.append([0]*columnas)
#for j in range (filas):
#    for c in range(columnas):
#        matriz[j][c] = int(input("elemento %d,%d: "%(j,c)))
#print(matriz)

#matrices bidimensionales
#m = [[3,2,5],[2,3,4],[4,5,6]]

#for i in range (3):
#    for j in range (3):
#        print(m[i][j],end="  ")
#    print()

#matrices por indexacion
#a = []
#filas = int(input("ingrese el numero de filas:"))
#columnas = int(input("ingrese el numero de columnas: "))
#for i in range (filas):
#    a.append([])
#    for j in range (columnas):
#        a[i].append(None)
#for i in range (columnas):
#    for j in range(columnas):
#        print(a[i][j],end="  ")
#    print()

#matrices random
#from random import*
#filas = int(input("ingrese un numero de filas:"))
#columnas = int(input("ingrese un numero de columnas:"))
#a = [[randint(0,100) for i in range(filas)] for j in range (columnas)]

#for f in range(filas):
#    for c in range(columnas):
#        print(a[f][c],end = "  ")
#    print()
#imprimir matriz en especifico
#c = int(input("ingrese la columna que desea obtener:"))
#b = []
#for f in range(len(a)):
#    b.append(a[f][c])
#print(b)

#append a arreglos multidimensionales
#array_datos = [[]]

#array_datos[0].append("alice")
#array_datos[0].append(18)
#array_datos[0].append("españa")

#array_datos.append([])

#array_datos[1].append("azalia")
#array_datos[1].append(16)
#array_datos[1].append("mexico")

#array_datos.append([])

#array_datos[2].append("alx")
#array_datos[2].append(18)
#array_datos[2].append("mexico")

#print(array_datos)

#print("la cantidad de datos en el arreglo es:  "+str(len(array_datos)))
#for i in range(len(array_datos)):
#    for j in range(len(array_datos[i])):
#        print(array_datos[i][j])
#for i in range(len(array_datos)):
    #array_datos[i][0]
    #array_datos[i][1]
    #array_datos[i][2]
    #array_datos[i][3]

#Guardar temperatura maxima y minima de una semana (7 dias)
from numpy import *
a = array ([[1,15,18],[2,14,16],[3,13,18],
            [4,15,15],[5,14,18],[6,14,21],
            [7,14,19]])
def temperatura_media(semana):
    media = 0
    for pos_lista in range(len(semana)):
        media = (semana[pos_lista][1]+semana[pos_lista][2])/2
        val = media - int(media)
        if val == 0:
            print("dia",pos_lista+1,":",int(media))
        else:
            print("dia",pos_lista+1,":",media)
def mayores_menores_temperaturas(semana):
    menor = semana[0],[1]
temperatura_media(a)
