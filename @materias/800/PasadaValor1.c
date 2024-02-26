#include <stdio.h>
#include <math.h>

/* prototipos */
int main ();
float raiz (float);

main()
{
   float x;

   x = raiz(2.0);
   printf ("%f", x);
}/*-------------------------------*/

float raiz (float dato)
{
   return sqrt(dato);
}/*-------------------------------*/

