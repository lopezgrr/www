#include <stdio.h>
#include <math.h>

/* prototipos */
int main ();
float raiz (float);

main()
{
   float x, t=2.0;

   x = raiz(t);
   printf ("%f", x);
}/*-------------------------------*/

float raiz (float dato)
{
   return sqrt(dato);
}/*-------------------------------*/

