from tabulate import tabulate
datos = [["datos de gravedad sobre"],["planet name marte"],["0.0143"],["ganimides"]]


#from tabulate import tabulate
#planeta = "marte";
#gravedad = 0.0143;
#nombre = "ganimides";
#title = f'datos de gravedad sobre {nombre}';
#hechos = f"""Nombre del planeta: {planeta}
#Gravedad en {nombre}: {gravedad * 1000} m/s2 """

#union = f"""{title.title()}{hechos}""";

print(tabulate(datos));
