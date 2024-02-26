/*
 *	Nombre del archivo:	0 0 6 . C
 *	Proposito:              Ejemplos para folleto de Academia
 *                              Programaci¢n Basica.
 *                              Ejemplo de estatuto de desicion multiple switch
 *	Lenguaje:		Turbo C
 *	Modelo de Memoria:	Small
 *      Dise¤o:                 F. Eugenio Lopez Guerrero.
 *	Fecha:			14 de septiembre de 2009.
 */
/*----------------------------------------------------------------------*/

#include <stdio.h>

main ()
{
   unsigned char ch;

   puts ("Programa que muestra las clases de vocales");

   printf ("Presiona una vocal: "); ch = getch();
   switch (ch) {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'o':
      case 'O': printf ("%c es vocal fuerte\n", ch);
                break;
      case 'i':
      case 'I':
      case 'u':
      case 'U': printf ("%c es vocal debil\n", ch);
                break;
      default : printf ("ERROR: no es vocal!\n");
   } /* fin de switch */
} /*-----------------------------------------------------------------*/
