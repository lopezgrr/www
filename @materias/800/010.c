/*
 * Nombre del archivo:   0 1 0 . C
 * Proposito:            Ejemplos para folleto de Academia
 *                       Programacion Basica.
 *                       Manejo de matrices
 * Lenguaje:             Turbo C
 * Modelo de Memoria:    Small
 * Diseño:               F. Eugenio Lopez Guerrero.
 * Fecha:                12 de octubre de 2009.
 */
/*----------------------------------------------------------------------*/


#include <stdio.h>

/* esta es una definicion para el pre-procesador y sustituye LITERALMENTE */
#define MAX   5

main()
{
   int i, j, Matriz[MAX][MAX];

    printf  ("Programa que escribe una matriz identidad de tamano %d\n", MAX);

    for (i=0; i<MAX; ++i)
       for (j=0; j<MAX; ++j)
          if (i==j) Matriz[i][j] = 1; else Matriz[i][j] = 0;

   puts ("La matriz es:");
   for (i=0; i<MAX; ++i) {
      for (j=0; j<MAX; ++j) printf ("%2d", Matriz[i][j]);
      printf ("\n");
   }
} /*-----------------*/
