#realizar un programa que muestre una lista de productos, permita ingresar el codigo del producto
#y la cantidad de unidades que desea comprar, finalmente mostrar el total a pagar simulando una factura
import os
import sys
#contadores de productos 100 = inventario, 0 = productos comprados
opcion = 0
#contador aceite
aceite = 100
aceiteT = 0
costo = 0
#contador harina
harina = 100
harinaT = 0
costo1 = 0
#contador papel
papel = 100
papelT = 0
costo2 = 0
#contador shampoo
shampoo = 100
shampooT = 0
costo3 = 0
#contador maruchan
maruchan = 100
maruchanT = 0
costo4 = 0
#contador coca cola
coca = 100
cocaT = 0
costo5 = 0
#contador papas
papas = 100
papasT = 0
costo6 = 0
#funcion menu
def menu():
    print("presiona enter para continuar:")
    input()
    os.system("cls")
    print("a. empleado :\n")
    print("b. cliente:\n")
    print("c. salir\n")
    print("elija si es cliente o empleado :)\n")
    opc = input("presiona les letras segun la opcion a la que desees acceder: ")
    return opc
#funcion de comprar aceite
def comprar_aceite():
    #variables globales
    global aceite
    global aceiteT
    global costo
    print("el costo del aceite es de 25 pesos ")
    print(" ")
    cantidad=int(input("Ingrese la cantidad de aceite que desea comprar: "))
    print(" ")
    if cantidad <= aceite:
        aceiteT = aceiteT + cantidad
        print("la cantidad de aceite que lleva es de:",aceiteT)
        print(" ")
        costo = (costo + aceiteT) *25
        print("el costo de su aceite es de:",costo)
        print(" ")
        if cantidad <= aceite:
            aceite=aceite-cantidad
            print ("Cantidad de aceite existente en el inventario: ",aceite)
    elif aceite==0:
        print ("Debe reabastecer el inventario")
        print(" ")
    elif cantidad> aceite:
        print ("No tiene disponibilidad suficiente del producto")
        print(" ")
#funcion comprar harina
def comprar_harina():
    #variables globales
    global harina
    global harinaT
    global costo1
    print("el costo de la harina es de 20 pesos")
    print(" ")
    cantidad1 = int(input("ingrese la cantidad de harina que desea comprar: "))
    print(" ")
    if cantidad1 <= harina:
        harinaT = harinaT + cantidad1;
        print("la cantidad de harina que lleva es de", harinaT)
        print(" ")
        costo1 = (costo1 + harinaT) * 20
        print("el costo de su harina es de: ", costo1)
        print("")
        if cantidad1 <= harina:
            harina = harina-cantidad1
            print("la cantidad de aceite existente en el inventario es de: ", harina)
            print(" ")
    elif harina == 0:
        print("debe reestablecer el inventario")
        print(" ")
    elif cantidad1 > papel:
        print("no hay suficiente disponibilidad de producto :(")
        print(" ")
#funcion comprar papel higienico
def comprar_papel():
    #variables globales
    global papel
    global papelT
    global costo2
    print("el costo de el papel es de 9 pesos")
    print(" ")
    cantidad2 = int(input("ingrese la cantidad de papel higienico que desea comprar: "))
    print(" ")
    if cantidad2 <= papel:
        papelT = papelT + cantidad2;
        print("la cantidad de papel higienico que lleva es de", papelT)
        print(" ")
        costo2 = (costo2 + papelT) * 9
        print("el costo de su papel higienico es de: ", costo2)
        print(" ")
        if cantidad2 <= papel:
            papel = papel-cantidad2
            print("la cantidad de aceite existente en el inventario es de: ", papel)
            print(" ")
    elif papel == 0:
        print("debe reestablecer el inventario")
        print(" ")
    elif cantidad2 > papel:
        print("no hay suficiente disponibilidad de producto :(")
        print(" ")
#funcion comprar shampoo
def comprar_shampoo():
    #variables globales
    global shampoo
    global shampooT
    global costo3
    print("el costo de el shampoo es de 35 pesos")
    print(" ")
    cantidad3 = int(input("ingrese la cantidad de shampoo que desea comprar: "))
    print(" ")
    if cantidad3 <= shampoo:
        shampooT = shampooT + cantidad3;
        print("la cantidad de shampoo que lleva es de", shampooT)
        print(" ")
        costo3 = (costo3 + shampooT) * 35
        print("el costo de su shampoo es de: ", costo3)
        print(" ")
        if cantidad3 <= shampoo:
            shampoo = shampoo-cantidad3
            print("la cantidad de shampoo existente en el inventario es de: ", shampoo)
            print(" ")
    elif shampoo == 0:
        print("debe reestablecer el inventario")
        print(" ")
    elif cantidad3 > shampoo:
        print("no hay suficiente disponibilidad de producto :(")
        print(" ")
#funcion comprar maruchan
def comprar_maruchan():
    #variables globales
    global maruchan
    global maruchanT
    global costo4
    print("el costo de la maruchan es de 12 pesos")
    print(" ")
    cantidad4 = int(input("ingrese la cantidad de maruchan que desea comprar: "))
    print(" ")
    if cantidad4 <= maruchan:
        maruchanT = maruchanT + cantidad4;
        print("la cantidad de maruchan que lleva es de", maruchanT)
        print(" ")
        costo4 = (costo4 + maruchanT) * 12
        print("el costo de su maruchan es de: ", costo4)
        print(" ")
        if cantidad4 <= maruchan:
            maruchan = maruchan-cantidad4
            print("la cantidad de maruchan existente en el inventario es de: ", maruchan)
            print(" ")
    elif maruchan == 0:
        print("debe reestablecer el inventario")
        print(" ")
    elif cantidad4 > maruchan:
        print("no hay suficiente disponibilidad de producto :(")
#funcion comprar cocona
def comprar_cocona():
    #variables globales
    global coca
    global cocaT
    global costo5
    print("el costo de la cocona es de 25 pesos")
    print(" ")
    cantidad5 = int(input("ingrese la cantidad de coca cola que desea comprar: "))
    print(" ")
    if cantidad5 <= coca:
        cocaT = cocaT + cantidad5;
        print("la cantidad de cocona que lleva es de", cocaT)
        print(" ")
        costo5 = (costo5 + cocaT) * 25
        print("el costo de su coca es de: ", costo5)
        print(" ")
        if cantidad5 <= coca:
            coca = coca-cantidad5
            print("la cantidad de coca cola existente en el inventario es de: ", coca)
            print(" ")
    elif coca == 0:
        print("debe reestablecer el inventario")
        print(" ")
    elif cantidad5 > coca:
        print("no hay suficiente disponibilidad de producto :(")
def comprar_papas():
    #variables globales
    global papas
    global papasT
    global costo6
    print("el costo de las papas es de 13 pesos")
    print(" ")
    cantidad6 = int(input("ingrese la cantidad de harina que desea comprar: "))
    print(" ")
    if cantidad6 <= papas:
        papasT = papasT + cantidad6;
        print("la cantidad de papas que lleva es de", papasT)
        print(" ")
        costo6 = (costo6 + papasT) * 13
        print("el costo de su harina es de: ", costo6)
        print(" ")
        if cantidad6 <= papas:
            papas = papas-cantidad6
            print("la cantidad de papas existente en el inventario es de: ", papas)
            print(" ")
    elif papas == 0:
        print("debe reestablecer el inventario")
        print(" ")
    elif cantidad6 > papas:
        print("no hay suficiente disponibilidad de producto :(")
#funcion revisar aceite
def revisar_aceite():
    print("usted ha decidido revisar el inventario de aceite")
    print(" ")
    print("el inventario de aceite es de: ",aceite)
    print("")
    if aceite <= 20:
        print("se recomienda restablecer su inventario.")
        print(" ")
    else:
        print("la cantidad de inventario es suficiente, pero puede reestablecer si lo desea en la opcion de rellenar inventario")
        print(" ")
#funcion revisar harina
def revisar_harina():
    print("usted ha decidido revisar el inventario de harina")
    print(" ")
    print("el inventario de harina es de: ",harina)
    print("")
    if harina <= 20:
        print("se recomienda restablecer su inventario.")
        print(" ")
    else:
        print("la cantidad de inventario es suficiente, pero puede reestablecer si lo desea en la opcion de rellenar inventario")
        print(" ")
#funcion revisar papel higienico
def revisar_papel():
    print("usted ha decidido revisar el inventario de papel higienico")
    print(" ")
    print("el inventario de papel higienico es de: ",papel)
    print("")
    if papel <= 20:
        print("se recomienda restablecer su inventario.")
        print(" ")
    else:
        print("la cantidad de inventario es suficiente, pero puede reestablecer si lo desea en la opcion de rellenar inventario")
        print(" ")
#funcion revisar shampoo
def revisar_shampoo():
    print("usted ha decidido revisar el inventario de shampoo")
    print(" ")
    print("el inventario de shampoo es de: ",shampoo)
    print("")
    if shampoo <= 20:
        print("se recomienda restablecer su inventario.")
        print(" ")
    else:
        print("la cantidad de inventario es suficiente, pero puede reestablecer si lo desea en la opcion de rellenar inventario")
        print(" ")
#funcion revisar maruchan
def revisar_maruchan():
    print("usted ha decidido revisar el inventario de maruchan")
    print(" ")
    print("el inventario de maruchan es de: ",maruchan)
    print("")
    if maruchan <= 20:
        print("se recomienda restablecer su inventario.")
        print(" ")
    else:
        print("la cantidad de inventario es suficiente, pero puede reestablecer si lo desea en la opcion de rellenar inventario")
        print(" ")
#funcion revisar coca cola
def revisar_cocona():
    print("usted ha decidido revisar el inventario de coca cola")
    print(" ")
    print("el inventario de coca cola es de: ",coca)
    print("")
    if coca <= 20:
        print("se recomienda restablecer su inventario.")
        print(" ")
    else:
        print("la cantidad de inventario es suficiente, pero puede reestablecer si lo desea en la opcion de rellenar inventario")
        print(" ")
#funcion de revisar papas
def revisar_papas():
    print("usted ha decidido revisar el inventario de papas fritas")
    print(" ")
    print("el inventario de papas fritas es de: ",papas)
    print("")
    if papas <= 20:
        print("se recomienda restablecer su inventario.")
        print(" ")
    else:
        print("la cantidad de inventario es suficiente, pero puede reestablecer si lo desea en la opcion de rellenar inventario")
        print(" ")
#funciones para rellenar inventario
#funcion rellenar aceite
def rellenar_aceite():
    global aceite
    print("usted decidio abastecer el aceite")
    print(" ")
    relleno = int(input("ingrese la cantidad de producto que desea abastecer "))
    print(" ")
    aceite = aceite + relleno
    print(" la cantidad actual de aceite despues del abastecimiento es de: ",aceite)
#funcion rellenar harina
def rellenar_harina():
    global harina
    print("usted decidio abastecer la harina")
    print(" ")
    relleno1 = int(input("ingrese la cantidad de producto que desea abastecer "))
    print(" ")
    harina = harina + relleno1
    print(" la cantidad actual de aceite despues del abastecimiento es de: ",harina)
#funcion rellenar papel
def rellenar_papel():
    global papel
    print("usted decidio rellenar el papel higienico")
    print("")
    relleno2 = int(input("ingrese la cantidad de producto que desea abastecer"))
    print(" ")
    papel = papel + relleno2
    print("la cantidad actual de aceite despues del abastecimiento es de: ",papel)
#funcion rellenar shampoo
def rellenar_shampoo():
    global shampoo
    print("usted decidio rellenar el shampoo")
    print(" ")
    relleno3 = int(input("ingrese la cantidad de producto que desea abastecer "))
    print(" ")
    shampoo = shampoo + relleno3
    print(" la cantidad actual de shampoo despues del abastecimiento es de: ",shampoo)
#funcion rellenar maruchan
def rellenar_maruchan():
    global maruchan
    print("usted decidio rellenar las maruchan")
    print(" ")
    relleno4 = int(input("ingrese la cantidad de producto que desea abastecer "))
    print(" ")
    maruchan = maruchan + relleno4
    print(" la cantidad actual de maruchan despues del abastecimiento es de: ",maruchan)
#funcion rellenar coca cola
def rellenar_coca():
    global coca
    print("usted decidio rellenar las coca colas")
    print(" ")
    relleno5 = int(input("ingrese la cantidad de producto que desea abastecer "))
    print(" ")
    coca = coca + relleno5
    print(" la cantidad actual de coca cola despues del abastecimiento es de: ",coca)
#funcion rellenar papas fritas
def rellenar_papas():
    global papas
    print("usted decidio rellenar las papas fritas")
    print(" ")
    relleno6 = int(input("ingrese la cantidad de producto que desea abastecer "))
    print(" ")
    papas = papas + relleno6
    print(" la cantidad actual de papas fritas despues del abastecimiento es de: ",papas)
#menu principal
while opcion != 10:

    opcion = menu()
    #menus empleados
    if opcion =="a":
        opc2 = int(input("1. revisar inventario\n"+
                         "2. rellenar inventario\n"+
                         "elija una opcion\n"))
        if opc2 == 1:
            print("que producto desea revisar su inventario? ")
            inventario = int(input( "11. aceite:\n"+
                                    "12. harina:\n"+
                                    "13. papel higienico:\n"+
                                    "14. shampoo\n"+
                                    "15. maruchan\n"+
                                    "16. cocona de 2.5 lts\n"+
                                    "17. papas fritas\n"+
                                    "elija el producto que quiere revisar :)\n"))
            if inventario == 11:
                revisar_aceite()
            if inventario == 12:
                revisar_harina()
            if inventario == 13:
                revisar_papel()
            if inventario == 14:
                revisar_shampoo()
            if inventario == 15:
                revisar_maruchan()
            if inventario == 16:
                revisar_cocona()
            if inventario == 17:
                revisar_papas()

        elif opc2 == 2:
            print("que producto desea rellenar? ")
            relleno = int(input("11. aceite:\n"+
                                "12. harina:\n"+
                                "13. papel higienico:\n"+
                                "14. shampoo\n"+
                                "15. maruchan\n"+
                                "16. cocona de 2.5 lts\n"+
                                "17. papas fritas\n"+
                                "elija el producto que quiere rellenar :)\n"))
            if relleno == 11:
                rellenar_aceite()
            if relleno == 12:
                rellenar_harina()
            if relleno == 13:
                rellenar_papel()
            if relleno == 14:
                rellenar_shampoo()
            if relleno == 15:
                rellenar_maruchan()
            if relleno == 16:
                rellenar_coca()
            if relleno == 17:
                rellenar_papas()
    #menus cliente
    if opcion == "b":
        opc3 = int(input("1. comprar productos\n"+
                         "2. mirar lo comprado\n"+
                         "elija una opcion "))
        #menu empleados 2
        if opc3 == 1:
            productos = int(input(  "2. aceite:\n"+
                                    "3. harina:\n"+
                                    "4. papel higienico:\n"+
                                    "5. shampoo\n"+
                                    "6. maruchan\n"+
                                    "7. cocona de 2.5 lts\n"+
                                    "8. papas fritas\n"+
                                    "elija el producto que quiere comprar :)\n"+
                                    "si lo requiere presione otro numero para volver al menu inicial: "))
            if productos == 2:
                comprar_aceite()
            if productos == 3:
                comprar_harina()
            if productos == 4:
                comprar_papel()
            if productos == 5:
                comprar_shampoo()
            if productos == 6:
                comprar_maruchan()
            if productos == 7:
                comprar_cocona()
            if productos == 8:
                comprar_papas()
        if opc3 == 2:
            print("usted eligio mirar lo comprado ")
            print("usted compro ",aceiteT,"de botellas de aceite con un costo de",costo,"pesos")
            print("usted compro ",harinaT,"de bolsas harina con un costo de ",costo1,"pesos")
            print("usted compro ",papelT," de rollos de papel higienico con un costo de ",costo2,"pesos")
            print("usted compro ",shampooT,"de shampoo con un costo de ",costo3,"pesos")
            print("usted compro ",maruchanT,"de maruchan con un costo de ",costo4,"pesos")
            print("usted compro ",cocaT," litros de coca con un costo de ",costo5,"pesos")
            print("usted compro ",papasT,"de bolsas papas con un costo de ",costo6,"pesos")
#opcion salir
    if opcion == "c":
        print("realmente desea finalizar el programa?")
        print("ingrese el numero cero para finalizar, ingrese cualquier otro numero para permanecer\n")
        s = int(input())
        if s == 0:
            sys.exit("usted decidio finalizar el programa.")
        else:
            print("usted ha decidido permanecer en el programa")
