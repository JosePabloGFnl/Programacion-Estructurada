#include<stdio.h> 
#include<conio.h> 
#include<windows.h>
#include<math.h>

main()
{
	float rad, cir, ar;
	printf ("Introduzca el radio de el c�rculo \n");
	scanf ("%f",&rad);
	ar=pow(rad,2)*M_PI;
	cir=(2*M_PI)*rad;
	printf ("Su �rea respectiva es: %f \n", ar);
	printf ("La longitud de la circunferencia es: %f \n", cir);
	getche();
}
