#cuarpo de bucle for
#for + variable + in + elemento a recorrer
#elemento a recorrer = lista,tupla, cadena de texto, etc
#contador=0
#correo= input("introduce tu direccion de email: ")
#for i in correo:
#    if(i=="@" or i=="."):
#        contador=contador+1
#if contador>=2:
#    print("email es correcto")
#else:
#    print("el email no es correcto")
print("ingrese una contraseña no menor a 8 caracteres y sin espacios")
contraseña = input()
contador = 0
for i in range(len(contraseña)):
    if contraseña[i]==" ":
            contador==1

if len(contraseña)<8 or contador>0:
    print("contraseñla erronea")
else:
    print("contraseña correcta")
