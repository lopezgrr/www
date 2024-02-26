#include <stdio.h>
/* directiva al preprocesador */
/* constantes simbólicas filas y columnas */
#define FIL 10
#define COL 10

main ()
{
   int i,j, m,n, A[FIL][COL];
				
	// captura las dimensiones de la matriz
	printf ("Numero de fils: "); scanf ("%d", &m);
	printf ("Numero de cols: "); scanf ("%d", &n);
	// captura los elementos de la matriz
	for (i=0; i<m; ++i){
	   for (j=0; j<n; ++j){
	   	   printf ("A[%d][%d] = ", i,j);
	   	   scanf ("%d", &A[i][j]);
	   } 
	}
	// imprime la matriz
	puts ("\n\n*** MATRIZ ***");
	for (i=0; i<m; ++i){
	   for (j=0; j<n; ++j) printf ("%+2d ", A[i][j]);
	   printf ("\n"); // cambia de fila
	}
}/*-----------------------------------------------------------------*/

