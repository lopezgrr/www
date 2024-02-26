/*
 * Nombre del archivo:   0 1 1 . C
 * Proposito:            Ejemplos para folleto de Academia
 *                       Programacion Basica.
 *                       Manejo de apuntadores
 * Lenguaje:             Turbo C
 * Modelo de Memoria:    Small
 * Diseño:               F. Eugenio Lopez Guerrero.
 * Fecha:                20 de octubre de 2009.
 */
/*----------------------------------------------------------------------*/


#include <stdio.h>
#include <conio.h>

/* esta es una definicion para el pre-procesador y sustituye LITERALMENTE */
#define MAX   30

main()
{
   char *p, Nombre[MAX];

   puts  ("Dame tu nombre"); gets (Nombre);
   for (p=&Nombre[0]; *p; ++p) /* el apuntador hacia el primer elemento */
      if (*p!=' ') putch (*p); /* si no es espacio, lo escribe en pantalla */
} /*-----------------*/
