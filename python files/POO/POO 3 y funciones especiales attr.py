#class nombre():
    #def __init__():
#    pass
#objetos
#victor = nombre();
#maria = nombre();
#atributos
#objeto.atributo = valor
#victor.edad = 18;
#victor.sexo = "masculino";
#victor.pais = "mexico";

#maria.edad = 20;
#maria.sexo = "femenino";
#maria.pais = "mexico";

#print(victor.edad);
#print(maria.edad);

#class Matematica():
#    def suma(self):
#        self.num1 = 2;
#        self.num2 = 3;

#sumas = Matematica();
#sumas.suma();
#print(sumas.num1 + sumas.num2);

#metodos

#class Ropa():
#    def __init__(self):
#        self.marca = "willow";
#        self.talla = "M";
#        self.color = "negro";
#        self.precio = 1500;

#camisa = Ropa();
#print("\n",camisa.marca,"\n",camisa.talla,"\n",camisa.color,"\n",camisa.precio);
import math;
class Calculadora():
    def __init__(self,n1,n2):
        self.suma = n1 + n2;
        self.resta = n1 - n2;
        self.multi = n1 * n2;
        self.div = n1 / n2;
        self.pot = math.pow(n1,n2);
operacion = Calculadora(int(input("introduce el primer numero: ")),int(input("introduce el segundo numero: ")));
print("resultado de suma: ",operacion.suma,"\nResultado de resta: ",operacion.resta,"\nResultado de multiplicacion: ",operacion.multi,"\nResultado de division: ",operacion.div,"\nResultado de la potencia: ",operacion.pot);

#funciones getattr
#class Persona():
#    edad = 31;
#    nombre = "victor paul calderon";

#doctor = Persona();
#funciones getattr
#print("el nombre es ",doctor.nombre);
#print("su edad es ",getattr (doctor,"edad"));

#funciones hasattr
#class Persona():
#    edad = 31;
#    nombre = "victor paul calderon";

#doctor = Persona();
#print("el doctor tiene una edad?",hasattr(doctor,"edad"))

#funcion setattr
#class Persona():
#    edad = 31;
#    nombre = "victor paul calderon";

#doctor = Persona();
#print("antes",doctor.nombre);
#setattr(doctor,'nombre','juan');
#print("ahora se llama ",doctor.nombre);

#funcion delattr
#class Persona():
#    edad = 31;
#    nombre = "victor paul calderon";
#    pais = "mexico";
#doctor = Persona();
#delattr(Persona,'pais');
#print(doctor.nombre);
#print(doctor.edad);
