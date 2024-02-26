/*
Resolucion por el metodo de Rene Montante
Sistema de ecuaciones de planos 3D
2x -  y + 2z =  1
      y      = -3
3x - 2y + 2z =  4
*/

#include <stdio.h>
#define N 3

               
main ()
{
	int i,j,k;
	int piv=1, t=0; 
	int A[N][2*N] = {{2,-1, 2, 1,0,0},
                     {0, 1, 0, 0,1,0},
                     {3,-2, 2, 0,0,1}};
	
// imprime la matriz
    puts ("MATRIZ ORG");
	for (i=0; i<N; ++i){
		for (j=0; j<N; ++j) printf ("%+3d ", A[i][j]);
		printf ("\n");
	}
	
// aplica Montante
	for(i=0; i<N; i++) {
		for(j=0; j<N; j++)
			if(j!=i) {
				t=A[j][i]; 
				for(k=0;k<2*N;k++) A[j][k]=((A[i][i]*A[j][k])-(t*A[i][k]))/piv;
			}
		piv=A[i][i];
	}
	
// imprime la matriz	
    puts ("\nMATRIZ ADJUNTA+TRASPUESTA");
	for (i=0; i<N; ++i){
		for (j=N; j<2*N; ++j) printf ("%+3d ", A[i][j]);
		printf ("\n");
	}
	printf ("\tDeterminante=%d\n", piv);

// imprime la matriz inversa	
    puts ("\nMATRIZ INVERSA");
	for (i=0; i<N; ++i){
		for (j=N; j<2*N; ++j) printf ("%+3.2f ", (1.0*A[i][j]/piv));
		printf ("\n");
	}
	printf ("\tDeterminante=%d\n", piv);
}/*---------------------------------------------------------------*/
               
