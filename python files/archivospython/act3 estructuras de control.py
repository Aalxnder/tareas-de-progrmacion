#para la opción 1 deberás realizar lo siguiente: a) preguntar a cuantas personas se les calculará la edad
#b) leer el año de nacimiento de esas personas c) calcular la edad de acuerdo al año de nacimiento
#(no tomar en cuenta días del mes ni años bisiestos) d) imprimir la edad y si la edad es de cero a 17 años escribir
#que son personas menores de edad de lo contrario escribir que son personas mayores de edad.  Si la edad de las
#personas mayores de edad son de 25 a 50 años imprimir que son personas jovenes - mayores si son de más de 50 años
#escribir que son personas mayores - ancianos. Si la edad fue negativa o incorrecto el año de nacimiento escribir
#un mensaje de error.
#Para la opción 2 deberás calcular el factorial de 7
#opcion factorial de 7
#levi Alexander Perez Elizondo
#septiembre 30 del 2021
def factorial(n):
    if (n==0):
        return 1
    else:
        return n*factorial(n-1)
n=int(input("ingrese el numero "))
print("el factorial de: "+str(n)+" es:"+str(factorial(n)))
#opcion edades
#datos de entrada
print("¿a cuantas personas se les calculara la edad?")
personas=int(input())
#proceso
for año in range(personas):
    print("ingrese el año de nacimiento de la persona: ")
    año=int(input())
    #condicional while
    while año>=2022:
        print("----error----,ingrese una fecha valida:")
        año=int(input())
        while año <=1900:
            print("----error---- ingrese una fecha valida: ")
            año=int(input())
    while año<=1900:
        print("----error----, ingrese una fecha valida: ")
        año=int(input())
        while año>=2022:
            print("----error---- ingrese una fecha valida ")
            año=int(input())
            #valor de variable i
    i=2021
    #proceso
    edad = i-año;
    #datos de salida
    print("la edad es: ",str(edad))
    #condicional if
    if edad<=17:
        print("la persona es menor de edad")
    elif edad<=50:
        print("la persona es una persona joven mayor de edad  ")
    elif edad>=51:
        print("la persona es una persona anciana")
    else:
        print("la persona es una persona mayor de edad")
