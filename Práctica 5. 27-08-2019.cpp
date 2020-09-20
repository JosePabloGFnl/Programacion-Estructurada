#include<stdio.h> 
#include<conio.h> 
#include<windows.h>
#include<math.h>
main()
{
	float a,b,h;
	printf ("Ingrese el valor de b \n");
	scanf("%f",&b);
	printf ("Ingrese el valor de h \n");
	scanf("%f",&h);
	a=((b*h)/2);
	printf("El valor de la operación (b*h)/2 es: %f",a);
	getche();
}
