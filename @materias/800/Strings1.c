/* Programa ejemplo para el manejo de Strings */

#include <stdio.h>
#include <string.h>

main()
{
   char A[7]="FIME"; /*arreglo unidimensional de un byte */
   int i;

   for (i=0; A[i]; ++i) printf ("[%c] - [%X] - [%d]\n", A[i], A[i], A[i]);
}

