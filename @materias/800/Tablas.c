#include <stdio.h>

/* prototipo */
void main (void);

void main (void)
{
   FILE *fp;
   int t, i;
   
   printf ("Que tabla? "); scanf ("%d", &t);
   
   fp = fopen ("TABLAS.TXT", "wt"); // 1) Solicita abrir el archivo al Sist.Operativo (Windows) 
   if (fp==NULL) return; // Si el driver le reporta ERROR a Windows, termina el programa
   while (t){ // 2) Ejecuta la operación tantas veces como necesario
   	  fprintf (fp,"\n\nTABLA DEL  %d\n", t);
      for (i=1; i<=10; i++)
         fprintf (fp, "%2dx%2d=%3d\n", t, i, t*i); 
   	  --t;
   }
   fclose (fp); // 3) Cierra el archivo
}/*------------------------------------------------------------------*/

