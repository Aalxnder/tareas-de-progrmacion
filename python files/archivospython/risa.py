#programa que escribe risas
import random

largo = int(input("ingrese el numero de caracteres de la risa:\n"))

for i in range(largo):
    if i % 2 == 0:
        n = random.random()
        if (n < 0.4):
            print("j",end = '')
        elif (n >= 0.4 and n <= 0.6 ):
            print("s", end = '')
        elif (n >0.6 and n <= 0.8):
            print("k", end = '')
        elif (n > 0.8):
            print("jj", end = '')
    else:
        print("a", end = '')
