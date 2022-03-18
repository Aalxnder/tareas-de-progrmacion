#se desea calcular el salario neto semanal en funcion de el numero de horas trabajadas y tasa de impuestos
#las primeras 35 horas se pagan en tarifa normal
#las horas que pasen de 35 se pagan 1.5 veces la tarifa normal
#tasas de impuestos 1)primeros 1000 dolares libres de impuestos 2)los siguientes 400 dolares tienen un 25% de impuestos
#los restantes un 45% de impuestos
#la tarifa es de 15 dolares
#funcion menu
import os
import sys

opcion = 0
print("bienvenido/bienvenida")
print("")
def menu():
    print("presione ENTER para continuar ")
    input()
    os.system("cls")
    opc = int(input("1. ingrese las horas trabajadas\n"+
                    "2. salir\n"+
                    "   elija una opcion :)\n"))
    return opc
while opcion != 3:
    opcion = menu()

    if opcion == 1:
        tarifa = 15
        lunes = int(input("ingrese las horas trabajadas el lunes: "))
        while lunes > 24:
            print("ingrese una hora valida")
            lunes = int(input("ingrese las horas trabajadas el lunes: "))

        martes = int(input("ingrese las horas trabajadas el martes: "))
        while martes > 24:
            print("ingrese una hora valida")
            martes = int(input("ingrese las horas trabajadas el martes: "))

        miercoles = int(input("ingrese las horas trabajadas el miercoles: "))
        while miercoles > 24:
            print("ingrese una hora valida")
            miercoles = int(input("ingrese las horas trabajadas el miercoles: "))
        jueves = int(input("ingrese las horas trabajadas el jueves: "))
        while jueves > 24:
            print("ingrese una hora valida")
            jueves = int(input("ingrese las horas trabajadas el jueves: "))
        viernes = int(input("ingrese las horas trabajadas el viernes: "))
        while viernes > 24:
            print("ingrese una hora valida")
            viernes = int(input("ingrese las horas trabajadas el viernes: "))
        horasT = lunes+martes+miercoles+jueves+viernes

        if horasT <= 35:
            pago = horasT * 15
            if pago <= 1000:
                pagoCI = pago * 1
            if pago >1000 and pago <= 1400:
                pagoCI = pago * .75
            if pago >1400:
                pagoCI = pago* .55

        elif horasT > 35:
            pago = horasT * 22.5
            if pago <= 1000:
                pagoCI = pago * 1
            if pago > 1000 and pago <= 1400:
                pagoCI = pago * .75
            if pago >1400:
                pagoCI = pago* .55
        if horasT >50:
            print("nmms te negrean bien culero we xd ")
            pago = horasT * 22.5
            if pago <= 1000:
                pagoCI = pago * 1
            if pago > 1000 and pago <= 1400:
                pagoCI = pago * .75
            if pago >1400:
                pagoCI = pago* .55

        print("el total de horas trabajadas fue de: ",horasT)
        print("tu paga neta fue de: ", pago)
        print("tu paga menos impuestos fue de: ", pagoCI)

    if opcion == 2:
        print("realmente quiere finalizar el programa?")
        print("presione 0 para finalizar o cualquier otro numero para permanecer en el programa")
        s = int(input())
        if s == 0:
            sys.exit("usted ha decidido finalizar el programa")
        else:
            print("usted ha decidido permanecer en el programa")

    if opcion == 3:
        print(" ")
