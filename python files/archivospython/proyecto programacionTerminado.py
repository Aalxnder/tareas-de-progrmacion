#proyecto fundamentos de programacion
#fecha de inicio viernes 15 de octubre del 2021
#integrantes: Samuel Perez Alfaro, Levi Alexander Perez Elizondo, Santiago Rodriguez Sanchez
#U.A = fundamentos de programacion, maestra Sabrina Lizbeth Vega Maldonado

#importar librerias necesarias
import os
import time
import sys
pelicula = 0
print("Bienvenida / Bienvenido")
print("")
#funcion menu
def menu ():
    print("Presiona 'ENTER' para continuar")
    input()
    os.system("cls")


    opc = int(input("Menu de películas\n"+
                    "Pelicula 1 = Venom\n"+
                    "Pelicula 2 = Halloween kills\n"+
                    "Pelicula 3 = Paw patrol\n"+
                    "4 = Salir\n"+
                    "Elija una opcion :)\n"))

    return opc
#fin de la funcion menu
#funcion crear lista de asientos
def asientos():
    t=0
    s=[[0,0,0,0,0], [0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0],[0,0,0,0,0]]
    return s
#funcion para mostrar disponibilidad
def mostrar(p):
    print("Estos son los asientos disponibles")
    f=0
    c=0
    x="ABCDE"
    g=0
    r=0
    for r in (x):
        print(" ")
        for g in range (5):
            print("Asiento",r,g,"=",end=" " )
            print(int(p[f][c]))
            c+=1
        c=0
        f+=1
    return p
#funcion para la eleccion de asiento
def elegir(p,h,l):
    while h<0 or h>=5 or l<0 or l>=5 or p[h][l]==1:
        print("Ingresa un numero de asiento valido o desocupado")
        h=int(input("Fila: "))
        l=int(input("Columna: "))
    p[h][l]=1
    return p[h][l]

asientosv=asientos()
asientosv5=asientos()
asientosp=asientos()
asientosh=asientos()
asientosh5=asientos()
asientosp9=asientos()

while True:
    try:
        while pelicula != "":

            pelicula = menu()

            #opcion de pelicula (selectiva multiple )

            if pelicula == 1:
                    time.sleep(.4)
                    print("Usted eligió ver la película de 'Venom'")
                    print(" ")
                    time.sleep(1)
                    print("Horario de funciones = 10 a.m. y 5 p.m. ")
                    print(" ")
                    #hora de la pelicula
                    while True:
                        try:
                            time.sleep(1)
                            hora = int(input("Ingrese la hora de la película que desea ver:  "))
                            print(" ")
                            while hora != 10 and hora !=5:
                                time.sleep(.5)
                                print("---ERROR--- Ingrese una hora válida ")
                                hora = int(input())
                            break
                        except ValueError:
                            print("")
                            print("*Por favor, introduzca un número válido*")
                            print("")
                    while True:
                        try:
                            time.sleep(.5)
                            print("¿Cuántos boletos se comprarán?")
                            personas = int(input())
                            print("")
                            while personas >= 26 or personas <= 0:
                                time.sleep(.5)
                                print("---ERROR--- Cantidad de boletos inválido")
                                print("")
                                time.sleep(.5)
                                print("¿Cuántos boletos se comprarán?")
                                personas = int(input())
                            break
                        except ValueError:
                            print("")
                            print("*Por favor, introduzca un número válido*")
                            print("")
                    for cont in range(1,personas+1):
            #eleccion de hora (10 am )
                        if hora == 10:
                            print("Usted eligió la función de las 10 a.m.")
                            print(" ")
                            print("Elija su asiento (asientos disponibles 25)")
                            print(" ")
                            print("Asiento = 0 (asiento disponible)\nAsiento = 1 (asiento ocupado)")
                            print("")
                            while True:
                                try:
                                    time.sleep(2)
                                    mostrar(asientosv)
                                    print("")
                                    h=int(input("**Tome en cuenta 'fila' como valor numérico**\n(A=0),(B=1),(C=2),(D=3),(E=4)\n\n¿Qué fila vas a elegir? ="))
                                    l=int(input("¿Qué columna vas elegir? ="))
                                    elegir(asientosv,h,l)
                                    break
                                except ValueError:
                                    print("")
                                    print("*Por favor, introduzca un número válido*")
                                    print("")
                                    #if eleccion de asientos
            #eleccion de hora (5pm)
                        if hora == 5:
                            print("Usted eligió la función de las 5 p.m. ")
                            print(" ")
                            print("Elija su asiento (asientos disponibles 25)")
                            print(" ")
                            print("Asiento = 0 (asiento disponible)\nAsiento = 1 (asiento ocupado)")
                            print("")
                            while True:
                                try:
                                    time.sleep(2)
                                    mostrar(asientosv5)
                                    print("")
                                    hh=int(input("**Tome en cuenta 'fila' como valor numérico**\n(A=0),(B=1),(C=2),(D=3),(E=4)\n\n¿Qué fila vas a elegir? ="))
                                    ll=int(input("¿Qué columna vas elegir? ="))
                                    elegir(asientosv5,hh,ll)
                                    break
                                except ValueError:
                                    print("")
                                    print("*Por favor, introduzca un número válido*")
                                    print("")
                    time.sleep(1.3)
                    print("")
                    print("")
                    print("Gracias por su compra")
                    print("")
                    print("Disfrute la función")
                    print("")
                    time.sleep(3)
                #funcion 2
            elif pelicula == 2:
                        time.sleep(.4)
                        print("Usted eligió ver la película de 'Halloween Kills'")
                        print(" ")
                        time.sleep(1)
                        print("Horario de funciones = 11 a.m. y 5 p.m. ")
                        print(" ")
                    #hora de la pelicula
                        while True:
                            try:
                                time.sleep(1)
                                hora = int(input("Ingrese la hora de la película que desea ver:  "))
                                print(" ")
                                while hora != 11 and hora !=5:
                                    time.sleep(.5)
                                    print("---ERROR--- Ingrese una hora válida ")
                                    hora = int(input())
                                break
                            except ValueError:
                                print("")
                                print("*Por favor, introduzca un número válido*")
                                print("")
                        while True:
                            try:
                                time.sleep(.5)
                                print("¿Cuántos boletos se comprarán?")
                                personas = int(input())
                                print("")
                                while personas >= 26 or personas <= 0:
                                    time.sleep(.5)
                                    print("---ERROR--- Cantidad de boletos inválido")
                                    print("")
                                    time.sleep(.5)
                                    print("¿Cuántos boletos se comprarán?")
                                    personas = int(input())
                                break
                            except ValueError:
                                print("")
                                print("*Por favor, introduzca un número válido*")
                                print("")
                        for cont in range(1,personas+1):
                    #eleccion de hora (10 am )
                            if hora == 11:
                                print("Usted eligió la función de las 11 a.m.")
                                print(" ")
                                print("Elija su asiento (asientos disponibles 25)")
                                print(" ")
                                print("Asiento = 0 (asiento disponible)\nAsiento = 1 (asiento ocupado)")
                                print(" ")
                                while True:
                                    try:
                                        time.sleep(2)
                                        mostrar(asientosh)
                                        print("")
                                        ha=int(input("**Tome en cuenta 'fila' como valor numérico**\n(A=0),(B=1),(C=2),(D=3),(E=4)\n\n¿Qué fila vas a elegir? ="))
                                        ww=int(input("¿Qué columna vas elegir? ="))
                                        elegir(asientosh,ha,ww)
                                        break
                                    except ValueError:
                                        print("")
                                        print("*Por favor, introduzca un número válido*")
                                        print("")
                    #eleccion de hora (5pm)
                            if hora == 5:
                                print("Usted eligió la función de las 5 p.m. ")
                                print(" ")
                                print("Elija su asiento (asientos disponibles 25)")
                                print(" ")
                                print("Asiento = 0 (asiento disponible)\nAsiento = 1 (asiento ocupado)")
                                print("")
                                while True:
                                    try:
                                        time.sleep(2)
                                        mostrar(asientosh5)
                                        print("")
                                        ha5=int(input("**Tome en cuenta 'fila' como valor numérico**\n(A=0),(B=1),(C=2),(D=3),(E=4)\n\n¿Qué fila vas a elegir? ="))
                                        ww5=int(input("¿Qué columna vas elegir? ="))
                                        elegir(asientosh5,ha5,ww5)
                                        break
                                    except ValueError:
                                        print("")
                                        print("*Por favor, introduzca un número válido*")
                                        print("")
                        time.sleep(1.3)
                        print("")
                        print("")
                        print("Gracias por su compra")
                        print("")
                        print("Disfrute la función")
                        print("")
                        time.sleep(3)
                #funcion 3
            elif pelicula == 3:
                        time.sleep(.4)
                        print("Usted eligió ver la película de 'Paw Patrol'")
                        print(" ")
                        time.sleep(1)
                        print("Horario de funciones = 3 p.m. y 9 p.m. ")
                        print(" ")
                    #hora de la pelicula
                        while True:
                            try:
                                time.sleep(1)
                                hora = int(input("Ingrese la hora de la película que desea ver:  "))
                                print(" ")
                                while hora != 9 and hora !=3:
                                    time.sleep(.5)
                                    print("---ERROR--- Ingrese una hora válida ")
                                    hora = int(input())
                                break
                            except ValueError:
                                print("")
                                print("*Por favor, introduzca un número válido*")
                                print("")
                        while True:
                            try:
                                time.sleep(.5)
                                print("¿Cuántos boletos se comprarán?")
                                personas = int(input())
                                print("")
                                while personas >= 26 or personas <= 0:
                                    time.sleep(.5)
                                    print("---ERROR--- Cantidad de boletos inválido")
                                    print("")
                                    time.sleep(.5)
                                    print("¿Cuántos boletos se comprarán?")
                                    personas = int(input())
                                break
                            except ValueError:
                                print("")
                                print("*Por favor, introduzca un número válido*")
                                print("")
                        for cont in range(1,personas+1):
                    #eleccion de hora (10 am )
                            if hora == 3:
                                print("Usted eligió la función de las 3 p.m.")
                                print(" ")
                                print("Elija su asiento (asientos disponibles 25)")
                                print(" ")
                                print("Asiento = 0 (asiento disponible)\nAsiento = 1 (asiento ocupado)")
                                print("")
                                while True:
                                    try:
                                        time.sleep(2)
                                        mostrar(asientosp)
                                        print("")
                                        pa=int(input("**Tome en cuenta 'fila' como valor numérico**\n(A=0),(B=1),(C=2),(D=3),(E=4)\n\n¿Qué fila vas a elegir? ="))
                                        paw=int(input("¿Qué columna vas elegir? ="))
                                        elegir(asientosp,pa,paw)
                                        break
                                    except ValueError:
                                        print("")
                                        print("*Por favor, introduzca un número válido*")
                                        print("")
                    #eleccion de hora (9pm)
                            if hora == 9:
                                print("Usted eligió la función de las 9 p.m. ")
                                print(" ")
                                print("Elija su asiento (asientos disponibles 25)")
                                print(" ")
                                print("Asiento = 0 (asiento disponible)\nAsiento = 1 (asiento ocupado)")
                                print("")
                                while True:
                                    try:
                                        time.sleep(2)
                                        mostrar(asientosp9)
                                        print("")
                                        pa9=int(input("**Tome en cuenta 'fila' como valor numérico**\n(A=0),(B=1),(C=2),(D=3),(E=4)\n\n¿Qué fila vas a elegir? ="))
                                        paw9=int(input("¿Qué columna vas elegir? ="))
                                        elegir(asientosp9,pa9,paw9)
                                        break
                                    except ValueError:
                                        print("")
                                        print("*Por favor, introduzca un número válido*")
                                        print("")
                        time.sleep(1.3)
                        print("")
                        print("")
                        print("Gracias por su compra")
                        print("")
                        print("Disfrute la función")
                        print("")
                        time.sleep(3)

            elif pelicula == 4:
                print("¿Realmente quiere salir del programa? ")
                print(" ")
                print("Ingrese el número 0 para finalizar, presione otro número para permanecer  ")
                s = int(input())
                print(" ")
                if s == 0:
                    sys.exit("Usted ha decidido finalizar el programa ")
                else:
                    print("Usted ha decidido permanecer en el programa")

            else:
                print("*Función no disponible*")
                print("")

        break
    except ValueError:
        print("")
        print("*Por favor, introduzca un número válido*")
        print("")
