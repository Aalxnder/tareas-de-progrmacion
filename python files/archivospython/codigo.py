# ============= capa de la interface =================
import sys
import time
import os
from app import agregar,ver,eliminar
menu = """===Menu===
[1] agregar producto
[2] eliminar producto
[3] ver productos
[4] salir"""
#interaccion con el Menu
while True:
    print();
    print(menu)
    opc = int(input(">>"))
    if (opc == 1):
        os.system("cls");
        agregar()
    elif (opc == 2):
        eliminar()
    elif (opc == 3):
        ver()
    elif (opc == 4):
        os.system("cls");
        print("realmente desea salir del programa?");
        time.sleep(.5)
        print("presione 0 para finalizar o presione otro numero para salir");
        s = int(input());
        if (s == 0):
            time.sleep(.5)
            sys.exit("usted ha decidido finalizar el programa.");
        else:
            time.sleep(.5)
            print("ha decidido permanecer en el programa.");
    else:
        print("opcion incorrecta, elija una opcion anterior ")
