#include<stdio.h> 
main()
{
	float com,comf;
	printf("Ingrese el monto de su compra. \n");
	scanf("%f",&com);
	
	if (com<800)
	{
		printf("Su precio final es: %.2f \n",com);
	}
	else if (com>=800 && com<=1500)
	{
		comf=(com-(com*.10));
		printf("Su precio final es: %.2f \n",comf);
	}
	else if (com>1500 && com<=5000)
	{
		comf=(com-(com*.15));
		printf("Su precio final es: %.2f \n",comf);
	}
	else
	{
		comf=(com-(com*.20));
		printf("Su precio final es: %.2f \n",comf);
	}

}
