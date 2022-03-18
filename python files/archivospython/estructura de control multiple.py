#Planteamiento: Introducir un número entero del 1 al 12. Dependiendo del número que se introdujo imprimir en pantalla el mes con letra correspondiente a ese número .
#levi Alexander Perez Elizondo
#septiembre 17 del 2021
#datos de entrada
print("introduce un numero entero del 1 al 12: ")
numero=int(input())
while numero>12:
    print("error.. el numero deberia ser un numero menor a 12")
    numero=int(input())
#condicional
if numero<=1:
    print("el mes es enero")
elif numero<=2:
    print("el mes es febrero")
elif numero<=3:
    print("el mes es marzo")
elif numero<=4:
    print("el mes es abri")
elif numero<=5:
    print("el mes es mayo")
elif numero<=6:
    print("el mes es junio")
elif numero<=7:
    print("el mes es julio")
elif numero<=8:
    print("el mes es agosto")
elif numero<=9:
    print("el mes es septiembre")
elif numero<=10:
    print("el mes es octubre")
elif numero<=11:
    print("el mes es noviembre")
elif numero<=12:
    print("el mes es diciembre")
print("presiona enter para continuar")
