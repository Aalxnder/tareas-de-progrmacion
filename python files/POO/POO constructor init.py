#constructores
#class Persona():
#    pass
#    def __init__(self,nombre,edad):
#        self.nombre = nombre;
#        self.edad = edad;
#    def descripcion(self):
#        #se insertan los valores de los selfs en las llaves
#        return "{} tiene {} años".format(self.nombre,self.edad);
#
#    def comentario(self,frase):
#        self.frase = frase;
#        return "{} dice {}".format(self.nombre,frase)

#cr7 = Persona(input("ingresa un nombre: "),input("ingresa una edad: "))
#print(cr7.descripcion());
#print(cr7.comentario(input("ingresa una frase del bicho: ")))


#Wmodificar un atributo
class Email():
    def __init__(self):
        self.enviado = False;
        self.escrito = True;
    def enviar_correo(self,enviar):
        self.enviado = enviar;
        if(self.enviado):
            return "el correo ha sido enviado";
        else:
            return "el correo no ha sido enviado";
    def escribir_correo(self,escribe):
        self.escrito = escribe;
        if (self.escrito):
            return "el correo ha sido escrito";
        else:
            return "el correo no ha sido escrito";
correo =Email()
print(correo.enviar_correo(False))
print(correo.escribir_correo(True))
