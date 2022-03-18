#widjet entry
from tkinter import *
#declarar raiz
root =Tk()

root.title("interfaces graficas")
#root.iconbitmap("cr7.ico")
#no dejar aumentar el tamaño de la ventana
root.resizable(False,False)
#declarar frame
frame = Frame(root,width=1200,height=600)
frame.pack()
frame.config(bg="yellow")
#cuadros para introducir textos
minombre=StringVar()
miapellido=StringVar()
midirecion=StringVar()
contraseña=StringVar()

cuadroNombre=Entry(frame,textvariable = minombre)
cuadroNombre.grid(row=0,column=1,padx=10,pady=10)
cuadroNombre.config(fg="blue",justify="center")

cuadroContra=Entry(frame,textvariable = contraseña)
cuadroContra.grid(row=1,column=1,padx=10,pady=10)
cuadroContra.config(fg="blue",justify="center")
cuadroContra.config(show="*")

cuadroapellido=Entry(frame,textvariable = miapellido)
cuadroapellido.grid(row=2,column=1,padx=10,pady=10)
cuadroapellido.config(fg="blue",justify="center")

cuadroDireccion=Entry(frame,textvariable = midirecion)
cuadroDireccion.grid(row=3,column=1,padx=10,pady=10)
cuadroDireccion.config(fg="blue",justify="center")

#cuadro de comentarios
textocomentario=Text(frame,width=16,height=5)
textocomentario.grid(row=4,column=1,padx=10,pady=10)

#barra de scroll vertical
barrascroll=Scrollbar(frame,command=textocomentario.yview)
barrascroll.grid(row=4,column=2,sticky="nsew")
#movimiento de la barra lateral de desplazamiento
textocomentario.config(yscrollcommand=barrascroll.set)
#label, textos estaticos
nombreLabel=Label(frame,text="nombre:")
nombreLabel.grid(row=0,column=0,sticky="e",padx=10,pady=5)

contraLabel=Label(frame,text="contraseña")
contraLabel.grid(row=1,column=0,sticky="e",padx=10,pady=5)

apellidoLabel=Label(frame,text="apellido:")
apellidoLabel.grid(row=2,column=0,sticky="e",padx=10,pady=5)

direccionLabel=Label(frame,text="direccion:")
direccionLabel.grid(row=3,column=0,sticky="e",padx=10,pady=5)

comentarioLabel=Label(frame,text="cuentame tu vida:")
comentarioLabel.grid(row=4,column=0,sticky="e",padx=10,pady=5)
#funcion para accion de un boton
def codigoBoton():
    minombre.set("levi")
def codigoBoton1():
    miapellido.set("perez")
def codigoBoton2():
    midirecion.set("jose maria martinez")
def codigoBoton3():
    contraseña.set("bwBZ7fsFR2")
#agregar botones
botonnombre=Button(frame,text="escribir nombre",command=codigoBoton)
botonnombre.grid(row=5,column=0,sticky="se",padx=10,pady=10)

botonapellido=Button(frame,text="escribir apellido",command=codigoBoton1)
botonapellido.grid(row=5,column=1,sticky="sw",padx=10,pady=10)

botonDireccion=Button(frame,text="escribir direcion",command=codigoBoton2)
botonDireccion.grid(row=6,column=0,sticky="se",padx=10,pady=10)

botoncontra=Button(frame,text="escribir direcion",command=codigoBoton3)
botoncontra.grid(row=6,column=1,sticky="sw",padx=10,pady=10)
#botonenvio.pack()

root.mainloop()
