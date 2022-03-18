import requests
from bs4 import BeautifulSoup
#etiqueta div class quote_text
#importar la pagina
url='https://www.frasess.net/frases-romanticas-para-enamorar-71.html';
pagina=requests.get(url);
#extraer el contenido de la pagina
bs=BeautifulSoup(pagina.content,'html.parser');
#encontrar todos los elementos que hayan en el div donde estan las frases
mensajes=bs.find_all('div', class_='quote_text');

##agregar las frases al fichero
#abrir el fichero
archivo=open('mensajes.txt','w');
#esto va a iterar mientras haya contenido en la variable mensajes, es decir mientras aun haya frases
for i in mensajes:
    archivo.write(i.text); #decirle que me escriba solo el texto, sin las etiquetas ni nada de eso
archivo.close();
