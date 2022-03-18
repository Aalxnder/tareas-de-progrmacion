# ==== funcionamiento de la aplicacion ====
import sys
import os
from prettytable import PrettyTable

encabezados_stock = ["id","nombre","cantidad","precio_u"];

stock = [
            {   "id":1,
                "nombre":"cocacola",
                "cantidad":500,
                "precio_u":25},

            {   "id":2,
                "nombre":"tequila",
                "cantidad":700,
                "precio_u":200},

            {   "Id":3,
                "nombre":"wiskey",
                "cantidad":700,
                "precio_u":300},

            {   "Id":4,
                "nombre":"vodka",
                "cantidad":800,
                "precio_u":350},

            {   "Id":5,
                "nombre":"Ron",
                "cantidad":600,
                "precio_u":290},
                                    ]
encabezados_carrito = ["producto","id","nombre","cantidad""precio_u","precio_c"]
carrito = []
def agregar():
    #mostrar el catalogo
    print("elige un producto de la lista para agregar")
    ver(stock,encabezados_stock)
    ID = int(input("ingrese un numero de producto: "));
    cantidad=int(input("ingresa la cantidad que deseas llevar: "));
    while cantidad > stock[ID-1]["cantidad"]:
        print("asegurese de que haya la suficiente cantidad de productos ");
        cantidad=int(input("ingresa la cantida que deseas llevar"));
    productoAgregar={
                     "producto":len(carrito)+1,
                     "ID":ID,
                     "nombre":stock[ID-1]["nombre"],
                     "cantidad":cantidad,
                     "precio_u":stock[ID-1]["precio_u"],
                     "precio_c":cantidad*stock[ID-1]["precio_u"]
                                                                }
    carrito.append(productoAgregar);

    print("agregando productos");


def eliminar():
    print("elige un producto de la lista para eliminar");
    ver(carrito,encabezados_carrito)
    prod=int(input("numero de producto a eliminar."));

    productoEliminar=carrito.pop(prod-1) #metodo.pop elimina y devuelve el producto del carrito borrado

    numProducto=productoEliminar["producto"]
    for producto in carrito[prod-1:len(carrito)]:
        producto["producto"]= numProducto
        numProducto+=1


def ver(listaProductos=carrito,encabezados=encabezados_carrito):
    if len(listaProductos)>0:
        tabla = PrettyTable()
        tabla.field_names=encabezados
        for producto in listaProductos:
            tabla.add_row(producto.values()) #tabla.add_row(producto.key{}) para obtener los valores de el lado izquierdo de los 2 puntos
        print(tabla)
    else:
        print("no hay productos para mostrar.");
