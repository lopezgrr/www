#include <stdio.h>

/* directiva al preprocesador */
/* constantes simbólicas filas y columnas */
#define n 3
#define m 3


main ()
{
	int i,j;
   int A[m][n]={{2, -1, 2},
                {0, 1, 0},
				{3, -2, 2}};
				
	for (i=0; i<m; ++i){
	   for (j=0; j<n; ++j) printf ("%+2d ", A[i][j]);
	   printf ("\n"); // cambia de fila
	}
}/*-----------------------------------------------------------------*/

