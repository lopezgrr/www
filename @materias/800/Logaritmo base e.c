#include <stdio.h>

main ()
{
   int term,fact, i, n=15;
   float Suma = 1.0, pot, x;
   
   printf ("valor de x: "); scanf ("%f", &x);
   
   for (term=1; term<=n; term++) {
   	  pot=1.0;
   	  fact=1;
      for (i=1; i<=term; i++) {
      	fact *= i;
      	pot *= x;
	  }
      Suma += pot/fact;
   }
   printf ("\nSuma=%f\n", Suma);
}/*----------------------------------------------------*/

