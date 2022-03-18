import pywhatkit
import numpy as np
from flask import Flask
numero='+524922003219';

msn = open('mensajes.txt');

mensajes=[];

#quito los espacios grandes en las frases
for i in msn:
    if i != '\n':
        mensajes.append(i);

#print(len(mensajes)) saber la longitud de la lista
#esciger un numero aleatorio con numpy
n=np.random.randint(0,83);

pywhatkit.sendwhatmsg(numero, mensajes[n],11,40)
