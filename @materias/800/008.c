/*
 *	Nombre del archivo:   0 0 8 . C
 *	Proposito:            Ejemplos para folleto de Academia
 *                            Programacion Basica.
 *                            Manejo de strings
 *	Lenguaje:             Turbo C
 *	Modelo de Memoria:    Small
 *      Diseño:               F. Eugenio Lopez Guerrero.
 *	Fecha:                10 de octubre de 2009.
 */
/*----------------------------------------------------------------------*/


#include <stdio.h>

main()
{
	int i;
	char Nombre[50]="Karen";  /* mayusculas y minusculas */

	for (i=0; Nombre[i]; ++i) /* recorre el arreglo mientras no sea cero */
		if (Nombre[i]>'Z') Nombre[i] = Nombre[i] + ('A'-'a'); /* ver tabla ASCII */
	printf ("%s",Nombre);
} /*-----------------*/
