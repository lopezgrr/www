#include <stdio.h>

main ()
{
	char A[]="Anita lava la tina"; // string
	char *p; // apuntador a enteros
	
	for (p=A; *p; ++p) printf ("%c", *p); // imprime hasta que encuentra el centinela cero
} /*-----------------------------------------------------------------*/

