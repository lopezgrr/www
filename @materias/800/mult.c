/*
 *	Nombre del archivo: M U L T . C
 *	Prop¢sito:          Ejemplos para folleto de Academia
 *                          Programaci¢n Basica.
 *                          Salida simple a la pantalla
 *	Lenguaje:           Turbo C
 *	Modelo de Memoria:  Small
 *      Dise¤¢:             F. Eugenio Lopez Guerrero.
 *	Fecha:	            29 de octubre del 2010.
 */
/*----------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

main ()
{
   unsigned char i,j,k, N=3;
   int C[3][3];
   int A[3][3]= {{1,3,5},
                 {6,3,1},
                 {5,3,0}};

   int B[3][3]= {{1,3,5},
                 {6,3,1},
                 {5,3,0}};

   puts ("Este programa multiplica dos matrices cuadradas 3x3.");
   /* algoritmo de multiplicacion de matrices*/
   for (i=0; i<N; i++) 
      for (j=0; j<N; j++) {
         C[i][j] = 0;
         for (k=0; k<N; k++)
            C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
      }
   /* aqui termina la multiplicacion */

   printf("\nLa matriz AxB es:\n");
   for (i=0; i<N; i++) {
      printf("\n\t");
      for (j=0; j<N; j++) {
         printf(" %d ", C[i][j]);
      }
      printf("\n");
      }
} /*-----------------------------------------------------------------*/
