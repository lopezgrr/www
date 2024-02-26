/*----------------------------------------------------------------------
 *      Nombre del archivo:     0 1 8 . C
 *      Proposito:              Ejemplo de manejo de archivos de texto.
 *                              Despliega un archivo en pantalla con
 *                              renglones numerados.
 *      Lenguaje:               Turbo C
 *      Modelo de Memoria:      Small
 *      Autor:                  Eugenio Lopez Guerrero.
 *      Fecha:                  18 de mayo de 2010.
 */
/*----------------------------------------------------------------------*/




#include <dos.h>
#include <stdio.h>




void main (void)
{
   FILE *arch;
   char NomArch[50], renglon[100];
   unsigned int NL=1;

   clrscr();
   puts ("Nombre del archivo: "); gets (NomArch);
   arch=fopen (NomArch, "rt");
   if (arch==NULL) {
      printf ("ERROR al abrir archivo [%s] !", NomArch);
      exit(0);
   }
   while (!feof(arch))
      if (fgets (renglon, sizeof(renglon), arch) != NULL)
         printf ("[%03d] %s", NL++, renglon);
   fclose (arch);
   exit(0);
} /*-----------------------------------------------------------------*/
