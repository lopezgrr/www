/*
 *	Nombre del archivo:	    NTABLAS.C
 *	Prop¢sito:              Ejemplos para folleto de Academia
 *                          Programaci¢n Basica.
 *                          Salida simple a la pantalla
 *	Lenguaje:		        Turbo C
 *	Modelo de Memoria:	    Small
 *      Dise¤¢:             F. Eugenio Lopez Guerrero.
 *	Fecha:			        13 de octubre del 2010.
 */
/*----------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

main ()
{
   unsigned int Tabla, i, Respuesta[10], Calif=0;

   puts ("Programa que permite practicar con una tabla de multiplicar");
   
   printf ("Tabla a practicar:"); scanf ("%d", &Tabla);
   for (i=1; i<=10; ++i) {
       printf ("%2d X %2d = ?", Tabla, i); scanf ("%d", &Respuesta[i]);
       if (Respuesta[i]== i*Tabla) ++Calif;
   }
   printf ("*** RESPUESTAS CALIFICADAS *** Calificación = %d\n", Calif);
   for (i=1; i<=10; ++i) {
       printf ("%2d X %2d = %2d ", Tabla, i, Respuesta[i]);
       if (Respuesta[i]== i*Tabla) printf ("v\n"); else printf ("x\n");
   }
} /*-----------------------------------------------------------------*/
