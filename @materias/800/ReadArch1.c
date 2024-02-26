#include <stdio.h>
#define RENGLONMAX 100

/* prototipos */
int main (void);

/*codigo */
int main (void)
{
	FILE *fpArch;
	char Renglon[RENGLONMAX], NomArch[20]="Poesia.txt";
	
	fpArch = fopen (NomArch, "rt"); // 1) Abrir
	if (fpArch==NULL) return (1); // si hay error en disco, termina programa
	
	while (!feof(fpArch)){
		fgets (Renglon, RENGLONMAX, fpArch); // 2) Leer
		printf ("%s",Renglon);
	}
	fclose (fpArch); // 3) Cerrar
}/*----------------------------------------------------------------------*/

