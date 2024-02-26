/*----------------------------------------------------------------------
 *      Nombre del archivo:     S T R S O R T . C
 *      Proposito:              Ejemplo de ordenamiento de un string
 *                              utilizando el algoritmo bubble sort.
 *      Lenguaje:               Turbo C
 *      Modelo de Memoria:      Small
 *      Autor:                  Eugenio Lopez Guerrero.
 *      Fecha:                  11 de mayo de 2010.
 */
/*----------------------------------------------------------------------*/




#include <dos.h>
#include <stdio.h>
/* constante que determina la longitud max del posible nombre */
#define MAXINPUT  50

/* prototipos de funciones */
void captura (void);
int ordena (void);
void despliega (void);


/* variable global */
char Nombre[MAXINPUT];




void main (void)
{
   clrscr();
   puts ("Ejemplo de ordenamiento de un string");
   puts ("utilizando el algoritmo bubble sort.");
   captura();
   ordena();
   despliega();
} /*-----------------------------------------------------------------*/


void captura (void)
{
    puts ("Dame tu nombre: ");
    gets (Nombre);
} /*-----------------------------------------------------------------*/


void despliega (void)
{
   int c;

   printf ("Tu nombre con las letras en orden es: [%s]\n", Nombre);
   puts ("(vea la tabla ASCII para comprobar)");
   for (c=0; c<strlen(Nombre); ++c)
      printf ("%c = %3d [%2x]\n", Nombre[c], Nombre[c], Nombre[c]);
} /*-----------------------------------------------------------------*/



/* algoritmo del bubble sort */
int ordena (void)
{
   int i, j, count;
   char temp;

   count = strlen (Nombre)+1; /* numero de letras que tiene el nombre */
   for (i=0; i<count; ++i)
      for (j=i; j<count-1; ++j)
         if (Nombre[i]>Nombre[j]) {
            temp = Nombre[i];       /* intercambia los valores (swap) */
            Nombre[i] = Nombre[j];
            Nombre[j] = temp;
         }
} /*-----------------------------------------------------------------*/
