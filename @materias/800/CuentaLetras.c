#include <stdio.h>
#include <string.h>


main ()
{
   char *p, Nombre[30], n=0, vocales=0;
   
   printf ("Dame tu nombre: "); gets (Nombre); 
   printf ("Hola, %s! ", Nombre);
   
   n = strlen (Nombre);
   printf ("tu nombre tiene %d letras.\n", n);
   
   puts ("\nMayusculas:");
   strupr (Nombre);
   puts (Nombre);
   
   puts ("\nMinusculas:");
   strlwr (Nombre);
   puts (Nombre);
   
   for (p=Nombre; *p; ++p)
      switch (*p){
      	 case 'a':
      	 case 'e':
      	 case 'i':
      	 case 'o':
      	 case 'u': vocales++;
                   break;
	  } // end switch
   printf ("\n[%s] tiene %d vocales y %d consonantes...\n", Nombre, vocales, n-vocales);
}/*----------------------------------------------------------------------*/

