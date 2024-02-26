#include <stdio.h>

main ()
{
   int i, F=1, n=5;
   
   for (i=1; i<=n; i++) F *= i;
   printf ("factorial de %d = %d\n", n, F);
}/*-------------------------------------------------------------*/

