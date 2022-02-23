#nota fijate en tu consola si tienes instalada la libreria tkinter si no no te dejara ejecutar
#te dira algo como "not module named tkinter, puedes revisar esto desde el cmd escribiendo pip frezze y viendo si esta"
#aunque creo que viene por defecto igual si no es asi para descargarla escribe en la consola
#pip install tkinter
from tkinter import * #esto importa la libreria que crea la ventana y el asterico indica que va a importar todos los elementos de tkinter
from tkinter import messagebox as Messagebox # esto va a importar las cajas de texto
import random #esto va a importar la funcion de generar numeros randoms para en este caso determinar las posiciones a donde se movera el boton
ventana=Tk(); #esto crea la ventana principal (lo de el nombre puede ser el que quieras yo le puse ventana para distinguir pero puede ser el que sea como "chavelo=Tk()")
ventana.title("QSCM"); #esto le pone el titulo a la ventana
ventana.resizable(False,False); #esto hace que la ventana no se pueda expandir de tamaño (si quieres que se pueda expandir ponle ventana.resizable(True,True); )
ventana.geometry("650x450"); #esto crea el largo y el ancho de la ventana
ventana.config(bd=20); #esto le da un borde de 20 pixeles
ventana.config(bg="yellow"); #esto pone el fondo amarillo
ventana.config(relief="sunken"); #esto le da un estilo al borde (todas las cosas para modificar la ventana se agregan con ".config")

#frame=Frame(ventana,width=600,height=450); #esto era para empaquetar la ventana en un frame pero no salia como queria, si quieres puedes probarlo con esto
#frame.pack();
#frame.config(bg="yellow");
#funciones
def opcsi(): #esta es la funcion de lo que hace el boton si, te muestra una caja de texto
    Messagebox.showinfo("SIUUUUUUUUUUU:3","Sabia que dirias que si jijiji"); #esto uestra la caja de texto con este mensaje(para esto tienes que importar la libreria "from tkinter import messagebox as Messagebox")
def opcno(): #esta funcion hace que el boton se mueva
    #con la opcion de generar numeros randoms le digo al boton que si lo clickeas se mueva de lugar a un lugar random dentro de la pantalla
    #y el relwidth y relheight son para conservar el boton del tamaño que estaba
    #el randrange(20,400,10) le dice al programa que genere un numero random iniciando en 20 hasta 400 y con un rango de 10 pixeles
    botonno.place(x=random.randrange(20, 400, 10),y=random.randrange(20, 400, 10),relwidth=.22,relheight=.12);
    #aqui nomas le cambie el cursos para que si el cursor esta arriba del boton se ponga el cursor en forma de manita
    botonno.config(cursor="hand2");
#creo el label del texto(el label es un lugar donde sale texto pero no se puede escribir )
textolabel=Label(ventana,text=" ",font=("comic sans MS",28),bg="yellow");
#el grid es para posicionarlo en la pantalla
#row son filas, column columnas(el programa que las genera solas), el pady y pady x son los pixeles de separacion entre el label y lo demas que haya en la pantalla
#el columnspan es para el el label ocupe 6 columnas, de lo contrario solo ocuparia 1
textolabel.grid(row=1,column=2,pady=10,padx=100,columnspan=6);
#lo mismo, pero aca escribi el texto pq sale en mejor posicion
#el font es para decirle a la compu q tipo de letra queremos y de que tamaño y el bg ="yellow " es para darle fondo al label para que sea igual que la pantalla
textolabel=Label(ventana,text="¿quieres ser mi novia?",font=("comic sans MS",28),bg="yellow");
textolabel.grid(row=2,column=2,pady=10,padx=100,columnspan=6);
#este y el q sigue solo los puse para abarcar espacio y poder poner los botones donde queria
textolabel=Label(ventana,text=" ",font=("comic sans MS",28),bg="yellow");
textolabel.grid(row=3,column=0,pady=10,padx=10,columnspan=6);

textolabel=Label(ventana,text=" ",font=("comic sans MS",28),bg="yellow");
textolabel.grid(row=4,column=0,pady=10,padx=10,columnspan=6);
#aqui creo el boton si con el atributo
textolabel=Label(ventana,text=" ",font=("comic sans MS",28),bg="yellow");
textolabel.grid(row=4,column=0,pady=10,padx=10,columnspan=6);
#aqui creo el boton si con el atributo "nombre=Button(donde se va a posicionar(en este caso en la ventaan principal por eso dice ventana))"
#,el texto que va a ir , y igualmente tipo de letra y tamaño, el fondo en este caso sky blue
#y importante, el comando "command" es lo que va a hacer el boton una vez lo presiones, en este caso llamara a la funcion opcsi que puse mas arriba y eso hara el boton
botonsi=Button(ventana,text="SI",font=("comic sans MS",14),bg="sky blue",command=opcsi);
#el ipadx y ipady son pa darle el tamaño al boton
botonsi.grid(row=5,column=1,pady=10,padx=10,columnspan=3,ipady=2,ipadx=50);
#le di que al poner el cursor sobre el boton aparezca la manita
botonsi.config(cursor="hand2");
#lo mismo que con el boton anterior solo aqui llama a la funcion opcno que es la que hace q el boton se mueva
botonno=Button(ventana,text="NO",font=("comic sans MS",14),bg="sky blue",command=opcno);
botonno.grid(row=5,column=6,pady=10,padx=10,columnspan=3,ipady=2,ipadx=50);
botonno.config(cursor="hand2");
#esto es importante
#este codigo de ventana,mainloop es lo que hace que la ventana se este actualizando constantemente
#todo lo que pongas referente a la ventana debe ir aca adentro si no te marcara unos errores en la linea 3000 y asi aunque el programa no tenga esas lineas xd
#asi aue todo dentro de el mainloop
#de hecho creo que la ventana en python se crea solo con el codigo de
#from tkinter import *
#ventana=Tk()
#ventana.mainloop() xd
ventana.mainloop();
    
    
    