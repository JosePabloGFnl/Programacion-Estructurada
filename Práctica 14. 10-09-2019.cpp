#include<stdio.h> 
main()
{
	int cat,phe,dif;
	float sal;
	printf("Ingrese su categoría\n");
	scanf("%d",&cat);
	printf("Ingrese la cantidad de horas laboradas\n");
	scanf("%d",&phe);
		if (phe>30)
	{
		dif=(phe-30);
	}
	else
	{
		dif=0;
	}
	switch (cat)
	{
		case 1:
			{
				sal=(phe-dif)*40;
				printf("Su salario es de: %.2f",sal);
				printf(" pesos.");
				break;
			}
		case 2:
			{
				sal=(phe-dif)*50;
				printf("Su salario es de: %.2f",sal);
				printf(" pesos.");
				break;
			}
		case 3:
			{
				sal=(phe-dif)*85;
				printf("Su salario es de: %.2f",sal);
				printf(" pesos.");
				break;
			}
		default:
			{
				printf("Usted no recibe ningún tipo de beneficio.");
				break;
			}
	}
}
