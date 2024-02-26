/*
 * Nombre del archivo:   0 1 5 . C
 * Proposito:            Ejemplos para folleto de Academia
 *                       Programacion Basica.
 *                       Familia printf - scanf
 * Lenguaje:             Turbo C
 * Modelo de Memoria:    Small
 * Diseño:               F. Eugenio Lopez Guerrero.
 * Fecha:                7 de noviembre de 2009.
 */
/*----------------------------------------------------------------------*/



#include <stdio.h>
#include <conio.h>
#include <string.h>


int main (void);



int main ()
{
   char Texto[50], *p;
   int i;

   printf ("*** FUNCION QUE DESPLIEGA LOS CARACTERES DE UN STRING ***\n");
   printf ("Dame un numero:"); scanf ("%d", &i);  /* captura entero en i */
   sprintf (Texto, "El numero es: %02d\n", i); /* imprime en el string */
   puts (Texto);
   for (p=Texto; *p; ++p)    /* notese el uso del apuntador */
      printf ("%c - %02x - %03d\n", *p, *p, *p); /* imprime cada char */
   return (0);
} /*--------------------------------------------------*/




