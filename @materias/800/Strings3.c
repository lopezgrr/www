/* Programa ejemplo para el manejo de Strings */

#include <stdio.h>
#include <string.h>

main()
{
   char t, A[10]="Eugenio"; /*arreglo unidimensional de un byte */
   int i, j, n;

   n = strlen(A); /* la funcion strlen() mide la longitud del arreglo revisando el centinela */
   
   printf ("Arreglo original: [%s]\n", A); /* imprime el arreglo original completo */
   
   /* ahora procede a ordenar con el algoritmo de la burbuja */
   for (i=0; i<n-1; ++i)
      for (j=i; j<n; ++j) {
      	   if (A[i]>A[j]) {
      	   	   t = A[i];
      	   	   A[i] = A[j];
      	   	   A[j] = t;
		   }
	  }

   printf ("Arreglo ordenado: [%s]\n", A); /* imprime el arreglo ordenado completo */
   /* y procede a imprimir la lista uno a uno en formato letra y numero */
   for (i=0; A[i]; ++i) printf ("[%c] - [%X] - [%3d]\n", A[i], A[i], A[i]);
}

