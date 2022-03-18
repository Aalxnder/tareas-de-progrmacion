#inmportar todfas laas funciones de tkinter
from tkinter import *
#establecer una variable igual a Tk()
raiz=Tk()
#poner titulo a la ventana
raiz.title("primer proyecto grafico")
#impedir ajuste de ventana (0=width, 0=height)
raiz.resizable(True,True)
#imagen en la pantalla de titulo
#raiz.iconbitmap("cr7.ico")
#tamaño por defecto de la pestaña
#raiz.geometry("700x500") #la raiz se adapta al contenedor interno, por rso no se le da tamaño a la raiz si no al frame
#color de fondo
raiz.config(bg="pink")
#para evitar que se abra la consola de fondo cambiar la extension de .py a .pyw
#crear frames
miFrame = Frame()
#empaquetar el frame con la interfaz grafica
miFrame.pack(fill="both",expand="True")
#cambiar caracteristicas de los frames
miFrame.config(bg="red")
#especificar tamaño del grame
miFrame.config(width="750",height="450")
#bordes de ventana
#ancho de bordes
miFrame.config(bd=20)
miFrame.config(relief="sunken")
#cambiar el cursos del raton
miFrame.config(cursor="hand2")
#widged label para mostrar texto(texto estatico, no se puede interctuar) variablelabel=label(contenedor,opciones)
#bucle para la ejecucion de la interfaz(debe ir siempre al final)
raiz.mainloop()
