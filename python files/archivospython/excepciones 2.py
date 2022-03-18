#capturar excepciones de forma consecutiva
#def division():
#    try:
#        opc1 = float(input("introduce el primer valor numerico:"));
#        opc2 = float(input("introduce el segundo valor numerico: "));
#
#        resultado = opc1/opc2;
#        print("el resultado es: ",resultado);
#    except ValueError:
#        print("el valor introducido es erroneo");
#    except ZeroDivisionError:
#        print("no se puede dividir entre cero");
#    print("calculo finalizado");
#print(division());

#capturar excepciones de forma general
#def division():
#    try:
#        opc1 = float(input("introduce el primer valor numerico:"));
#        opc2 = float(input("introduce el segundo valor numerico: "));

#        resultado = opc1/opc2;
#        print("el resultado es: ",resultado);
        #excepcion general, es poco recomendable porque no avisa al usuario que error ha cometido
        #pero nos ahorra tener que escribir 15 excepts uno detras de otro en un programa grande
#    except:
#        print("ha ocurrido un error");
#    print("calculo finalizado");
#llamada a la funcion
#division();
#finally
#def division():
#    try:
#        opc1 = float(input("introduce el primer valor numerico:"));
#        opc2 = float(input("introduce el segundo valor numerico: "));

#        resultado = opc1/opc2;
#        print("el resultado es: ",resultado);
#    except ValueError:
#        print("el valor introducido es erroneo");
#    except ZeroDivisionError:
#        print("no se puede dividir entre cero");
    #lo que se introduxca dentro del finaly se va a ejecutar siempre
    #tanto si ocurre una excepcion a como si no ocurre
#    finally:
#        print("calculo finalizado");
#division();

#excepcion intencionada
#def evaledad(edad):
#    if (edad < 0):
        #excepcion intensionada, se puede elegir cualquier excepcion y enviar un mensaje personalizado
#        raise TypeError("No se permiten edades negativas");
#
#    if (edad < 20):
#        return "eres muy joven";
#    elif (edad < 40):
#        return "eres joven";
#    elif (edad < 65):
#        return "eres mayor";
#    elif (edad < 100):
#        return "cuidate...que ya tienes un pie en la tumba";

#print(evaledad(18));


#excepciones intensionales 2
import math

def raiz(num1):
    if(num1<0):
        raise ValueError("el numero no puede ser negativo");
    else:
        return math.sqrt(num1);
while True:
    try:
        opc1 = int(input("introduce un valor para calcular la raiz: "));
        break;
    except ValueError:
        print("error, no se pueden ingresar letras")
try:
    print(raiz(opc1));
except ValueError as ErrorDeNumeroNegativo:
    print(ErrorDeNumeroNegativo);

print("continuando programa.");
