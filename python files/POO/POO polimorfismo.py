class coche():
    def desplazamiento(self):
        print("se dezplaza utilizando 4 ruedas");

class moto():
    def desplazamiento(self):
        print("se desplaza utilizando 2 ruedas");

class camion():
    def desplazamiento(self):
        print("se desplaza utilizando 6 ruedas");

def desplazamientovehiculo(vehiculo):
    vehiculo.desplazamiento();

vehiculo1=camion()
desplazamientovehiculo(vehiculo1)
