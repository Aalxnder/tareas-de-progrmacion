#resolucion de ecuaciones de segundo grado
#datos de entrada
#librerias
import math
math.sqrt

print("al tener en cuenta la ecuacion ax^2+bx+c")
print("----------------------------------------")
print("ingrese el valor entero de a")
a=int(input())
print("ingrese el valor entero de b")
b=int(input())
print("ingrese el valor entero de c")
c=int(input())
#Calcular el discriminante
d=(b*b)-4*a*c
#comprobar y calcular
if d<0:
    print("no existen soluciones reales ")
else:
    x1=(-b+math.sqrt(d))/(2*a)
    x2=(-b-math.sqrt(d))/(2*a)
    #datos de salida
    print("soluciones")
    print("solucion de x1",str(x1))
    print("solucion de x2",str(x2))
