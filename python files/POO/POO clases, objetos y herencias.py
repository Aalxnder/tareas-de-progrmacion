#class humano:
#   def __init__(self, nombre,edad):
#       print("nuevo humano");
#       self.nombre = nombre;
#       self.edad = edad;

#   def presentar(self):
#       print("Hola mi nombre es {} y tengo {} años".format(self.nombre,self.edad));

#cr7 = humano("Cristiano ronaldo",36);
#cr7.presentar();
#class restaurante():
#    def __init__(self ,nombre, comida, buffet):
#        print("restaurante pestana cr7");
#        self.nombre = nombre;
#        self.comida = comida;
#        self.buffet = buffet;
#    def mostrar_car(self):
#        print("bienvenido al restaurante {}\nSu mejor opcion de {}\nCon un costo de {} pesos el buffet".format(self.nombre,self.comida,self.buffet));

#pestana=restaurante("pestana cr7","comida portuguesa",45);
#pestana.mostrar_car();
#class humano():
#    def __init__(self,nombre,edad,profesion):
#        print("nuevo humano");
#        self.nombre=nombre;
#        self.edad=edad;
#        self.profesion=profesion;
#    def presentar(self):
#        print("hola mi nombre es {}\nTengo {} años\ny soy {}".format(self.nombre,self.edad,self.profesion));

#class son(humano):
#    def __init__(self,nombre,edad,profesion,lenguaje):
#        super().__init__(nombre,edad,profesion);
#        self.lenguaje=lenguaje;
#        print("hola su nombre es {}\nTiene {} años\ny es {}\ny sabe programar en {}".format(self.nombre,self.edad,self.profesion,self.lenguaje));
#    def saludo(self):
#        print("hello")
#cr7=son("don cristiano ronaldo dos santos aveiro",36,"mejor jugador de la historia del futbol","c");
#cr7.saludo()

#class animales():
#    def __init__(self,nombre, raza, edad, tamano):
#        print("\tnuevo animal\n\n");
#        self.nombre=nombre;
#        self.raza=raza;
#        self.edad=edad;
#        self.tamano=tamano;
#class perros(animales):
#    def __init__(self, nombre, raza, edad, tamano, color):
#        super().__init__(nombre, raza, edad, tamano);
#        self.color=color;
#    def presentar(self):
#        print("su nombre es {},\nEs un perro de raza {},\ntiene {} años,\nes de tamaño {}\ny es de color {}\n".format(self.nombre,self.raza,self.edad,self.tamano,self.color));
#perro=perros("vicente","pastor aleman",7,"grande","negro con cafe");
#perro.presentar()
#class gatos(animales):
#    def __init__(self,nombre,raza,edad,tamano,color):
#        super(). __init__(nombre, raza, edad, tamano);
#        self.color=color;
#    def presentar(self):
#        print("su nombre es {}\nEs un gato de raza {}\nTiene {} años \nEs de tamaño {}\nY es de color {}\n".format(self.nombre,self.raza,self.edad,self.tamano,self.color));
#gato=gatos("pepe", "esfingue", 6,"pequeño","cafe claro");
#gato.presentar()

#clases 1
#class carro():
#    marca = "";
#    modelo = 2004;
#    placa = "";

#taxi = carro();
#print(taxi.modelo);

class Coche():

    #conastructor
    def __init__(self):
    #puedes agreagr las propiedades que desees, no hay limite
    #propiedades
        self.__largoChasis = 250;#estado inicial, o sea, caracteristicas de fabrica
        self.__anchoChasis = 120;
        self.__ruedas = 4;#poner __ para encapsular la clase, es decir, que no sea accesible desde fuera de la clase perosi dentro de ella
        self.__enMarcha = False;
        self.__funciona = True;
        self.__derrapa = False;
    #self es objeto perteneciente a la clase
    #comportamientos
    def arrancar(self,arrancamos):
        self.__enMarcha=arrancamos;
        if (self.__enMarcha ):
            chequeo=self.__chequeo()
        if (self.__enMarcha and chequeo):
            return "el coche esta en marcha";
        elif (self.__enMarcha and chequeo == False):
            return "Algo ha ido mal en el chequeo, no es recomendable arrancar asi";
        else:
            return "el coche esta parado";
#cada que se valla a usar la variable encapsulada tambien se deben poner los 2 guiones bajos
    def estado(self):
        print("El coche tiene",self.__ruedas,"ruedas, un ancho de ",self.__anchoChasis,"cm y un largo de ",self.__largoChasis,"cm");

    def funcionamiento(self, sirve):
        self.__funciona=sirve;
        if (self.__funciona):
            return "el coche esta en funcionamiento optimo";
        else:
            return "el coche necesita una visita al taller";

    def derrape(self,derrapando):
        self.__derrapa=derrapando;
        if (self.__derrapa):
            return "el coche se encuentra derrapando";
        else:
            return "el coche no se encuentra derrapando";
    #encapsular metodos /funciones e hace igual que para encapsular variables, con los 2 guiones bajos
    def __chequeo(self):
        print("realizando chequeo interno...");
        self.gasolina="ok";
        self.aceite="ok";
        self.puertas="cerradas";
        if (self.gasolina=="ok" and self.aceite=="ok"and self.puertas=="cerradas"):
            return True;
        else:
            return False;
#construir objetos (esto tiene que ser fuera de la clase)
coche = Coche(); #intanciar una clase/ejemplarizar la clase/crear instancia/ejemplar, etc;

print(coche.arrancar(True))
print(coche.derrape(True))
print(coche.funcionamiento(True));
coche.estado();
#fin objeto 1
print("\n-----------segundo objeto-------------------\n");
#objeto 2
coche2 = Coche()

print(coche2.arrancar(False));
print(coche2.derrape(False));
print(coche2.funcionamiento(False));

coche2.estado();
#objeto 3
print("\n-----------tercer objeto---------------------\n");
coche3 = Coche()
print(coche3.arrancar(True));
print(coche3.derrape(False));
print(coche3.funcionamiento(True));
coche3.estado();








#
