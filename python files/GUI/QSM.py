
from tkinter import *
from tkinter import messagebox as Messagebox
import random
ventana=Tk();
ventana.title("QSCM");
ventana.resizable(False,False);
ventana.geometry("650x450");
ventana.config(bg="yellow");
ventana.config(relief="sunken");


def opcsi():
    Messagebox.showinfo("SIUUUUUUUUUUU:3","Sabia que dirias que si jijiji");
    ventana.quit();
def opcno():
    botonno.place(x=random.randrange(20, 400, 10),y=random.randrange(20, 400, 10),relwidth=.22,relheight=.12);

    botonno.config(cursor="hand2");

textolabel=Label(ventana,text=" ",font=("comic sans MS",28),bg="yellow");

textolabel.grid(row=1,column=2,pady=10,padx=100,columnspan=6);

textolabel=Label(ventana,text="¿quieres salir conmigo?",font=("comic sans MS",28),bg="yellow");
textolabel.grid(row=2,column=2,pady=10,padx=100,columnspan=6);

textolabel=Label(ventana,text=" ",font=("comic sans MS",28),bg="yellow");
textolabel.grid(row=3,column=0,pady=10,padx=10,columnspan=6);

textolabel=Label(ventana,text=" ",font=("comic sans MS",28),bg="yellow");
textolabel.grid(row=4,column=0,pady=10,padx=10,columnspan=6);

botonsi=Button(ventana,text="SI",font=("comic sans MS",14),bg="sky blue",command=opcsi);

botonsi.grid(row=5,column=1,pady=10,padx=10,columnspan=3,ipady=2,ipadx=50);

botonsi.config(cursor="hand2");

botonno=Button(ventana,text="NO",font=("comic sans MS",14),bg="sky blue",command=opcno);
botonno.grid(row=5,column=6,pady=10,padx=10,columnspan=3,ipady=2,ipadx=50);
botonno.config(cursor="hand2");

ventana.mainloop();
