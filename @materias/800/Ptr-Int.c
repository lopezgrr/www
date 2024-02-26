#include <stdio.h>

main ()
{
	int i=85; // variable tipo int
	int *ptr; // ptr puede apuntar a objetos int
	
	ptr = &i; // ptr apunta a la direccion de i
	printf ("El valor de la direccion de ptr: %d", *ptr); // se imprime el contenido de a donde apunta ptr
} /*-------------------------------------------------------------------------------*/

