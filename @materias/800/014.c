/*
 * Nombre del archivo:   0 1 4 . C
 * Proposito:            Ejemplos para folleto de Academia
 *                       Programacion Basica.
 *                       Pasada por valor a funciones
 * Lenguaje:             Turbo C
 * Modelo de Memoria:    Small
 * Diseño:               F. Eugenio Lopez Guerrero.
 * Fecha:                7 de noviembre de 2009.
 */
/*----------------------------------------------------------------------*/



#include <stdio.h>
#include <conio.h>
#include <math.h>


int main (void);
int Es_Par (int a);

int main ()
{
   int A;

   printf ("*** FUNCION QUE REVISA NUMEROS PARES Y NONES ***\n");
   do {
      printf ("Dame un mumero (0=fin):"); scanf ("%d", &A);
      if (Es_Par (A)) printf ("%d es par\n", A); else printf ("%d es impar\n", A);
   } while (A);
   return (0);
} /*--------------------------------------------------*/




int Es_Par (int a)
{
   return !(a % 2);
} /*--------------------------------------------------*/

