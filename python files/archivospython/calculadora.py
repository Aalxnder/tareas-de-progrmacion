from tkinter import *
i=0
#ventana principal
ventana =Tk()
ventana.iconbitmap("cr7.ico")
ventana.title("calculadora")
ventana.resizable(0,0)
ventana.config(bg="gold")
ventana.config(bd="20",relief="sunken")
operacion=""
#ventana.geometry("400x400+50+50")
frame=Frame(ventana)
frame.config(bd="20")
frame.config(relief="sunken")

#cuadro de textos
e_texto = Entry(ventana, font=("calibri 20"))
e_texto.grid(row=1,column=1,padx=10,pady=10,columnspan=4)#el columnspan hace que la barra ocupe 4 columnas
e_texto.config(background="sky blue",fg="#000000",justify="center")
#funciones
def click_boton(valor):
    global i
    e_texto.insert(i,valor)
    i+=1
def borrar():
    e_texto.delete(0,END)
    i=0
def hacer_operacion():
    ecuacion=e_texto.get()
    resultado=eval(ecuacion)
    e_texto.delete(0,END)
    e_texto.insert(0,resultado)
    i=0
#botones fila0
botonborrar=Button(ventana,text="Ac",width=8,command=lambda: borrar())
botonborrar.grid(row=2,column=1,padx=1,pady=3)
botonborrar.config(bg="yellow",cursor="hand2")
botonparentesis1=Button(ventana,text="(",width=8,command=lambda: click_boton("("))
botonparentesis1.grid(row=2,column=2,padx=1,pady=3)
botonparentesis1.config(bg="yellow",cursor="hand2")
botonparentesis2=Button(ventana,text=")",width=8,command=lambda: click_boton(")"))
botonparentesis2.grid(row=2,column=3,padx=1,pady=3)
botonparentesis2.config(bg="yellow",cursor="hand2")
botondiv=Button(ventana,text="/",width=8,command=lambda: click_boton("/"))
botondiv.grid(row=2,column=4,padx=1,pady=3)
botondiv.config(bg="yellow",cursor="hand2")
#botones fila1
boton7=Button(ventana,text="7",width=8,command=lambda: click_boton(7))
boton7.grid(row=3,column=1,padx=1,pady=3)
boton7.config(bg="yellow",cursor="hand2")
boton8=Button(ventana,text="8",width=8,command=lambda: click_boton(8))
boton8.grid(row=3,column=2,padx=1,pady=3)
boton8.config(bg="yellow",cursor="hand2")
boton9=Button(ventana,text="9",width=8,command=lambda: click_boton(9))
boton9.grid(row=3,column=3,padx=1,pady=3)
boton9.config(bg="yellow",cursor="hand2")
botonmult=Button(ventana,text="*",width=8,command=lambda: click_boton("*"))
botonmult.grid(row=3,column=4,padx=1,pady=3)
botonmult.config(bg="yellow",cursor="hand2")
#botones fila2
boton4=Button(ventana,text="4",width=8,command=lambda: click_boton(4))
boton4.grid(row=4,column=1,padx=1,pady=3)
boton4.config(bg="yellow",cursor="hand2")
boton5=Button(ventana,text="5",width=8,command=lambda: click_boton(5))
boton5.grid(row=4,column=2,padx=1,pady=3)
boton5.config(bg="yellow",cursor="hand2")
boton6=Button(ventana,text="6",width=8,command=lambda: click_boton(6))
boton6.grid(row=4,column=3,padx=1,pady=3)
boton6.config(bg="yellow",cursor="hand2")
botonsuma=Button(ventana,text="+",width=8,command=lambda: click_boton("+"))
botonsuma.grid(row=4,column=4,padx=1,pady=3)
botonsuma.config(bg="yellow",cursor="hand2")
#botones fila3
boton1=Button(ventana,text="1",width=8,command=lambda: click_boton(1))
boton1.grid(row=5,column=1,padx=1,pady=3)
boton1.config(bg="yellow",cursor="hand2")
boton2=Button(ventana,text="2",width=8,command=lambda: click_boton(2))
boton2.grid(row=5,column=2,padx=1,pady=3)
boton2.config(bg="yellow",cursor="hand2")
boton3=Button(ventana,text="3",width=8,command=lambda: click_boton(3))
boton3.grid(row=5,column=3,padx=1,pady=3)
boton3.config(bg="yellow",cursor="hand2")
botonmenos=Button(ventana,text="-",width=8,command=lambda: click_boton("-"))
botonmenos.grid(row=5,column=4,padx=1,pady=3)
botonmenos.config(bg="yellow",cursor="hand2")
#botones fila4
boton0=Button(ventana,text="0",width=16,command=lambda: click_boton(0))
boton0.grid(row=6,column=1,padx=1,pady=3,columnspan=2)
boton0.config(bg="yellow",cursor="hand2")
botonpunto=Button(ventana,text=".",width=8,command=lambda: click_boton("."))
botonpunto.grid(row=6,column=3,padx=1,pady=3)
botonpunto.config(bg="yellow",cursor="hand2")
botonigual=Button(ventana,text="=",width=8,command=lambda:hacer_operacion())
botonigual.grid(row=6,column=4,padx=1,pady=3)
botonigual.config(bg="yellow",cursor="hand2")

ventana.mainloop()
