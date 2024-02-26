/*
Resolucion por el metodo de Rene Montante
Sistema de ecuaciones de planos 3D
2x + 2y - 3z =  1
 x + 3y - 2z = -3
4x -  y - 5z = 4
*/
#include <stdio.h>
#define N 3

               
main ()
{
	int i,j,k;
	int piv=1, t=0, Determinante; 
	int A[N][2*N+1] = {{2, 2,-3, 1, 1,0,0},
                       {1, 3,-2,-3, 0,1,0},
                       {4,-1,-5, 4, 0,0,1}};
	
// imprime la matriz
    puts ("\nMATRIZ ORIGINAL");
	for (i=0; i<N; ++i){
		for (j=0; j<N; ++j) printf ("%+3d ", A[i][j]);
		printf ("\n");
	}
	
// imprime los todos valores originales + matriz identidad	
    puts ("\nSISTEMA ORIGINAL ADICIONADO");
	for (i=0; i<N; ++i){
		for (j=0; j<2*N+1; ++j) printf ("%+7.2f ", (1.0*A[i][j]/piv));
		printf ("\n");
	}
// aplica Montante
    puts ("\naplicando el metodo Montante...");
	for(i=0; i<N; i++) {
		for(j=0; j<N+1; j++)
			if(j!=i) {
				t=A[j][i]; 
				for(k=0;k<2*N+1;k++) A[j][k]=((A[i][i]*A[j][k])-(t*A[i][k]))/piv;
			}
		piv=A[i][i];
	}
	Determinante = piv;
	
// imprime los todos valores resueltos con Montante	
    puts ("\nSISTEMA RESUELTO MONTANTE");
	for (i=0; i<N; ++i){
		for (j=0; j<2*N+1; ++j) printf ("%+7.2f ", (1.0*A[i][j]/Determinante));
		printf ("\n");
	}
	printf ("\nDETERMINANTE = %d\n", Determinante);

// imprime la matriz	
    puts ("\nMATRIZ ADJUNTA+TRASPUESTA");
	for (i=0; i<N; ++i){
		for (j=N+1; j<2*N+1; ++j) printf ("%+3d ", A[i][j]);
		printf ("\n");
	}

// imprime la matriz inversa	
    puts ("\nMATRIZ INVERSA");
	for (i=0; i<N; ++i){
		for (j=N+1; j<2*N+1; ++j) printf ("%+7.2f ", (1.0*A[i][j]/Determinante));
		printf ("\n");
	}
	
}/*---------------------------------------------------------------*/
               

