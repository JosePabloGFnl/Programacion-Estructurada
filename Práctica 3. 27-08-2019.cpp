#include<stdio.h> 
#include<conio.h> 
#include<windows.h>
#include<math.h>
main()
{
	float x,y;
	printf ("Ingrese el valor de x \n");
	scanf("%f",&x);
	y=(2+sin(pow(x,2)));
	printf("El valor de la operación 2+sin(pow(x,2)) es: %f",y);
	getche();
}
