#importar numpy
import numpy as np
#crear una lista con numeros primos
numprimos = [2,3,7,11,13,17,19,23,29];
print(numprimos);

##crear un array a partir de una lista
array_primos=np.array(numprimos);
print(array_primos);
#inprimir un array en zeros
array_ceros=np.zeros(10);
print(array_ceros);

#crear un array con numeros
array_numeros=np.arange(20);
print(array_numeros)
#crear numeros sucesivos ej. array de nuemros pares
array_pares=np.arange(0,20,2);
print(array_pares);
#haciendo reshape para un array de 2 dimensiones
array_numeros.reshape(2,10);

array_impares=array_pares+1;
print(array_impares);

#ordenar arrays
array_fibonacci=np.array([55,0,144,1,21,89,5,8,13,1,34,3,2]);
print(array_fibonacci);
#ordenar de menor a mayor
np.sort(array_fibonacci);
