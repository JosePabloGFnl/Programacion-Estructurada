#include<stdio.h> 
#include<conio.h> 
#include<windows.h>
#include<math.h>

main()
{
	float n1,n2,s,r,m;
	printf ("Asigne el valor número uno: \n");
	scanf ("%f",&n1);
	 printf ("Asigne el valor número dos: \n");
	scanf ("%f",&n2);
	s=n1+n2;
	r=n1-n2;
	m=n1*n2;
	printf("El resultado de la suma es: %.2f \n",s);
	printf("El resultado de la resta es: %.2f \n",r);
	printf("El resultado de la multiplicación es: %.2f \n",m);
	getche();
}
