/*
 * Nombre del archivo:   0 1 6 . C
 * Proposito:            Ejemplos para folleto de Academia
 *                       Programacion Basica.
 *                       Archivo de salida en modo texto
 * Lenguaje:             Turbo C
 * Modelo de Memoria:    Small
 * Diseño:               F. Eugenio Lopez Guerrero.
 * Fecha:                16 de noviembre de 2009.
 */
/*----------------------------------------------------------------------*/



#include <stdio.h>
#include <conio.h>
#include <math.h>


int main (void);
int CalculaRaices (int a, int b, int c, float *r1, float *img1, float *r2, float *img2);

int main ()
{
   int A,B,C, result;
   float R1, IMG1, R2, IMG2;
   FILE *f;

   printf ("*** CALCULO DE LAS RAICES DE UNA ECUACION CUADRATICA ***\n");
   printf ("Coeficiente A:"); scanf ("%d", &A);
   printf ("Coeficiente B:"); scanf ("%d", &B);
   printf ("Coeficiente C:"); scanf ("%d", &C);
   result = CalculaRaices (A,B,C, &R1, &IMG1, &R2, &IMG2);
   f = fopen ("RAICES.TXT", "wt");
   if (f != NULL) {
      fprintf (f, "Coeficiente A:%d\n", A);
      fprintf (f, "Coeficiente B:%d\n", B);
      fprintf (f, "Coeficiente C:%d\n", C);
   }
   if (result>0) {
      printf ("RAICES REALES Y DIFERENTES\n");
      printf ("R1=%2.2f\nR2=%2.2f\n", R1, R2);
      if (f != NULL) {
         fprintf (f, "RAICES REALES Y DIFERENTES\n");
         fprintf (f, "R1=%2.2f\nR2=%2.2f\n", R1, R2);
      }
   }
   if (result<0) {
      printf ("RAICES IMAGINARIAS\n");
      printf ("R1=%2.2f + %2.2fi\n", R1, IMG1);
      printf ("R2=%2.2f - %2.2fi\n", R2, IMG2);
      if (f != NULL) {
         fprintf (f, "RAICES IMAGINARIAS\n");
         fprintf (f, "R1=%2.2f + %2.2fi\n", R1, IMG1);
         fprintf (f, "R2=%2.2f - %2.2fi\n", R2, IMG2);
      }
   }
   if (!result) {
      printf ("RAICES REALES E IGUALES\n");
      printf ("R1=%2.2f\nR2=%2.2f\n", R1, R2);
      if (f != NULL) {
         fprintf (f, "RAICES REALES E IGUALES\n");
         fprintf (f, "R1=%2.2f\nR2=%2.2f\n", R1, R2);
      }
   }
   fclose (f);
   return (result);
} /*--------------------------------------------------*/




int CalculaRaices (int a, int b, int c, float *r1, float *img1, float *r2, float *img2)
{
   int d;
   float D;

   *r1 = 0;   *r2 = 0;
   *img1 = 0; *img2 = 0;

   d = b*b - 4*a*c;
   D = sqrt (abs(d));

   *r1 = -b/(2.0*a);
   *r2 = *r1;

   if (d<0) { /* si es menor a cero, se calcula la parte imaginaria */
      *img1 = D/(2*a);
      *img2 = *img1;
   }
   else { /* si es mayor a cero, las raices son reales y dif. */
      *r1 += D/(2*a);
      *r2 -= D/(2*a);
   }

   return (d);
} /*--------------------------------------------------*/

