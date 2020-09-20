#include<stdio.h> 
#include<conio.h> 
#include<windows.h>
#include<math.h>
main()
{
	float a,b,c;
	printf ("Ingrese el valor de a \n");
	scanf("%f",&a);
	printf ("Ingrese el valor de b \n");
	scanf("%f",&b);
	c=(sqrt((pow(a,2))+(pow(b,2))));
	printf("El valor de la operación sqrt((pow(a,2))+(pow(b,2))) es: %f",c);
	getche();
}
