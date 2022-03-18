#realizar un descuento si la compra de un libro es mayor o igual a 700
#levi alexander perez Elizondo
#septiembre 16 del 2021

#datos de entrada
print("ingrese el total del costo del libro: ")
costo=float(input())
print("ingrese la cantidad comprada: ")
cantidad=int(input())
precio=costo*cantidad
#condiciones
if precio>=700:
   precio=precio-(precio*0.2)

#datos de salida
print("el precio final es ",str(precio))
