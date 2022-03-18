#encriptador de frases
#reemplazando
#definir variables para modificar el programa

caracter_elegido = "xsnthr"
def encriptar(frase,caracter):
    print("mensaje encriptado")
    encriptada = ""
    for letra in frase:
        if letra.lower() in "aeiouáéíóú":
            if letra.isupper():
                encriptada = encriptada + caracter.upper()
            else:
                encriptada = encriptada + caracter
        else:
            encriptada = encriptada + letra
    return encriptada

while True:
    print(encriptar(input("ingresa lo que quieres encriptar:\n>"), caracter_elegido))

    print("\nIngresa\n1) para encriptar otra frase: ")

    print("2)para finalizar\n")

    eleccion = input(">")
    if eleccion == "2":
        break
    if eleccion == 1:
        print("-------")
