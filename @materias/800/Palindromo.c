#include <stdio.h>
#include <string.h>


main ()
{
   char Texto[]="Anita lava la tina";
   
   strupr (Texto);
   puts (Texto);
   
   puts ("\nAl reves:");
   strrev (Texto);
   puts (Texto);
}/*----------------------------------------------------------------------*/

