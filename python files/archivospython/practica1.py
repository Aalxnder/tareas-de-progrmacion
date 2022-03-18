#ejemplo de estructuras de control anidadas
#Autor: levi alexander Perez Elizondo
#practica 1-
#ejemplo 1:
#print("ingresa el mes del año con numero")
#mes = int(input())
#while mes>12:
#    print("error introduce un mes del año con numero (1-12)")
#    mes=int(input())
#if mes <=1:
#    print("El mes es enero \n la estacion es invierno ")
#elif mes <=2:
#    print("el mes es febrero\n la estacion es invierno ")
#elif mes<=3:
#    print ("el mes es marzo\n la estacion es primavera ")
#elif mes<=4:
#    print("el mes es abril \n la estacion es primavera")
#elif mes<=5:
#    print("el mes es mayo \n la estacion es  primavera")
#elif mes<=6:
#    print("el mes es junio \n la estacion es verano")
#elif mes<=7:
#    print("el mes es julio \n la estacion es verano")
#elif mes <=8:
#    print("es mes es agosto \n la estacion es verano")
#elif mes <=9:
#    print("el mes es septiembre \n la estacion es otoño")
#elif mes <=10:
#    print("el mes es octubre \n la estacion es otoño")
#elif mes <=11:
#    print ("el mes es noviembre \n la estacion es otoño")
#elif mes<=12:
#    print("el mes es diciembre \n la estacion es invierno")
print("ingresa el mes del año con numero")
mes = int(input())
while mes>12:
    print("error introduce un mes del año con numero (1-12)")
    mes=int(input())
if mes >=1:
    print("El mes es enero \n la estacion es invierno ")
    if mes >=2:
        print("el mes es febrero \n la estacion es invierno")
        if mes >=3:
            print("el mes es marzo \n la estacion es primavera")
            if mes >=4:
                print("el mes es abril \n la estacion es primavera")
                if mes >=5:
                    print("el mes es mayo \n la estacion es primavera")
                    if mes >=6:
                        print("el mes es junio \n la estacion es verano")
                        if mes >=7:
                            print("el mes es julio \n la estacion es verano")
                            if mes >=8:
                                print("el mes es agosto \n la estacion es verano")
                                if mes >=9:
                                    print("el mes septiembre \n la estacion es otoño")
                                    if mes >=10:
                                        print("el mes es octubre \n la estacion es otoño")
                                        if mes >=11:
                                            print("el mes es noviembre \n la estacion es otoño")
                                            if mes >=12:
                                                print("el mes es diciembre \n la estacion es invierno")
