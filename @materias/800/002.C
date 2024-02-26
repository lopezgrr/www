/*
 *	Nombre del archivo:	0 0 2 . C
 *	Prop¢sito:              Ejemplos para folleto de Academia
 *                              Programaci¢n Basica.
 *                              Salida simple a la pantalla
 *	Lenguaje:		Turbo C
 *	Modelo de Memoria:	Small
 *      Dise¤¢:                 F. Eugenio Lopez Guerrero.
 *	Fecha:			1 de septiembre de 2009.
 */
/*----------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

main ()
{
   int x,y;
   float d;
   printf ("Valor de x:"); scanf ("%d", &x);
   printf ("Valor de y:"); scanf ("%d", &y);
   d = sqrt(x*x+y*y);
   printf ("d=%2.2f\n", d);
} /*-----------------------------------------------------------------*/
