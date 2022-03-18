#contadores
#def numeros_pares(limite):
#    num=1;
#    while(num<limite):
#        yield num*2
#        num = num+1;
#objeto generador
#devuelvepares=numeros_pares(10)
#imprimir el valor que hay en la variable
#print(next(devuelvepares));
#print("siuu");
#print(next(devuelvepares));


#def dciudades(*ciudades):
#    for elemento in ciudades:
        #for subelemento in elemento:
#            yield from elemento;

#ciudadesdev=dciudades("guanatos","tonayork","tlajomuerte","zapopan");
#print(next(ciudadesdev));

#print(next(ciudadesdev));
import sys;
def suma(num1,num2):
    return num1 + num2;
def resta(num1,num2):
    return num1-num2;
def multiplica(num1,num2):
    return num1*num2;
def divide(num1,num2):
    #controlar la operacion para que si da error no caiga todo el programa
    #si se puede hacer ejecuta lo del try
    try:
        return num1/num2;
        #si no se puede hacer ejecuta lo del except
    except ZeroDivisionError:
        print("no se puede dividir entre cero");
        return "operacion erronea";
#ciclo while infinito que leera la condicion
while True:
    try:
        opc1=int(input("introduce el primer numero:"));
        opc2=int(input("introduce el segundo numero:"));
        #si se cumple que los valores introducidos son correctos el codigo pasara por el break y se ejecutara con normalidad
        break;
    #si los numeros introductidos fueron incorrectos, entonces se ejecutara el except hasta que se introduzcan valores validos
    except ValueError:
        print("se ha ingresado un caracter invalido, intentalo de nuevo");
operacion=input("introduce la operacion a realizar(suma,resta,multiplicacion,division): ");

if (operacion == "suma"):
    print(suma(opc1,opc2));
elif(operacion == "resta"):
    print(resta(opc1,opc2));
elif(operacion == "multiplicacion"):
    print(multiplica(opc1,opc2));
elif(operacion == "division"):
    print(divide(opc1,opc2));
else:
    print("operacion no disponible.");
print("operacion ejecutada, continuando el programa");
