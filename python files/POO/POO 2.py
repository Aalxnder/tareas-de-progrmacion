class personas():
    def __init__(self):
        self.nombre="";
        self.edad=0;
        self.sexo="";
        self.altura=0;
        self.color_de_piel="";
        self.profesion="";
        self.peso=0;
    def mayoria(self):
        self.edad;
        if(self.edad >= 18):
            print("tiene",self.edad,"años y es mayor de edad");
        else:
            print("tiene",self.edad,"años y es menor de edad");
    def gen(self):
        self.sexo;
        if (self.sexo=="hombre"):
            return "es de sexo masculino";
        elif(self.sexo=="mujer"):
            return "es de sexo femenino";
    def pess(self):
        self.peso;
        if(self.peso <=100):
            print(self.nombre,"pesa",self.peso,"kilos, se encuentra en un peso ideal");
        else:
            print(self.nombre,"pesa",self.peso,"kilos, no se encuentra en un peso ideal");
    def estatura(self):
        self.altura;
        if(self.altura):
            chequeo=self.__chequeo_altura();
        if(self.altura >= 1.70 and chequeo):
            print("mide",self.altura,"metros y es una persona alta");
        elif(self.altura >= 1.70 and chequeo==False):
            print("la persona mide",self.altura,"es imposible que exista una persona asi de alta");
        else:
            print("mide",self.altura,"metros y es una persona chaparra");
    def __chequeo_altura(self):
        self.altura;
        if(self.altura <= 2.30):
            return True;
        else:
            return False;
    def ver_car(self):
        print("su nombre es",self.nombre,"\nsu color de piel es ",self.color_de_piel,"\nY es ",self.profesion);

#objetos
#persona 1
cr7=personas();
print("\n--------Persona 1--------\n");
cr7.nombre="cristiano ronaldo";
cr7.edad=36;
cr7.sexo="hombre";
cr7.peso=85;
cr7.altura=1.87;
cr7.color_de_piel="blanca";
cr7.profesion="futbolista profesional";
cr7.ver_car();
cr7.mayoria();
cr7.estatura();
cr7.pess();
print(cr7.gen());

print("\n--------Persona 2--------\n");
tobey=personas();
tobey.nombre="tobey maguire";
tobey.edad= 48;
tobey.sexo="hombre";
tobey.peso=71;
tobey.altura=1.71;
tobey.color_de_piel="blanca";
tobey.profesion="actor de cine";
tobey.ver_car();
tobey.mayoria();
tobey.estatura();
tobey.pess();
print(tobey.gen());
