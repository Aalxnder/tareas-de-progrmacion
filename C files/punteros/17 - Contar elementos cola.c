// Esta función cuenta el número de elementos de una cola, pero al hacerlo destruiremos
// su contenido. Se podrían contar los elementos sin destruirlos, recorriendo los nodos
// de la lista (ver implementación de las listas abiertas), pero entonces ya no estaríamos
// tratando con una cola en el sentido estricto de la palabra, sino con una lista abierta.

int contar_elementos(t_nodo **primero)
{
   int cont = 0;

   while (*primero != NULL) {
      cont++;
      sacar(&primero);
   }   

   return cont;
}
