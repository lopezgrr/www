/*----------------------------------------------------------------------
 *      Nombre del archivo:     C U E N T A S T L . C
 *      Proposito:              Ejemplo de manejo de archivos de texto.
 *                              Lectura de un archivo STL ASCII
 *                              cuenta objetos y triangulos.
 *      Lenguaje:               Turbo C
 *      Modelo de Memoria:      Small
 *      Autor:                  Eugenio Lopez Guerrero.
 *      Fecha:                  27 de octubre de 2010.
 */
/*----------------------------------------------------------------------*/



#include<stdio.h>




main()
{
   FILE *fSTL;
   char renglon[100], NomArch[100];
   unsigned int countsolid=0, countfacet=0;
   
   printf ("Nombre del darchivo: "); gets (NomArch);
   strupr (NomArch);
   fSTL = fopen (NomArch, "rt");
   printf ("*** Contando objetos y facets en el archivo %s ***\n", NomArch);
   
   while (!feof(fSTL)) {
      renglon[0]=0;
      fgets (renglon, sizeof(renglon),fSTL);
      strlwr (renglon);
      
      if (strncmp(renglon,"solid",5) == 0){
      	  ++countsolid;
          printf ("Analizando el objeto %d: ", countsolid);
      }
      if (strstr(renglon,"facet") != NULL) ++countfacet;
      
      if (strstr(renglon,"endsolid") != NULL) {
        printf ("Se encontraron %d facets.\n", countfacet);
      	countfacet=0;
      }
   } /* end while */
   fclose (fSTL);
   printf ("*** En total se encontraron %d solidos.\n\n", countsolid);
}/*------------------------------------------------------------------*/

