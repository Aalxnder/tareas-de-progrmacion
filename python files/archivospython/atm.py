import os,sys,random,time
opcion = 0
codigo = 2187
intentos = 3
fondos = 2000
codigoi = 0
retiro = 0
deposito = 0
pagos = 0
numero1 = 0
def menu():
    print("presiona enter para continuar. ");
    input()
    os.system("cls")

    opc = int(input("[1] ingresar como administrador.\n"+
                    "[2] ingresar como usuario.\n"+
                    "[3] salir.\n"+
                    "    elija una opcion.\n"))
    return opc
#funcion menu de administrador
def menu_adm():

    print("a que opcion le gustaria acceder? ")
    opcion1 = int(input("[1] revisar fondos.\n"+
                        "[2] rellenar fondos.\n"+
                        "[3] cambiar clave de inicio de admin.\n"+
                        "[4] visualizar movimientos recientes.\n"+
                        "[5] borrar transaciones recientes.\n"+
                        "[6] volver al menu\n"+
                            "    elija el producto que quiere revisar: "))
    if opcion1 == 1:
        revisar_fondos()
    elif opcion1 == 2:
        rellenar_fondos()
    elif opcion1 == 3:
        cambiar_clave()
    elif opcion1 == 4:
        mostrar_movimientos_recientes()
    elif opcion1 == 5:
        eliminar_eliminar_movimientos_recientes()
    elif opcion1 == 6:
        menu()
#funcion menu de cliente
def menu_cliente():
    print("a que opcion le gustaria acceder? ")
    opcion2 = int(input("[1] retirar efectivo:\n"+
                        "[2] depositar a una tarjeta:\n"+
                        "[3] pago de servicios:\n"+
                        "[4] recargar credito movil:\n"+
                        "[5] volver al menu\n"+
                            "    elija el producto que quiere revisar:\n "))
    if opcion2 == 1:
        retirar_efectivo()
    elif opcion2 == 2:
        depositar_efectivo()
    elif opcion2 == 3:
        pago_servicios()
    elif opcion2 == 4:
        recargas()
    elif opcion2 == 5:
        menu()


#funcion para ver cuantos fondos existen en el cajero
def revisar_fondos():
    global fondos
    os.system("cls")
    time.sleep(.5)
    print("usted eligio la opcion de revisar los fondos del cajero\n")
    print("los fondos restantes son:",fondos,"\n")
    if fondos <=200:
        print("queda poco dinero, se recomienda reestablecer los fondos\n")
        print("----------------------------------------")
        time.sleep(.5)
    elif fondos > 200 and fondos <= 1000:
        print("el dinero es suficiente pero puede acabarse en cualquier momento, se recomienda estar al pendiente\n")
        print("----------------------------------------")
        time.sleep(.5)
    elif fondos > 1000:
        print("el cajero aun tiene fondos suficientes\n")
        print("----------------------------------------")
        time.sleep(.5)
    menu_adm()

#funcion para rellenar fondos manualmente, pero tambien se llenaran a la hora de realizar depositos
def rellenar_fondos():
    global fondos
    os.system("cls")
    time.sleep(.5)
    print("Rellenar fondos del cajero automatico:\n")
    print("ingresa la cantidad de dinero que deseas abastecer:\n")
    rel = int(input())
    time.sleep(.5)
    fondos = fondos + rel
    print("abastecimiento exitoso!!\n")
    print("los fondos ahora son de:\n",fondos)
    print("--------------------------------")
    menu_adm()
#funcion ingresar clave de acceso
def ingresar_clave():
    global codigoi
    global codigo
    global intentos
    print("ingresa el codigo de acceso: \n")
    print("tiene 3 oportunidades para ingresar el codigo correcto, de lo contrario el sistema se cerrara")
    codigoi = int(input())
    os.system("cls")
    while codigoi != codigo:
        intentos = intentos -1
        print("intento fallido, intente de nuevo.")
        print("tus intentos restantes son: ",intentos)
        time.sleep(.5)
        print("ingrese de nuevo el codigo de acceso")
        codigoi = int(input())
        if intentos == 0:
            sys.exit("intentos finalizados, el sistema se cerrara por seguridad")
#funcion para cambiar la clave de administrador
def cambiar_clave():
    global codigoi
    global codigo
    global intentos
    os.system("cls")
    print("menu de cambio de clave.\n")
    print("ingrese la clave anterior")
    print("tiene 3 intentos para ingresar la clave correcta, de lo contrario el sistema se cerrara por cuestiones de seguridad:\n")
    codigoi= int(input())
    while codigoi != codigo:
        intentos = intentos -1
        print("error necesita la clave anterior para poder cambiar la clave, tiene 3 intentos")
        print("tus intentos restantes son: ",intentos)
        time.sleep(.5)
        print("ingrese de nuevo el codigo de acceso")
        codigoi = int(input())
        if intentos == 0:
            sys.exit("intentos finalizados, el sistema se cerrara por seguridad")
    if codigoi == codigo:
        time.sleep(.5)
        print("ingrese la nueva clave de inicio de sesion:\n")
        codigo = int(input())
        time.sleep(.5)
        print("la clave ahora a cambiado")
    menu_adm()
#funcion almacenar pagos de SERVICIOS
def almacenar_pagos():
    archivo = open("pagos.csv","a")
    print("ingresa el nombre de el servicio que deseas pagar")
    numero = input()
    print("se ha capturado el pago a "+numero)

    archivo.write("pago a:\n")
    archivo.write(numero)
    archivo.write("\n")

    archivo.close()
#funcion mostrar pago
def mostrar_pagos():
    os.system("cls")
    print("mostrar pagos de servicios")
    archivo = open("pagos.csv")
    print(archivo.read())
    menu_adm()

    archivo.close()
#funcion eliminar pagos recientes
def eliminar_registros_pagos():
    os.system("cls")
    archivo = open("pagos.csv","a")
    archivo.truncate(0)

    print("transacciones recientes de pagos de servicios eliminadas")
    menu_adm()
    archivo.close()
#funcion almacenar los numeros de trajeta de los depositos
def almacenar_depositos():
    archivo = open("tarjetas1.csv","a")
    print("ingresa el numero de tarjeta de la que deseas realizar tu deposito:")
    numero = input()
    print("se ha capturado el retiro de la tarjeta: "+numero)

    archivo.write("deposito a la tarjeta con numeros:\n")
    archivo.write(numero)
    archivo.write("\n")

    archivo.close()
#funcion mostrar depositos
def mostrar_depositos():
    os.system("cls")
    print("Mostrar registros\n")
    archivo = open("tarjetas1.csv")
    print(archivo.read())
    menu_adm()
    archivo.close()
#funcion eliminar registros de depositos
def eliminar_registros_depositos():
    os.system("cls")
    archivo = open("tarjetas1.csv","a")
    archivo.truncate(0)
    print("transacciones recientes eliminadas")
    menu_adm()
    archivo.close()

#funcion almacenar numeros de tarjeta en un archivo a parte llamado "tarjetas.csv"
def almacenar_retiros():
    archivo = open("tarjetas.csv","a")
    print("ingresa el numero de tarjeta de la que deseas realizar tu retiro:")
    numero = input()
    print("se ha capturado el retiro de la tarjeta: "+numero)

    archivo.write("retiro a la tarjeta con numeros:\n")
    archivo.write(numero)
    archivo.write("\n")

    archivo.close()
#funcion mostrar registros de las tarjetas
def mostrar_numeros_retiros():
    os.system("cls")
    print("Mostrar registros\n")
    archivo = open("tarjetas.csv")
    print(archivo.read())
    menu_adm()
    archivo.close()
#funcion para eliminar registros recientes
def eliminar_registros():
    os.system("cls")
    archivo = open("tarjetas.csv","a")
    archivo.truncate(0)
    print("transacciones recientes eliminadas")
    menu_adm()
    archivo.close()
#funcion para almacennar los datos de las recargas
def almacenar_recargas():
    global numero1
    archivo = open("recargas.csv","a")
    print("ingresa el numero celular a el que deseas realizar tu recarga")
    numero = input()
    print("ingresa la cantidad de tu recarga")
    numero1 = input()
    print("se ha capturado la recarga al numero: ",numero)
    archivo.write("recarga de datos moviles al numero\n")
    archivo.write(numero)
    archivo.write("\n")
    archivo.write("monto de la recarga\n")
    archivo.write(numero1)
    archivo.write("\n")
#funcion para mostrar recargas
def mostrar_recargas():
    os.system("cls")
    print("mostrar registros de recargas")
    archivo = open("recargas.csv")
    print(archivo.read())
    menu_adm()
    archivo.close()
#funcion para eliminar registros de recargas recientes
def eliminar_recargas():
    os.system("cls")
    archivo = open("recargas.csv","a")
    archivo.truncate(0)

    print("transacciones recientes eliminadas")
    menu_adm()
    archivo.close()
#funcion para retirar efectivo
def retirar_efectivo():
    global fondos
    global retiro
    os.system("cls")
    print("RETIRAR EFECTIVO")
    almacenar_retiros()
    #ingresan cantidad a retirar
    print("ingresa la cantidad de efectivo que deseas retirar")
    retiro = int(input())
    while retiro > fondos:
        print("no hay suficientes fondos para retirar, pruebe con otra cantidad ")
        retiro = int(input())
    if retiro <= fondos:
        fondos = fondos - retiro
        print("su retiro ha sido exitoso")
        print("-------------------------")
        print("imprimiendo su ticket...")
        print("-------------------------")
        time.sleep(1)
        print("su retiro de ",retiro,"se ha realizado correctamente\n")
        print("-------------------------------------------------------")
        print("su numero de compra es:")
        generar_num_de_compra()
        print("para dudas y aclaraciones favor de comunicarse al numero 3324462472\n")
        print("------------------------------------------------------------------")
        print("gracias por su preferencia, vuelva pronto\n")
    print("desea realizar otro movimiento?, presione 0 para volver al menu main o otro numero para realizxar otra transaccion")
    s = int(input())
    if s == 0:
        menu()
    if s != 0:
        menu_cliente()
def generar_num_de_compra():
    for i in range(1):
        print(random.uniform(0,1000))

def depositar_efectivo():
    global fondos
    global deposito
    os.system("cls")
    print("DEPOSITAR EFECTIVO")
    almacenar_depositos()
    #ingresa cantidad a depositar
    print("ingresa la cantidad de efectivo que desas depositar")
    deposito = int(input())
    fondos = fondos + deposito
    #impresion de ticket
    print("su deposito ha sido exitoso")
    print("---------------------------")
    print("imprimiendo su ticket...")
    print("_--------------------------")
    time.sleep(1)
    print("su deposito de ",deposito,"se ha realizado correctamente\n")
    print("----------------------------------------------------------")
    print("su numero de compra es:")
    generar_num_de_compra()
    print("para dudas y aclaraciones favor de comunicarse al numero 3324462472\n")
    print("--------------------------------------------------------------------")
    print("gracias por su preferencia, vuelva pronto\n")
    print("desea realizar otro movimiento?, presione 0 para volver al menu main o otro numero para realizar otra transaccion")
    s = int(input())
    if s == 0:
        menu()
    if s != 0:
        menu_cliente()
#funcion mostrar movimientos recientes
def mostrar_movimientos_recientes():
    os.system("cls")
    print("ingresa la opcion que deseas revisar.\n")
    opcion3 = int(input("[1] visualizar movimientos recientes de los retiros\n"+
                        "[2] visualizar movimientos recientes de los depositos\n"+
                        "[3] visualizar movimientos recientes de los pagos de servicios\n"+
                        "[4] visualizar movimientos recientes de las recargas\n"+
                        "[5] volver al menu de admin\n"+
                        "    elija una opcion "))
    if opcion3 == 1:
        mostrar_numeros_retiros()
    elif opcion3 == 2:
        mostrar_depositos()
    elif opcion3 == 3:
        mostrar_pagos()
    elif opcion3 == 4:
        mostrar_recargas()
    elif opcion3 == 5:
        menu_adm()
#funcion eliminar movimientos recientes
def eliminar_eliminar_movimientos_recientes():
    os.system("cls")
    print("ingresa la opcion que deseas revisar.\n")
    opcion4 = int(input("[1] eliminar movimientos recientes de los retiros\n"+
                        "[2] eliminar movimientos recientes de los depositos\n"+
                        "[3] eliminar movimientos recientes de los pagos de servicio\n"+
                        "[4] eliminar movimientos recientes de las recargas\n"+
                        "[5] volver al menu de admin\n"+
                        "    elija una opcion"))
    if opcion4 == 1:
        eliminar_registros()
    elif opcion4 == 2:
        eliminar_registros_depositos()
    elif opcion4 == 3:
        eliminar_registros_pagos()
    elif opcion4 == 4:
        eliminar_recargas()
    elif opcion5 == 5:
        menu_adm()
#funcion pago de servicios
def pago_servicios():
    global pagos
    global fondos
    print("PAGOS DE SERVICIOS")
    print("[1] total play\n[2] izzi\n[3] telmex\n[4] megacable")
    almacenar_pagos()
    print("ingresa la cantidad de efectivo correspondiente a tu pago")
    pagos = int(input())
    fondos = fondos + pagos
    #impresion de ticket
    print("su pago ha sido exitoso")
    print("imprimiendo su ticket...")
    print("-------------------------")
    time.sleep(1)
    print("su pago de ",pagos,"se ha realizado correctamente\n")
    print("----------------------------------------------------")
    print("para dudas y aclaraciones favor de comunicarse al numero 3324462472\n")
    print("su numero de compra es de:")
    generar_num_de_compra()
    print("------------------------------------")
    print("gracias por su preferencia, vuelva pronto\n")
    print("desea realizar otro movimiento?, presione 0 para volver al menu main o otro numero para realizar otra transaccion ")
    s = int(input())
    if s == 0:
        menu()
    if s != 0:
        menu_cliente()
#funcion para recargas moviles
def recargas():
    global numero1
    global fondos
    os.system("cls")
    print("RECARGAS DE TELEFONIA CELULAR")
    almacenar_recargas()
    fondos = fondos - int(numero1)
    #impresion de ticket
    print("su pago ha sido exitoso")
    print("imprimiendo su ticket...")
    print("------------------------")
    time.sleep(1)
    print("su pago de ",pagos,"se ha realizado correctamente\n")
    print("-------------------------------------------------")
    print("su numero de cuenta es:")
    generar_num_de_compra()
    print("---------------------------")
    print("para dudas y aclaraciones favor de comunicarse al numero 3324462472\n")
    print("--------------------------------------------------------------------")
    print("gracias por su preferencia, vuelva pronto\n")
    print("desea realizar otro movimiento?, presione 0 para volver al menu main o otro numero para realizar otra transaccion ")
    s = int(input())
    if s == 0:
        menu()
    if s != 0:
        menu_cliente()
#funcion salir
def salir():
    print("usted ha decidido finalizar el programa")
    print("presione 0 para finalizar o cualquier otro numero para permanecer")
    b = int(input())
    if b == 0:
        sys.exit("usted ha decidido finalizar el programa, vuelva pronto")
    else:
        print("usted ha decidido permanecer en el programa")
    return b
#opciones del menu main
while opcion != " ":
    opcion = menu()
    if opcion == 1:
        ingresar_clave()
        if codigoi == codigo:
            menu_adm()

    elif opcion == 2:
        menu_cliente()
    elif opcion == 3:
        salir()
