/* Este programa calcula la integral de la funcion
-0.5*x*x*x+2*x*x-x+1
evaluada en el intervalo de 0.0 <x< 2.0
*/

#include <stdio.h>

/* Constante simbolica Dx se pasa al preprocesador */
#define Dx 0.001

main ()
{
    float x, Xn=2.0, V=0.0;
    
    for (x=0.0; x<=Xn; x+=Dx) V+=3.1416*(-0.5*x*x*x+2*x*x-x+1)*(-0.5*x*x*x+2*x*x-x+1)*Dx;
    
    printf ("Volumen de f(x)=V=%f\n", V);
}/*------------------------------------------------------------*/

