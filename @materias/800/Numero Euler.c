#include <stdio.h>

main ()
{
   int i,t,f, n=10;
   float Suma = 1.0;
   
   for (t=1; t<=n; t++) {
      for (i=1, f=1; i<=t; i++) f *= i;
      Suma += 1.0/f;
   }
   printf ("\nSuma=%f\n", Suma);
}/*----------------------------------------------------*/

