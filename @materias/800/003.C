/*
 *	Nombre del archivo:	0 0 3 . C
 *	Prop¢sito:              Ejemplos para folleto de Academia
 *                              Programaci¢n Basica.
 *                              Salida simple a la pantalla
 *	Lenguaje:		Turbo C
 *	Modelo de Memoria:	Small
 *      Dise¤¢:                 F. Eugenio Lopez Guerrero.
 *	Fecha:			2 de septiembre de 2009.
 */
/*----------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

main ()
{
   float Px, Py, Qx, Qy;
   float d;

   puts ("Programa que calcula la distancia entre dos puntos P y Q");

   printf ("Valor de Px:"); scanf ("%f", &Px);
   printf ("Valor de Py:"); scanf ("%f", &Py);

   printf ("Valor de Qx:"); scanf ("%f", &Qx);
   printf ("Valor de Qy:"); scanf ("%f", &Qy);

   d = sqrt((Px-Qx)*(Px-Qx)+(Py-Qy)*(Py-Qy));
   printf ("d=%2.2f\n", d);
} /*-----------------------------------------------------------------*/
