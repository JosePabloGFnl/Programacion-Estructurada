#include<stdio.h> 
#include<math.h>
main()
{
	int figura;
	float A,a,b;
	printf("1. Cuadrado \n");
	printf("2. Circulo \n");
	printf("3. Triángulo \n");
	scanf("%d",&figura);
	switch (figura)
	{
		case 1:
			{
				printf("Ingrese el lado. \n");
				scanf("%f",&a);
				A=a*a;
				printf("Área= %.2f",A);
				break;
			}
			case 2:
				{
					printf("Ingrese el radio. \n");
				scanf("%f",&a);
				A=M_PI*pow(a,2);
				printf("Área= %.2f",A);
				break;
				}
				case 3:
					{
						printf("Ingrese la base. \n");
				scanf("%f",&a);
				printf("Ingrese la altura. \n");
				scanf("%f",&b);
				A=(a*b)/2;
				printf("Área= %.2f",A);
				break;
					}
					default: 
					
						printf("Error.");
						break;
					
	}
	
}
