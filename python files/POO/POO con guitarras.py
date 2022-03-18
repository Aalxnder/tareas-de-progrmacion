#programacion orientada a objetos con guitarras de ejemplos
class guitarras():
    def __init__(self,marca,modelo,cuerdas):
        self.marca=marca;
        self.modelo=modelo;
        self.cuerdas=cuerdas;
        self.pastillas="";
        self.conectada=False;
        self.funciona=True;
        self.tocando=False;
        self.direccion=True;
    def conectadas(self,conectar):
        self.conectada=conectar;
        if(self.conectada):
            return "la guitarra se encuentra conectada";
        else:
            return "la guitarra no se encuentra conectada";
    def funcionar(self,funcionando):
        self.funciona=funcionando;
        if (self.funciona):
            return "la guitarra esta en funcionamiento optimo";
        else:
            return "la guitarra no funciona";
    def tocar(self,tocada):
        self.tocando=tocada;
        if (self.tocando):
            return "la guitarra se esta tocando en este momento";
        else:
            return "la guitarra se esta tocando en este momento";
    def der(self,derecho):
        self.direccion=derecho;
        if(self.direccion):
            return "la guitarra es para diestros";
        else:
            return "la guitarra es para zurdos";
    def caracteristicas(self):
        print("la guitarra es de la marca ",self.marca,"\nEs del modelo ",self.modelo,"\ny es de ",self.cuerdas,"cuerdas");

class strat(guitarras):
    def pue(self,puentes):
        self.puente=puentes;
        if (self.puente):
            return "la guitarra es una strat con puente semi flotante";
        else:
            return "la guitarra es una strat con puente flotante";
    def configuracion(self):
        self.pastillas;
        if (self.pastillas=="hss"):
            return "la guitarra tiene configuracion HSS";
        elif(self.pastillas=="sss"):
            return "la guitarra tiene configuracion SSS";
        elif(self.pastillas=="hh"):
            return "la guitarra tiene configuracion HH";
        elif(self.pastillas=="ss"):
            return "la guitarra tiene configuracion SS";
        elif(self.pastillas=="hsh"):
            return "la guitarra tiene configuracion HSH";
        elif (self.pastillas=="hhh"):
            return "la guitarra tiene configuracion HHH";
        else:
            return "no existe esa configuracion para guitarras ";
    def caracteristicas(self):
        print("la guitarra es de la marca ",self.marca,"\nEs del modelo ",self.modelo,"y es de ",self.cuerdas,"cuerdas");
class les_paul(strat,guitarras):
    def pue(self):
        self.puente=puentes;
        if (self.puente):
            return "la guitarra es una les paul con puente fijo";
        else:
            return "la guitarra es una les paul con puente flotante";
    def caracteristicas(self):
        print("la guitarra es de la marca ",self.marca,"\nEs del modelo ",self.modelo,"y es de ",self.cuerdas,"cuerdas");
class sg(strat,guitarras):
    def mastil(self,doblem):
        self.doble=doblem;
        if(self.doble):
            return "la guitarra es una sg de doble mastil";
        else:
            return "la guitarra es una sg de un solo mastil";
    def caracteristicas(self):
        print("la guitarra es de la marca ",self.marca,"\nEs del modelo ",self.modelo,"y es de ",self.cuerdas,"cuerdas");
#objetos
print("--------guitarra 1--------");
guitarra1=strat("fender","vintera 60's",6);
guitarra1.caracteristicas();
guitarra1.pastillas="sss";
print(guitarra1.conectadas(True));
print(guitarra1.funcionar(True));
print(guitarra1.tocar(True));
print(guitarra1.der(True));
print(guitarra1.configuracion())

print("\n--------guitarra 2--------\n");
guitarra2=les_paul("gibson","slash signature",6);
guitarra2.caracteristicas();
guitarra2.pastillas="hh";
print(guitarra2.conectadas(True));
print(guitarra2.funcionar(True));
print(guitarra2.tocar(True));
print(guitarra2.der(True));
print(guitarra2.configuracion())

print("\n--------guitarra 3---------\n");

guitarra3=sg("gibson","double neck",6);
guitarra3.caracteristicas();
guitarra3.pastillas="hhh";
print(guitarra3.mastil(True))
print(guitarra3.conectadas(False));
print(guitarra3.funcionar(True));
print(guitarra3.tocar(False));
print(guitarra3.der(True));
print(guitarra3.configuracion());
