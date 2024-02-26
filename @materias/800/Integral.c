/* Este programa calcula la integral de la funcion
-0.5*x*x*x+2*x*x-x+1
evaluada en el intervalo de -1 <x< 2
*/

#include <stdio.h>

/* Constante simbolica Dx se pasa al preprocesador */
#define Dx 0.01

main ()
{
    float x, Xn=2.0, A=0.0;
    
    for (x=-1.0; x<=Xn; x+=Dx) A+=(-0.5*x*x*x+2*x*x-x+1)*Dx;
    
    printf ("Integral de f(x)=A=%f\n", A);
}/*------------------------------------------------------------*/

