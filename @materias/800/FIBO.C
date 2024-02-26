/*
 *	Nombre del archivo:	F I B O . C
 *      Proposito:              Programa que genera la serie de Fibonacci
 *                              con una función recursiva
 *	Lenguaje:		Turbo C
 *	Modelo de Memoria:	Small
 *      Dise¤¢:                 Eugenio López Guerrero
 *                              PROGRAMACION BASICA (800)
 *      Catedratico             Prof.Dr. E. López
 *	Fecha:			1 de noviembre de 2010
*/
/*----------------------------------------------------------------------*/

/* ARCHIVOS HEADERS */
#include <stdio.h>
#include <stdlib.h>



/* CONSTANTES SIMBOLICAS */
#define MAXFIBO 20


/* PROTOTIPOS DE FUNCIONES */
void main (void);
int fibonacci (int);




/* CODIGO */
void main (void)
{
   int i;
   
   puts ("*** SERIE DE FIBONACCI ***");
   for (i=0; i<MAXFIBO; ++i)
      printf ("%d, " , fibonacci (i));
} /*-----------------------------------------------------------------*/






int fibonacci (int N)
{
    if (N<=1) return 1;
    return fibonacci (N-1) + fibonacci (N-2);
} /*-----------------------------------------------------------------*/


