#Imprimir en pantalla el tipo de calificación en
#letra de un alumno según la calificación dada
#siguiente: Se imprime en pantalla “Excelente” si
#la calificación dada está en el rango de 100 a
#90. Se imprime en pantalla “Muy bien” si la
#calificación dada está en el rango de 89 a 80.
#Se imprime e pantalla “Bien” si la calificación
#dada está en el rango de 79 a 70. Se imprime
#en pantalla “Regular” si la calificación dada está
#en el rango de 69 a 60. Se imprime en pantalla
#“Malo” si la calificación dada es menor o igual a
#59. Si la calificación está fuera del rango del 0
#al 100 imprimir un mensaje de error en pantalla
#datos de entrada
print("ingrese una calificacion")
calificacion = float(input())
while calificacion >100:
    print("---error--- ingrese una calificacion de 0 a 100")
    calificacion= float(input())
#condicional
if calificacion >=90:
    print("calificacion excelente")
elif calificacion >=80:
    print("calificacion muy buena")
elif calificacion >=70:
    print("calificacion buena")
elif calificacion >=60:
    print("calificacion regular")
elif calificacion <=59:
    print("no mames we esfuerzate tantito ")
    #condicional while para poder poner muchas calificaciones sin tener que reiniciar el codigo
while calificacion >=0:
    print("ingrese otra calificacion ")
    calificacion =float(input())
    while calificacion >100:
        print("---error--- ingrese una calificacion de 0 a 100")
        calificacion= float(input())

    if calificacion >=90:
        print("calificacion excelente")
    elif calificacion >=80:
        print("calificacion muy buena")
    elif calificacion >=70:
        print("calificacion buena")
    elif calificacion >=60:
        print("calificacion regular")
    elif calificacion <=59:
        print("no mames we esfuerzate tantito ")
