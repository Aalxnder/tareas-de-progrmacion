#widjet label
from tkinter import *

root=Tk()
#root.iconbitmap("cr7.ico")
miFrame=Frame(root,width=500,height=400)

miFrame.pack()
miFrame.config(bg="pink")
#editar y rescatar imagenes
#imagen=PhotoImage(file="pingu.gif")
Label(miFrame, image=imagen).place(x=0,y=0)
#agregar texto
miLabel=Label(miFrame,text="el bicho siuuuu",fg="red",font=("Comic sans MS",18)).place(x=0,y=150)
#empaquetar el Label



root.mainloop()
