/*
 *	Nombre del archivo:	0 0 4 . C
 *	Prop¢sito:              Ejemplos para folleto de Academia
 *                              Programaci¢n Basica.
 *                              Manejo de caracteres (enteros 1 byte)
 *	Lenguaje:		Turbo C
 *	Modelo de Memoria:	Small
 *      Dise¤¢:                 F. Eugenio Lopez Guerrero.
 *	Fecha:			6 de septiembre de 2009.
 */
/*----------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

main ()
{
   char ch;

   puts ("Programa que muestra los valores de un caracter");

   printf ("Presione una letra:"); ch = getch();

   printf ("\nCaracter      :%c", ch);
   printf ("\nEn decimal    :%03d", ch);
   printf ("\nEn hexadecimal:%02X", ch);

} /*-----------------------------------------------------------------*/
