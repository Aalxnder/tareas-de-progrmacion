from tkinter import *
from tkinter import ttk
from POOlogin import usuario
from tkinter import messagebox as Messagebox
root = Tk()
NombreUsuario=StringVar();
contraUsuario=StringVar();
usuarios=[];
def createGUI():
#ventana principal
    #root = Tk()
    root.title("login user");
    #root.iconbitmap("cr7.ico");
    root.resizable(False,False);
    #main frame
    mainframe=Frame(root);
    mainframe.pack();
    mainframe.config(width=480,height=320,bg="white");
    #mensajes de texto estaticos
    titulo = Label(mainframe,text="login de usuario",font=("Arial",20),bg="white");
    titulo.grid(row=0,column=0,padx=10,pady=10,columnspan=2);

    nombre = Label(mainframe,text="nombre",font=("Arial",14),bg="white");
    nombre.grid(row=1,column=0,sticky="e",padx=10,pady=10);

    contra = Label(mainframe,text="contraseña",font=("Arial",14),bg="white");
    contra.grid(row=2,column=0,padx=10,pady=10);

    #cuadros de entrada
    #NombreUsuario=StringVar();
    NombreUsuario.set("");
    #contraUsuario=StringVar();
    contraUsuario.set("");
    cuadroNombre = Entry(mainframe,textvariable=NombreUsuario);
    cuadroNombre.grid(row=1,column=1,padx=10,pady=10)
    cuadroContra = Entry(mainframe,textvariable=contraUsuario,show="*");
    cuadroContra.grid(row=2,column=1,padx=10,pady=10);
    #botones
    iniciarsesion=ttk.Button(mainframe,text="iniciar sesion",command=iniciarSesion);
    iniciarsesion.grid(row=3,column=1,padx=10,pady=10,ipadx=5,ipady=5);

    registrar=ttk.Button(mainframe,text="registrar",command=registrarUsuario);
    registrar.grid(row=3,column=0,padx=10,pady=10,ipadx=5,ipady=5);

    root.mainloop()

def iniciarSesion():
    global contraUsuario;
    for user in usuarios:
        if user.nombre==NombreUsuario.get():
            test = user.conectar(contraUsuario.get());

            if test == True:
                Messagebox.showinfo("conectado",f"el usuario {user.nombre} inicio sesion con exito con exito!");
                NombreUsuario.set("");
                contraUsuario.set("");
            else:
                Messagebox.showerror("Error","contraseña incorrecta");
            break;
    else:
        Messagebox.showerror("Error","no existen usuarios registrados con ese nombre");
def registrarUsuario():
    name=NombreUsuario.get();
    passwd = contraUsuario.get();
    newUser = usuario(name,passwd);
    usuarios.append(newUser);
    Messagebox.showinfo("Registro exitoso",f"el usuario {name} se ha creado con exito");
    NombreUsuario.set("");
    contraUsuario.set("");
if __name__=="__main__":
    #createGUI()
    #user = usuario(input("ingresa un nombre"),input("ingresa una contraseña"))
    user = usuario("levi","2187");
    usuarios.append(user);
    createGUI()
