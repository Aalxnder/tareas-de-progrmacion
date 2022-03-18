nombre=[];
nombremat=[];
codigo=[];
calificacionmat=[];
calificacioning=[];
print("este programa mostrara la calificacion de x cantidad de materias de un estudiante:");
print("ingresa la cantidad de estudiantes a los que se realizara la calificacion");
cant=int(input());
for i in range(cant):
    print("ingresa el nombre de el estudiante numero ",i);
    nomb=input();
    nombre.append(nomb);
    print("ingresa el codigo de el estudiante ",nomb);
    cod=int(input());
    print("ingresa la calificacion de la meteria de mate:");
    calmat=float(input());
    calificacionmat.append(calmat);
    print("ingresa la calificacion de la meteria de ingles:");
    caling=float(input());
    calificacioning.append(caling);

for i in range(cant):
    print("nombre del estudiante: ",nombre);
    print("codigo del estudiante: ",codigo);
    print("calificacion de mate: ",calificacionmat);
    print("calificacion de ingles: ",calificacioning);
