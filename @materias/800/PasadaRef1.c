#include <stdio.h>
#include <math.h>

/* prototipos */
int  main ();
void raiz (float *);

main()
{
   float x=3.0;
   
   raiz(&x);
   printf ("%f", x);
}/*-------------------------------*/

void raiz (float *dato)
{
	float tmp;
	
   tmp = *dato;
   *dato = sqrt(tmp);
}/*-------------------------------*/

