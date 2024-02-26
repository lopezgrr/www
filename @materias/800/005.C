/*
 *	Nombre del archivo:	0 0 5 . C
 *	Prop¢sito:              Ejemplos para folleto de Academia
 *                              Programaci¢n Basica.
 *                              Calculo de raices de la ec. cuadratica
 *	Lenguaje:		Turbo C
 *	Modelo de Memoria:	Small
 *      Dise¤¢:                 F. Eugenio Lopez Guerrero.
 *	Fecha:			9 de septiembre de 2009.
 */
/*----------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

main ()
{
   int a, b, c;
   float D, r1, r2;

   puts ("Programa que calcula las raices de la cuadratica");

   printf ("Coeficiente a:"); scanf ("%d", &a);
   printf ("Coeficiente b:"); scanf ("%d", &b);
   printf ("Coeficiente c:"); scanf ("%d", &c);
   D = b*b-4*a*c;
   if (D<0) {
      puts ("Raices imaginarias");
      r1 = (float) -b/(2*a); /* type casting pues a y b son enteros */
      r2 = r1; /* la parte real es iagual */
      printf ("r1=%2.2f + %2.2fi\n", r1, sqrt(-D)/(2*a));
      printf ("r2=%2.2f - %2.2fi\n", r2, sqrt(-D)/(2*a));
   } else {
      r1 = (-b+sqrt(D))/(2*a);
      r2 = (-b-sqrt(D))/(2*a);
      if (D>0) puts ("Raices diferentes"); else puts ("Raices iguales");
      printf ("r1=%f\nr2=%f\n", r1, r2);
   }
} /*-----------------------------------------------------------------*/
