#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char c[2];
  int memocupada, memreservada, i;
  char *texto;

  printf("Escribe un texto pulsando INTRO tras cada carácter (pulsa ESC para terminar)");
  
  // Vamos a reservar originalmente 10 bytes para el texto
  memreservada = 10;
  // El texto actualmente ocupa 0 bytes
  memocupada = 0;

  // Reservamos memoria (10 bytes)
  texto = (char*)malloc(memreservada * sizeof(char));
  if (texto == NULL) { printf("Memoria insuficiente!"); exit(1); }

  do
  {
    gets(c);			// Leemos un carácter
    if (c[0] != 27)		// El carácter 27 (ESC) sirve para salir
    {
      texto[memocupada] = c[0];	// Almacenamos el carácter en la cadena dinámica
      memocupada++;		
      if (memocupada == memreservada)
      {	
	// Hemos sobrepasado la memoria reservada, así que vamos a reservar más
	// Reservaremos otros 10 bytes...
	memreservada = memreservada + 10;	
	printf("Realojando %i bytes...\n", memreservada);
	// Realojamos la memoria dinámica con realloc()
	texto = (char*)realloc(texto, memreservada * sizeof(char));
	if (texto == NULL) { printf("Memoria insuficiente!"); exit(1); }
      }
    }
  }
  while (c[0] != 27);	// El carácter 27 (ESC) es la marca para salir
  
  texto[memocupada] = '\0';	// Colocamos el nulo al final de la cadena

  puts("El texto original es:");
  puts(texto);

  // Encriptamos la cadena
  for (i = 0; i<strlen(texto); i++)
  {
      // Sólo cambiaremos los caracteres alfabéticos (de A a Z)
      if ((texto[i] >= 'A') && (texto[i] <= 'Z') ||
          (texto[i] >= 'a') && (texto[i] <= 'z'))
	 {
	    if (texto[i] == 'Z') texto[i] = 'A';	// La Z se convierte en A
	    else if (texto[i] == 'z') texto[i] = 'z';	// La z se convierte en a
	    else texto[i] = texto[i] + 1;		// El resto se convierte al siguiente carácter en la tabla ASCII
	}
  }

  puts("El texto encriptado es:");
  puts(texto);

  free(texto);

  return 0;
}
