#programa para sacar el area de un triangulo
#levi alexander perez Elizondo
#ejemplo

print(" ingresa la base del triangulo\n")
base = float(input())


print("ingresa la altura del tiangulo\n")
altura = float(input())

def calcular_area():
    print(" la formula es base por altura sobre dos ")
    area = (base * altura)/2
    print("el area es: ", area)

calcular_area ()
