/*----------------------------------------------------------------------
 *      Nombre del archivo:     T R A S P U E S T A . C
 *      Proposito:              Ejemplo de manejo de archivos de texto.
 *                              Despliega un archivo en pantalla con
 *                              renglones numerados.
 *      Lenguaje:               Turbo C
 *      Modelo de Memoria:      Small
 *      Autor:                  Eugenio Lopez Guerrero.
 *      Fecha:                  27 de octubre de 2010.
 */
/*----------------------------------------------------------------------*/



#include<stdio.h>

#define MAXFIL 3
#define MAXCOL 4

main()
{
  int  matriz[MAXFIL][MAXCOL], i, j, Fil, Col;

  /* CAPTURA LA MATRIZ */
  puts ("Programa que captura una matriz, la imprime y calcula la traspuesta");

  printf ("Numero de filas:"); scanf ("%d", &Fil);
  printf ("Numero de columnas:"); scanf ("%d", &Col);

  for(i=0; i<Fil; ++i)        
      for(j=0; j<Col; ++j) { 
         printf("Dame el elemento [%d][%d]: ", i, j);
         scanf ("%d", &matriz[i][j]);
      }


      /* IMPRIME LA MATRIZ */
  puts ("MATRIZ CAPTURADA:");
   for(i=0; i<Fil; ++i) {  
    for(j=0; j<Col; ++j)   
      printf("%3d ",matriz[i][j]);
    printf ("\n");
  }


  /* IMPRIME TRASPUESTA */
  puts ("MATRIZ TRASPUESTA:");
  for(j=0; j<Col; ++j) {  
     for (i=0; i<Fil; ++i) 
        printf ("%3d ", matriz[i][j]);
     printf ("\n");
  }


}/*------------------------------------------------------------------*/

