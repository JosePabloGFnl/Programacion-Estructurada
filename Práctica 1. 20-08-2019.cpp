#include<stdio.h> 
#include<conio.h> 
#include<windows.h>

main()
{
	float rad,ar,cir;
	printf ("Introduzca el radio de el c�rculo \n");
	scanf ("%f",&rad);
	ar=(rad*rad)*3.14;
	cir=(2*3.14)*rad;
	printf ("Su �rea respectiva es: %f \n", ar);
	printf ("La longitud de la circunferencia es: %f \n", cir);
	getche();
}
