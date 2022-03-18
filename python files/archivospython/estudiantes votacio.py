#en un salon de clases de n estudiantes se realiza una votacion con el fin de determinar el numero de estudiantes que estan a
#favor del viaje de promocion , que porcentaje esta en contra y que porcentaje se abstiene de votar
print("vota si estas de acuerdo escribe 'favor'\nSi estas en desacuerdo escribe 'contra'\ny si te abstienes escribe 'neutral' ")
n = int(input("ingrese el numero de estudiantes que realizaran la votacion "))
votos = ["favor","contra","neutral"]
a = 0
b = 0
c = 0

for i in range (n):
    voto = input("ingresa tu voto: ")
    votoslow = voto.lower()
    if votoslow == "favor":
        print("usted esta a favor del viaje")
        a += 1
    if votoslow == "contra":
        print("usted esta en contra del viaje")
        b += 1
    if votoslow == "neutral":
        print("usted esta en desacuerdo al viaje")
        c += 1

porcentajeF = (a * 100)/n
porcentajeC = (b * 100)/n
porcentajeNe = (c * 100)/n

print("el porcentaje de alumnos a favor del viaje es: ", porcentajeF)
print("los alumnos que votaron a favor del viaje fueron: ",a)
print(" ")
print("el porcentaje de alumnos en contra del viaje es: ", porcentajeC)
print("los alumnos que votaron en contra del viaje fueron: ",b)
print(" ")
print("el porcentaje de alumnos que se abstienen del viaje es: ", porcentajeNe)
print("los alumnos que votaron abstenerse del viaje fueron: ",c)
