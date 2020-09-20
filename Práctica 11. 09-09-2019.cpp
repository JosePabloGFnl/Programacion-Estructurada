#include<stdio.h> 
#include<math.h>
main()
{
	int x,y;
	printf("Ingrese el valor de su variable. \n");
	scanf("%d",&y);
	if ((y%4)==0)
	{
		x=(pow(y,3));
		printf("El valor de la ecuación respectiva es %d \n",x);
	}
	else if ((y%4)==1)
	{
		x=(((pow(y,2))-14) /(pow(y,3)));
		printf("El valor de la ecuación respectiva es %d \n",x);
	}
	else if ((y%4)==2)
	{
		x=((pow(y,3))+5);
		printf("El valor de la ecuación respectiva es %d \n",x);
	}
	else if ((y%4)==3)
	{
		sqrt(y);
		printf("El valor de la ecuación respectiva es %d \n",x);
	}
	else
	{
		print("Error ",x);
	}
	
}

