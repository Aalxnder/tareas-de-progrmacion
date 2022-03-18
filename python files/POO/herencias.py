#herencias
class vehiculos():
    def __init__(self, marca,modelo):
        self.marca=marca;
        self.modelo=modelo;
        self.enmarcha=False;
        self.acelera=False;
        self.frena=False;
    #funcones de modificar comportamientos
    def arrancar(self,arranca):
        self.enmarcha=arranca;
        if(self.enmarcha):
            return "el vehiculo se encuentra arrancando";
        else:
            return "el vehiculo se encuentra parado";
    def acelerar(self,acelerando):
        self.acelera=acelerando;
        if(self.acelera):
            return "el vehiculo se encuentra acelerando";
        else:
            return "el vehiculo no se encuentra acelerando";
    def frenar(self,frenando):
        self.frena=frenando;
        if (self.frena):
            return "el vehiculo se encuentra frenando";
        else:
            return "el vehiculo no se encuentra frenando";
    #mostrar estado del vehiculo
    def estado(self):
        print("Marca: ",self.marca,"\nModelo: ",self.modelo,"\nEn marcha: ",self.enmarcha,"\nAcelerando: ",self.acelera,
            "\nfrenando: ",self.frena);
class furgoneta(vehiculos):
    def carga(self,cargar):
        self.cargado=cargar;
        if(self.cargado):
            return "la furgoneta esta cargada";
        else:
            return "la furgoneta no esta cargada";
    def estado(self):
        print("Marca: ",self.marca,"\nModelo: ",self.modelo,"\n");
#clase moto
class moto(vehiculos):
    def caballito(self,caballo):
        self.hcaballito=caballo;
        if(self.hcaballito):
            return "la moto va realizando el caballito";
        else:
            return "la moto no va realizando el caballito";
    def salto(self,saltando):
        self.saltar=saltando;
        if(self.saltar):
            return "la moto se encuentra realizando un salto";
        else:
            return "la moto no se encuentra saltando";
    def estado(self):
        print("Marca: ",self.marca,"\nModelo: ",self.modelo,"\n");
class velectricos(vehiculos):
    def __init__(self,marca,modelo):
        super().__init__(marca,modelo)
        self.autonomia=100;
    def cargar_energia(self):
        self.cargando=True;
class bici_electrica(velectricos,vehiculos):
    def cargaa(self,cargando):
        self.cargarr=cargando;
        if (self.cargarr):
            return "la bici se encuentra cargando";
        else:
            return "la bici se encuentra desenchufada a la corriente";
    def caballito(self,caballo):
        self.hcaballito=caballo;
        if(self.hcaballito):
            return "la bici va realizando el caballito";
        else:
            return "la bici no va realizando el caballito";
    def salto(self,saltando):
        self.saltar=saltando;
        if(self.saltar):
            return "la bici se encuentra realizando un salto";
        else:
            return "la bici no se encuentra saltando";
    def estado(self):
        print("Marca: ",self.marca,"\nModelo: ",self.modelo,"\n");
#objetos
print("\n--------coche 1--------\n");
moto=moto("honda","CBR");
moto.estado();
print(moto.arrancar(True));
print(moto.acelerar(True));
print(moto.frenar(False));
print(moto.caballito(True));
print(moto.salto(False));

print("\n--------coche 2--------\n");
furgoneta=furgoneta("renault", "Kangoo");
furgoneta.estado();
print(furgoneta.arrancar(False));
print(furgoneta.acelerar(False));
print(furgoneta.frenar(True));
print(furgoneta.carga(True));

print("\n--------coche 3--------\n");
bici=bici_electrica("xiaomi","folding");
bici.estado();
print(bici.arrancar(True));
print(bici.acelerar(True));
print(bici.frenar(False));
print(bici.cargaa(False));
print(bici.caballito(False));
print(bici.salto(True));
