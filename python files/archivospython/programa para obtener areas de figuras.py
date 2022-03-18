#crear una funcion para calcular el area de un poligono regular

from math import pi,tan

def area_poligono_regular(n, l):
    area = n*1**2 / (4 *tan(pi/n))

    return area

if __name__=="__main__":
    print("ingrese el numero de lados")
    n=float(input())
    print("ingrese el valor de los lados")
    l=float(input())
    resultado = area_poligono_regular(n, l)
    print(resultado)
