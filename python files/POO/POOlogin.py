import sys;
class usuario():
    numUsuarios = 0;
    def __init__(self,nombre,contra):
        self.nombre=nombre;
        self.contra=contra;
        self.conectado=False;
        self.intentos=3;
        usuario.numUsuarios+=1;
    def conectar(self,contrasenia=None):
        if(contrasenia==None):
            mycontra=input("ingrese su contraseña: ");
        else:
            mycontra=contrasenia;

        if (mycontra==self.contra):
            print("se ha conectado con exito!.");
            self.conectado=True;
            return True;
        else:
            self.intentos -= 1;
            if(self.intentos > 0):
                print("la contraseña ha sido incorrecta, intentelo de nuevo");
                if(contrasenia!=None):
                    return False;
                print("los intentos restantes son: ",self.intentos);
                self.conectar()
            else:
                print("error, no se pudo iniciar sesion, contraseña incorrecta");
                sys.exit("demasiados intentos fallidos, el programa se cerrara por seguridad");
    def desconectar(self):
        if(self.conectado):
            print("se ha cerrado exitosamente la sesion.");
            self.conectado=False;
        else:
            print("error, no se inicio sesion.");
    def __str__(self):
        if (self.conectado):
            connect="conectado";
        else:
            connect="desconectado";
        return f"mi nombre de usuario es: {self.nombre} y estoy {connect}";
#user=usuario(input("ingrese su nombre: "),input("ingrese su contraseña: "))
#print(user);

#user.conectar();
#print(user);

#user.desconectar();
#print(user);
