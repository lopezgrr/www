/*
 * Nombre del archivo:   0 1 2 . C
 * Proposito:            Ejemplos para folleto de Academia
 *                       Programacion Basica.
 *                       Manejo de apuntadores
 * Lenguaje:             Turbo C
 * Modelo de Memoria:    Small
 * Diseño:               F. Eugenio Lopez Guerrero.
 * Fecha:                21 de octubre de 2009.
 */
/*----------------------------------------------------------------------*/



#include <stdio.h>
#include <conio.h>

#define NUM 3

int main ()
{
   int i, ch, afirmativas=0, negativas=0;
   char Preguntas[NUM][30]={"¿Te gusta progra?",
                            "¿Le vas a los Tigres?",
                            "¿Eres mayor de edad?"};

   for (i=0; i<NUM; ++i) {
      printf ("\n%s <S/N>", Preguntas[i]);
      ch=getch();
      switch (ch) {
         case 's':
         case 'S': ++afirmativas;
                   break;
         case 'n':
         case 'N': ++negativas;
                   break;
         default : printf ("\nERROR: presiona <S/N>!\n");
                   --i;
                   break;
      } /* end switch */
   } /* end for */
   printf ("\nNum de respuestas afirmativas: %d", afirmativas);
   printf ("\nNum de respuestas negativas  : %d\n", negativas);
   return (0);
} /*--------------------------------------------------*/

