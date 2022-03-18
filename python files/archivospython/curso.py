#horas=float(input("ingresa las horas trabajadas "))
#tarifa=float(input("ingresa la tarifa "))

#if horas>40:
#    reg=horas*tarifa
#    otp=(horas-40)*(tarifa*.5)
#    pagat=reg+otp
#    print(pagat)
#else:
#    paga=hotas*tarifa
#    print(paga)


#def computepay(horas,tarifas):
#    if (hora > 40):
#        sum=hora*tarifa
#        summ=(hora-40)*(tarifa*.5)
#        paga=sum+summ
#    else:
#        paga=hora*tarifa
#    return paga

#hora = float(input("ingresa las horas trabajadas "))
#tarifa=float(input("ingresa la tarifa por hora trabajada "))
#p=computepay(hora,tarifa)
#print(p)

#x = 0
#if x < 2 :
#    print('Small')
#elif x < 10 :
#    print('Medium')
#else :
#    print('LARGE')
#print('All done')pip instal

#def stuff():
#    print('Hello')
#    return
#    print('World')

#stuff()


#def addtwo(a, b):
#    added = a + b
#    return a

#x = addtwo(2, 7)
#print(x)
#Enter 7, 2, bob, 10, and 4 and match the output below.

largest = 0;
smallest = 10000;
while True:
    num = input("Enter a number: ");
    if(num == 'done'):
        break;
    try:
        num2=int(num);
    except:
        print("Invalid input");

    if(num2 > largest):
        largest = num2;
    if(num2<smallest):
        smallest = num2;

print("Maximum is ",largest);
print("Minimun is ",smallest);
