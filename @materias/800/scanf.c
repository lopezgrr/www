#include <stdio.h>

main ()
{
    float d;     // variable float
    float *ptr;  // apuntador float
    
    printf ("dame un numero con decimales: ");
    scanf ("%f", &d); // captura la variable d
    
    ptr = &d;  // ptr apunta a d
    *ptr /= 2; // el contenido de ptr se divide enter 2
    
   printf ("La mitad de tu numero es: %f\n", d);
} /*-------------------------------------------------------------------------*/

