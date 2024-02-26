/*
 *	Nombre del archivo:	0 0 7 . C
 *	Prop¢sito:              Ejemplos para folleto de Academia
 *                              Programaci¢n Basica.
 *                              Serie de Fibonacci
 *	Lenguaje:		Turbo C
 *	Modelo de Memoria:	Small
 *      Dise¤¢:                 F. Eugenio Lopez Guerrero.
 *	Fecha:			14 de septiembre de 2009.
 */
/*----------------------------------------------------------------------*/

#include <stdio.h>

main ()
{
   unsigned int i, Fibo=0, n=0, a=0, b=1; /* se puede inicializar en la declaracion */

   puts ("Programa que muestra la serie de Fibonacci");
   printf ("Dame el numero de terminos n:"); scanf ("%d", &n);

   for (i=0, Fibo=0; i<n; ++i) {
      if (i<2) Fibo = i;
      else {
         Fibo = a+b;
         a = b;
         b = Fibo;
      } /* fin de if */
      printf ("%d, ", Fibo);
   } /* fin de for */
   printf ("...\n");
} /*-----------------------------------------------------------------*/
