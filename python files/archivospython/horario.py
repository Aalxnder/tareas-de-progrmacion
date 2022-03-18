import os
import sys
dia = 0
def menu ():
    print("presiona enter para continuar")
    input()
    os.system("cls")
    opc = int(input("1. lunes (opcion 1)\n"+
                    "2. martes (opcion 2)\n"+
                    "3. miercoles (opcion 3)\n"+
                    "4. jueves (opcion 4)\n"+
                    "5. vienes (opcion 5)\n"+
                    "6. sabado (opcion 6)\n"+
                    "7. domingo (opcion 7)\n"+
                    "8. salir (opcion 8)\n"+
                    "elija una opcion \n"))
    return opc
    #fin funcion menu
print("horario personal semanal")
print(" ")
print("horas=\n 8, 9, 10, 11\n 12, 13, 14, 15\n 16, 17, 18, 19\n 20, 21 ,22 23 ")
print("ingrese el numero del dia de el que quiere ver su horario ")
while dia != 9:
    dia = menu()
    #lunes
    if dia == 1:
        print("el dia es lunes")
        print("---------------")
        print("ingrese la hora que quiere revisar en formato de 24 horas  ")
        hora = float(input())
        while hora >=24:
            print("---error--- ingrese una hora valida")
            hora = float(input())
        if hora == 0:
            print("actividad:\n tiempo de ocio")
        elif hora == 8:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 9:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 10:
            print("actividad:\n tiempo de ejercicio ")
        elif hora == 11:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 12:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 13:
            print("actividad:\n ingles de proulex")
        elif hora == 14:
            print("actividad:\n ingles de proulex")
        elif hora == 15:
            print("actividad:\n tiempo para hacer tarea ")
        elif hora == 16:
            print("actividad:\n tiempo para hacer tarea ")
        elif hora == 17:
            print("actividad:\n clase de logica matematica")
        elif hora == 18:
            print("actividad:\n tiempo de ocio ")
        elif hora == 19:
            print("actividad:\n tiempo de ocio ")
        elif hora == 20:
            print("actividad:\n salir W.M.L <3")
        elif hora == 21:
            print("actividad:\n salir W.M.L <3")
        elif hora == 22:
            print("actividad:\n hacer tarea")
        elif hora == 23:
            print("actividad:\n hacer tarea")
    #martes
    if dia == 2:
        print("el dia es martes")
        print("----------------")
        print("ingrese la hora que quiere revisar en formato de 24 horas  ")
        hora = float(input())
        while hora >=24:
            print("---error--- ingrese una hora valida")
            hora = float(input())
        if hora == 0:
            print("actividad:\n tiempo de ocio")
        elif hora == 8:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 9:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 10:
            print("actividad:\n tiempo de ejercicio ")
        elif hora == 11:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 12:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 13:
            print("actividad:\n clase de programacion")
        elif hora == 14:
            print("actividad:\n clase de programacion")
        elif hora == 15:
            print("actividad:\n ocio y comida ")
        elif hora == 16:
            print("actividad:\n ocio y comida")
        elif hora == 17:
            print("actividad:\n practicar progrmacion ")
        elif hora == 18:
            print("actividad:\n practicar progrmacion ")
        elif hora == 19:
            print("actividad:\n ir a tocar con ren ")
        elif hora == 20:
            print("actividad:\n ir a tocar con ren ")
        elif hora == 21:
            print("actividad:\n hacer tarea")
        elif hora == 22:
            print("actividad:\n hacer tarea")
        elif hora == 23:
            print("actividad:\n ocio")
    #miercoles
    if dia == 3:
        print("el dia es miercoles")
        print("-------------------")
        print("ingrese la hora que quiere revisar en formato de 24 horas  ")
        hora = float(input())
        while hora >=24:
            print("---error--- ingrese una hora valida")
            hora = float(input())
        if hora == 0:
            print("actividad:\n tiempo de ocio")
        elif hora == 8:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 9:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 10:
            print("actividad:\n tiempo de ejercicio ")
        elif hora == 11:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 12:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 13:
            print("actividad:\n ingles de proulex")
        elif hora == 14:
            print("actividad:\n ingles de proulex")
        elif hora == 15:
            print("actividad:\n ocio y programacion breve ")
        elif hora == 16:
            print("actividad:\n ocio y programacion breve ")
        elif hora == 17:
            print("actividad:\n clase de logica matematica")
        elif hora == 18:
            print("actividad:\n hacer tareas ")
        elif hora == 19:
            print("actividad:\n hacer tareas ")
        elif hora == 20:
            print("actividad:\n ensayar con la banda")
        elif hora == 21:
            print("actividad:\n ensayar con la banda")
        elif hora == 22:
            print("actividad:\n ensayar con la banda")
        elif hora == 23:
            print("actividad:\n ocio")
    #jueves
    if dia == 4:
        print("el dia es jueves")
        print("----------------")
        print("ingrese la hora que quiere revisar en formato de 24 horas  ")
        hora = float(input())
        while hora >=24:
            print("---error--- ingrese una hora valida")
            hora = float(input())
        if hora == 0:
            print("actividad:\n tiempo de ocio")
        elif hora == 8:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 9:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 10:
            print("actividad:\n tiempo de ejercicio ")
        elif hora == 11:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 12:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 13:
            print("actividad:\n clase de programacion")
        elif hora == 14:
            print("actividad:\n clase de programacion")
        elif hora == 15:
            print("actividad:\n clase de ingenieria  ")
        elif hora == 16:
            print("actividad:\n clase de ingenieria  ")
        elif hora == 17:
            print("actividad:\n practicar programacion")
        elif hora == 18:
            print("actividad:\n practicar programacion ")
        elif hora == 19:
            print("actividad:\n salir W.M.L <3 ")
        elif hora == 20:
            print("actividad:\n salir W.M.L <3")
        elif hora == 21:
            print("actividad:\n salir W.M.L <3")
        elif hora == 22:
            print("actividad:\n hacer tarea")
        elif hora == 23:
            print("actividad:\n hacer tarea")
    #viernes
    if dia == 5:
        print("el dia es viernes")
        print("-----------------")
        print("ingrese la hora que quiere revisar en formato de 24 horas  ")
        hora = float(input())
        while hora >=24:
            print("---error--- ingrese una hora valida")
            hora = float(input())
        if hora == 0:
            print("actividad:\n tiempo de ocio")
        elif hora == 8:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 9:
            print("actividad:\n clase de fisica con el pelas")
        elif hora == 10:
            print("actividad:\n clase de fisica con el pelas ")
        elif hora == 11:
            print("actividad:\n clase de fisica con el pelas")
        elif hora == 12:
            print("actividad:\n clase de fisica con el pelas")
        elif hora == 13:
            print("actividad:\n ingles de proulex")
        elif hora == 14:
            print("actividad:\n ingles de proulex")
        elif hora == 15:
            print("actividad:\n el chismesito de la clase de etica ")
        elif hora == 16:
            print("actividad:\n el chismesito de la clase de etica")
        elif hora == 17:
            print("actividad:\n el chismesito de la clase de etica")
        elif hora == 18:
            print("actividad:\n el chismesito de la clase de etica")
        elif hora == 19:
            print("actividad:\n tiempo de ocio (puede ser guitarra depende lo arto que este) ")
        elif hora == 20:
            print("actividad:\n salir W.M.L <3")
        elif hora == 21:
            print("actividad:\n salir W.M.L <3")
        elif hora == 22:
            print("actividad:\n hacer tarea")
        elif hora == 23:
            print("actividad:\n hacer tarea")
    #sabado
    if dia == 6:
        print("el dia es sabado")
        print("----------------")
        print("ingrese la hora que quiere revisar en formato de 24 horas  ")
        hora = float(input())
        while hora >=24:
            print("---error--- ingrese una hora valida")
            hora = float(input())
        if hora == 0:
            print("actividad:\n tiempo de ocio")
        elif hora == 8:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 9:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 10:
            print("actividad:\n tiempo de ejercicio ")
        elif hora == 11:
            print("actividad:\n tareas")
        elif hora == 12:
            print("actividad:\n tareas")
        elif hora == 13:
            print("actividad:\n ocio (guitarra)")
        elif hora == 14:
            print("actividad:\n ocio (guitarra)")
        elif hora == 15:
            print("actividad:\n trabajar ")
        elif hora == 16:
            print("actividad:\n trabajar ")
        elif hora == 17:
            print("actividad:\n trabajar ")
        elif hora == 18:
            print("actividad:\n trabajar ")
        elif hora == 19:
            print("actividad:\n trabajar")
        elif hora == 20:
            print("actividad:\n ir a ensayar con la bandita")
        elif hora == 21:
            print("actividad:\n ir a ensayar con la bandita")
        elif hora == 22:
            print("actividad:\n ir a ensayar con la bandita")
        elif hora == 23:
            print("actividad:\n ocio (hasta q me de sueño)")
    if dia == 7:
        print("el dia es domingo")
        print("-----------------")
        print("ingrese la hora que quiere revisar en formato de 24 horas  ")
        hora = float(input())
        while hora >=24:
            print("---error--- ingrese una hora valida")
            hora = float(input())
        if hora == 0:
            print("actividad:\n tiempo de ocio")
        elif hora == 8:
            print("actividad:\n hoy se mime hasta tarde")
        elif hora == 9:
            print("actividad:\n hora de despertar, ocio y desayunar")
        elif hora == 10:
            print("actividad:\n ir por comida y a vagar por el tianguis")
        elif hora == 11:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 12:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 13:
            print("actividad:\n tiempo de practicar guitarra")
        elif hora == 14:
            print("actividad:\n ocio")
        elif hora == 15:
            print("actividad:\n trabajo")
        elif hora == 16:
            print("actividad:\n trabajo")
        elif hora == 17:
            print("actividad:\n trabajo")
        elif hora == 18:
            print("actividad:\n trabajo ")
        elif hora == 19:
            print("actividad:\n ir a tocar a ren ")
        elif hora == 20:
            print("actividad\n ir a tocar a ren ")
        elif hora == 21:
            print("actividad:\n ocio o practicar programacion, depende las circunstancias")
        elif hora == 22:
            print("actividad:\n ocio o practicar programacion, depende las circunstancias")
        elif hora == 23:
            print("actividad:\n ocio")
    if dia == 8:
        print("¿realmente quieres salir de el programa?")
        print("oprima el numero 0 para finalizar o cualquier otro numero para permanecer ")
        s = int(input())
        if s == 0:
            sys.exit("usted ha decidido finalizar el programa. ")
        else:
            print("usted ha decidido permanecer en el programa. ")
    if dia == 9:
        print(" ")
print(" ")
print("esta es una version beta de mi horario personal semanal")
print("podria variar con el tiempo y circunstancias especiales")
print("pd: arriba el bicho siuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu")
