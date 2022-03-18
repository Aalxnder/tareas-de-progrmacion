int main(void)
{
   t_nodo *primero_A = NULL, *ultimo_A = NULL;
   t_nodo *primero_B = NULL, *ultimo_B = NULL;
   int i, v, dato_A, dato_B, iguales;
   
   printf("Introduzca los datos de la cola A\n");
   for (i=1; i<=4; i++) {
      scanf("%i", &v);
      insertar(&primero_A, &ultimo_A, v);
   }

   printf("Introduzca los datos de la cola B\n");
   for (i=1; i<=4; i++) {
      scanf("%i", &v);
      insertar(&primero_A, &ultimo_A, v);
   }

   // Comparamos las dos colas
   iguales = 1;
   for (i=1; i<=4; i++) {
      dato_A = sacar(&primero_A, &ultimo_A);	// Sacamos un dato de la cola A
      dato_B = sacar(&primero_B, &ultimo_B);	// Sacamos un dato de la cola B
      if (dato_A != dato_B)
         iguales = 0;
   }

   if (iguales == 1)
      printf("Las colas eran iguales");
   else
      printf("Las colas eran diferentes");

   return 0;
}
