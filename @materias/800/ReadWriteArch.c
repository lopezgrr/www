#include <stdio.h>

main()
{
   FILE *fpArchIn, *fpArchOut;
   int a,b,c, n=1;
   
   fpArchOut = fopen ("RAICES.TXT", "wt"); // 1)
   fpArchIn = fopen ("DATA.TXT", "rt"); // 1)
   if (fpArchIn==NULL) return;
   while (!feof(fpArchIn)){
   	   fscanf (fpArchIn, "%d", &a); // 2)
   	   fscanf (fpArchIn, "%d", &b);
   	   fscanf (fpArchIn, "%d", &c);

   	   printf ("%d)\na=%d, b=%d, c=%d\n",n,a,b,c);
   	   printf ("---------------------\n");
   	   fprintf (fpArchOut, "%d)\na=%d, b=%d, c=%d\n",n,a,b,c); // 2)
   	   ++n;
   }
   fclose (fpArchIn); // 3)
   fclose (fpArchOut); // 3)
}/*-----------------------------------------------------------*/

