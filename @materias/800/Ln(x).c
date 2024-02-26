#include <stdio.h>

/* Constante simbolica Dx se pasa al preprocesador */
#define Dx 0.01

main ()
{
    float x, Xn=13.56, A=0.0;
    
    for (x=1.0; x<=Xn; x+=Dx) A+=(1/x)*Dx;
    
    printf ("ln(%4.2f)=A=%f\n", Xn, A);
}/*------------------------------------------------------------*/

