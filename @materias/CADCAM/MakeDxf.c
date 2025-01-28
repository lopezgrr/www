/*
Este programa es el desarrollo de la estructura de datos para el manejo de puntos XYZ.
Utiliza la estructura propia struct point que contiene campos para las coordenadas x,y.

El cuerpo del programa principal main() se usa para capturar las coordenadas de los puntos P y Q,
las cuales se muestran en pantalla y se calcula la distancia entre ellos.
Simultáneamente esta información se almacena en un archivo de texto de salida llamado REPORTE.TXT.
Los valores de las coordenadas se graban también en un archivo POINTCLOUD.TXT para su importación
directa a cualquier plataforma CAD.
Finalmente se crea un archivo LINEA.DXF en el formato popular CAD de AutoDesk, conteniendo la
primitiva geométrica de línea, el cual puede ser importado a cualquier plataforma CAD.

Autor: Prof.Dr.Elopez@gmail.com
*/



#include <stdio.h>
#include <math.h>

struct point {
	float x;
	float y;
};



main (void)
{
	struct point P, Q;
	float Dist;
	FILE *fp, *fPointCloud, *fDxf;
	
	fp = fopen ("Reporte.txt", "wt");
	if (fp==NULL) return;  // si algo sale mal, se acaba el programa
	fPointCloud = fopen ("PointCloud.txt", "wt");
	if (fPointCloud==NULL) return;  // si algo sale mal, se acaba el programa
	fDxf = fopen ("Linea.dxf", "wt");
	if (fDxf==NULL) return;  // si algo sale mal, se acaba el programa
	
	// captura P
	printf ("Valor de Px: ");
	scanf ("%f", &P.x);
	printf ("Valor de Py: ");
	scanf ("%f", &P.y);	
	
	// captura Q
	printf ("Valor de Qx: ");
	scanf ("%f", &Q.x);
	printf ("Valor de Qy: ");
	scanf ("%f", &Q.y);	
	
	// calcula la distancia P-Q
	Dist = sqrt((Q.x-P.x)*(Q.x-P.x) + (Q.y-P.y)*(Q.y-P.y));
	
	// reporte pantalla
	printf ("P=[%f, %f]\n", P.x, P.y);
	printf ("Q=[%f, %f]\n", Q.x, Q.y);
	printf ("D=%f\n", Dist);
	// reporte en arch
	fprintf (fp, "P=[%f, %f]\n", P.x, P.y);
	fprintf (fp, "Q=[%f, %f]\n", Q.x, Q.y);
	fprintf (fp, "D=%f\n", Dist);

    // crea la nube de puntos
	fprintf (fPointCloud, "%f, %f\n", P.x, P.y);
	fprintf (fPointCloud, "%f, %f\n", Q.x, Q.y);
	
	// crea el archivo dxf
	fprintf (fDxf, "0\nSECTION\n2\nENTITIES\n0\nLINE\n8\nASSE_X\n10\n%f\n20\n%f\n30\n0\n11\n%f\n21\n%f\n31\n0\n0\nENDSEC\n0\nEOF", P.x, P.y, Q.x, Q.y);
	fclose (fp);
	fclose (fPointCloud);
	fclose (fDxf);
}/*--------------------------------------------------------------------------*/

