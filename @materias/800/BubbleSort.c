#include <stdio.h>

main ()
{
   int i,j,t, A[10] = {9,28,14,18,18,19,23,6,22,24};

   puts ("ORIGINAL");
   for (i=0; i<10; ++i) printf ("A[%d]=%d\n", i, A[i]);
   
   for (i=0; i<10-1; ++i)
      for (j=i; j<10; ++j) {
      	   printf ("i->%d j->%d",i,j);
      	   if (A[i]>A[j]) {
      	   	   printf ("*");
      	   	   t = A[i];
      	   	   A[i] = A[j];
      	   	   A[j] = t;
		   }
		   puts("");
	  }

   puts ("ORDENADO");
   for (i=0; i<10; ++i) printf ("A[%d]=%d\n", i, A[i]);
}/*----------------------------------------------------------------*/

