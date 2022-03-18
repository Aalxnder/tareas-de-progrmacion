import pyautogui
import webbrowser
import time
import numpy as np
#numero=input("introduce el numero a el que le vas a enviar el mensaje con el identificador de pais: ");
numero='+524922003219';
#lista pa almacenar las frases
msn = open('mensajes.txt');

mensajes=[];

#quito los espacios grandes en las frases
for i in msn:
    if i != '\n':
        mensajes.append(i);

#print(len(mensajes)) saber la longitud de la lista
#esciger un numero aleatorio con numpy
n=np.random.randint(0,83);
#ponto la url de whatsapp wev +/send?phone=
url='https://web.whatsapp.com/send?phone=';
#abro la web con web broweser ásandole la url y el numero
webbrowser.open(url+numero);
time.sleep(8);
pyautogui.write(mensajes[n]);
pyautogui.press('enter');
