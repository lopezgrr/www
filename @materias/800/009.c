/*
 * Nombre del archivo:   0 0 9 . C
 * Proposito:            Ejemplos para folleto de Academia
 *                       Programacion Basica.
 *                       Manejo de strings
 * Lenguaje:             Turbo C
 * Modelo de Memoria:    Small
 * Diseño:               F. Eugenio Lopez Guerrero.
 * Fecha:                12 de octubre de 2009.
 */
/*----------------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>

main()
{
   unsigned char i, Frase[50];

    puts ("Programa que escribe un string alreves");
    puts ("Escribe una frase"); gets (Frase);

    for (i=strlen(Frase); i; --i) /* recorre el arreglo alreves */
       putch(Frase[i-1]);
} /*-----------------*/
