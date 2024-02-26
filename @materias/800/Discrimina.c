#include <stdio.h>


main()
{
   int a=1,b=2,c=1, D;
   
   D = b*b - 4*a*c;
   if (D>0) printf ("Raices reales y diferentes\n");
   else if (D<0) printf ("Raices imaginarias\n"); else printf ("Raices reales e iguales\n");
}/*-------------------------------------------------------------------*/

