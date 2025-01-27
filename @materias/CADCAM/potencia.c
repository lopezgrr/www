/*
Este programa es el desarrollo de una aproximación propia Potencia() a la función pow()
de C estándar.
Utiliza la función propia Ln() que calcula el logaritmo natural integrando la función 1/x
y la función propia ExponenteE() que calcula el logaritmo base e, utilizando la serie de potencias y
factoriales de Euler. La función propia Factorial() calcula el factorial del argumento.
Se demuestra que toda potencia (y por lo tanto todo radical) puede resolverse
con el uso de logaritmos.
El cuerpo del programa principal main() se usa para demostrar algunos cálculos.

Autor: Prof.Dr.Elopez@gmail.com
*/



#include <stdio.h>
#include <math.h>

#define MAXt      12
#define DELTAx 0.001

float Ln (float d);
unsigned int Factorial (unsigned int n);
float ExponenteE (float x);
float Potencia (float x, float y);


main ()
{
   float d=4.8;
   unsigned int x=6;
   
   puts ("\nUsando la funcion pow() estandar");
   d = pow(2.0, 0.5); 
   printf ("pow(2.0, 0.5) = %f\n", d);

   puts ("\nUsando nuestra funcion Potencia()");
   printf ("Potencia(2.0, 0.5) = %f\n", Potencia(2.0, 0.5));
   
   puts ("\nComprobando resultados del resto de funciones");
   printf ("ln(%.3f)=%f\n", d, Ln(d));
   printf ("e(%.3f)=%f\n", d, ExponenteE(d));  
   printf ("El factorial de %d es %d\n", x, Factorial(x));   
}/*----------------------------------------------------------------------------*/



float Potencia (float x, float y)
{
	float r;
	
	r = y*Ln(x);
	return (ExponenteE(r));
}/*----------------------------------------------------------------------------*/



float ExponenteE (float x)
{
	float Suma=1.0, Numerador;
	unsigned int i, t;
	
	for (t=1; t<=MAXt; ++t){
		Numerador=1.0;
		for (i=1; i<=t; ++i) Numerador *= x; // aqui hace la exponenciacion
		Suma += (Numerador/Factorial(t));
	}
	return (Suma);
}/*----------------------------------------------------------------------------*/



float Ln (float d)
{
   float Suma=0.0, x;
   
   for (x=1.0; x<d; x+=DELTAx) Suma += (1/x)*DELTAx; 
   return (Suma);
}/*----------------------------------------------------------------------------*/


unsigned int Factorial (unsigned int n)
{
   unsigned int F=1;
   
   for (F=1; n; --n) F *= n; 
   return (F);
}/*----------------------------------------------------------------------------*/

