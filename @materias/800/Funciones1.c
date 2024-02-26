/* directivas al preprocesador */
#include <stdio.h>

/*prototipos de funciones */
int main();
int Captura();

/* empieza el codigo */
int main()   
{
	if(Captura()) puts ("IMPAR"); else puts ("PAR");
}/*---------------------------------------------------------------------*/

int Captura()
{
	int dato;
	
   printf ("Dame un numero entero: ");
   scanf ("%d", &dato);
   return (dato%2);
}/*---------------------------------------------------------------------*/

