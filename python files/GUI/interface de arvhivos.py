from tkinter import *
from tkinter import messagebox
def abrir():
    #messagebox.showinfo(title="eehhhhhh",message="hiciste click en abrir")
    ventabrir=Tk()
    ventabrir.geometry("1200x600+50+50")
    ventabrir.title("ventana2")
    ventabrir.config(relief="sunken")
    ventabrir.config(bg="pink")
    ventabrir.config(bd="20")
    ventabrir.config(cursor="hand2")
def salir():
    salir=messagebox.askquestion(title="salir",message="desea salir de la ventana?")
    if salir == 'yes':
        ventana.quit()
ventana=Tk()
ventana.title("interface grafica de menus")
#ventana.iconbitmap("cr7.ico")
ventana.geometry("1200x600+50+50")
ventana.config(relief="sunken")
#fondo=PhotoImage(file="pythong.gif")
#agregar imagen de fondo(soloimagenes.gif)
#fondo1=Label(ventana, image=fondo).place(x=0,y=0,relwidth=1,relheight=1)
#creacion de menus en tkinter
#1) crear la barra de menus
barraMenu=Menu(ventana)
#2) crear los menus
mnuArchivo=Menu(barraMenu)
mnuedicion=Menu(barraMenu)
#3)crear los comandos de los menus
#comandos menu 1(archivos)
mnuArchivo.add_command(label="Abrir",command=abrir)
mnuArchivo.add_command(label="nuevo")
mnuArchivo.add_command(label="guardar")
mnuArchivo.add_command(label="cerrar")
mnuArchivo.add_separator()
mnuArchivo.add_command(label="salir",command=salir)
#comandos menu2(edicion)
mnuedicion.add_command(label="copiar")
mnuedicion.add_command(label="pegar")
mnuedicion.add_command(label="deshacer")
mnuedicion.add_command(label="rehacer")
#4)agregar los menus a la barra de menus
barraMenu.add_cascade(label="Archivo",menu=mnuArchivo)
barraMenu.add_cascade(label="Edicion",menu=mnuedicion)
#5)indicar que la barra de menus estarar en la ventana
ventana.config(menu=barraMenu)
ventana.mainloop()
