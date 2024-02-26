// Ejemplo de un arreglo unidimensional de tipo float
#include <stdio.h>
#define N 7

main ()
{
	float F[N] = {8.4, 5.6, 1.0, 9.8, 3.1, 6.9, 2.5};
	float Mayor, Menor, Promedio=0.0;
	int i;
	
	Mayor = F[0];
	Menor = F[0];
	for (i=0; i<N; ++i){
	   if (F[i]<Menor) Menor = F[i];
	   if (F[i]>Mayor) Mayor = F[i];
	   Promedio += F[i];
	}
	Promedio /= N;
	
	printf ("Mayor = %3.2f\n", Mayor);
	printf ("Menor = %3.2f\n", Menor);
	printf ("Prom. = %3.2f\n", Promedio);
}/*--------------------------------------------------------------------*/

