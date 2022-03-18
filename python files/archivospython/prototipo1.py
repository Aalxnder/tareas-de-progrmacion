import os
import sys
opcion = 0;
def menu():
    print("presiona ENTER para continuar:")
    input()
    os.system("cls")
    opc = int(input("1. registrar productos\n"+
                    "2. mostrar lo agregado\n"+
                    "3. eliminar un producto\n"+
                    "4. salir\n"+
                    "   elija una opcion\n"))
    return opc
while opcion != "":
    opcion = menu()

    if opcion == 1:
        print("Nuevo registro\n")
        producto = open("productosss.csv","a")

        nombre = input("ingrese el nombre del producto: ")
        codigo = int(input("ingrese el codigo del producto: "))
        cantidad = int(input("ingrese la cantidad del producto: "))
        precio = int(input("ingrese el precio del producto: "))

        print("se ha capturado el producto: ",nombre,"\nCon un codigo de: ",codigo,"\nCon la cantidad de: ",cantidad,"\nCon un precio de: ",precio)


        producto.write("nombre de producto: ")
        producto.write(nombre)
        producto.write(", ")
        producto.write("codigo de producto: ")
        producto.write(str(codigo))
        producto.write(", ")
        producto.write("cantidad de producto: ")
        producto.write(str(cantidad))
        producto.write(", ")
        producto.write("precio de producto: ")
        producto.write(str(precio))
        producto.write(", ")
        producto.write("\n")

        producto.close()

    elif opcion == 2:
        print("mostrar registros: ")
        producto = open("productosss.csv")

        print(producto.read())
        producto.close()

    elif opcion == 3:
        producto = open("productosss.csv","a")
        producto.truncate()

        print(" registros eliminados")

        producto.close()

    elif opcion == 4:
        print("usted ha decidido salir del programa: ")
        s = int(input("presione 0 para finalizar o cualquier otro numero para permanecer: "))
        if s == 0:
            sys.exit("usted ha decidido finalizar el programa ")
        else:
            print("usted ha decidido permanecer en el programa :)")

    else:
        print("debes elegir una opcion anterior")
