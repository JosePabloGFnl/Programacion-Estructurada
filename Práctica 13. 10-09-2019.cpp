#include<stdio.h> 
main()
{
	int med,sme;
	float val,res;
	printf("1.MEDIDAS DE LONGITUD\n2.MEDIDAS DE VOLUMEN\n3. MEDIDAS DE PESO\n");
	scanf("%d",&med);
	switch (med)
	{
		case 1:
			{
				printf("MEDIDAS DE LONGITUD \n");
				printf ("1. Pulgada \n2. Yarda \n3. Milla \n4. Pulgada al cuadrado \n5. Pie al cuadrado\n6. Yarda al cuadrado\n7. Acre\n8. Milla\n");
				scanf("%d",&sme);
				printf("Ingrese el valor que desea convertir\n");
				scanf("%f",&val);
				switch (sme)
				{
					case 1: 
					{
						res=val*25.40;
						printf("%f",res);
						printf(" milímetros");
						break;
					}
					case 2: 
					{
						res=val*0.9144;
						printf("%f",res);
						printf(" metros");
						break;
					}
					case 3: 
					{
						res=val*1.6093;
						printf("%f",res);
						printf(" kilómetros");
						break;
					}
					case 4: 
					{
						res=val*6.452;
						printf("%f",res);
						printf(" centímetros cuadrados");
						break;
					}
					case 5: 
					{
						res=val*0.09290;
						printf("%f",res);
						printf(" metros cuadrados");
						break;
					}
					case 6: 
					{
						res=val*0.8361;
						printf("%f",res);
						printf(" metros cuadrados");
						break;
					}
					case 7: 
					{
						res=val*0.4047;
						printf("%f",res);
						printf(" hectáreas");
						break;
					}
					case 8: 
					{
						res=val*2.59;
						printf("%f",res);
						printf(" kilómetros cuadrados");
						break;
					}
					default:
						{
							printf("No ingresó una opción válida");
						}
					
				}
				break;
				
			}
		case 2:
			{
				printf("MEDIDAS DE VOLUMEN\n");
				printf("1. Pie cúbico \n2. Yarda cúbica\n3. Pinta\n4. Galón\n");
				scanf("%d",sme);
				printf("Ingrese el valor que desea convertir\n");
				scanf("%f",&val);	
				switch (sme)
				{
					case 1:
						{
						res=val*0.02832;
						printf("%f",res);
						printf(" metros cúbicos");
						break;
						}
					case 2:
						{
						res=val*0.7646;
						printf("%f",res);
						printf(" metros cúbicos");
						break;
						}
					case 3:
						{
						res=val*0.56826;
						printf("%f",res);
						printf(" litros");
						break;
						}
					case 4:
						{
						res=val*4.54609;
						printf("%f",res);
						printf(" litros");
						break;
						}
							default:
						{
							printf("No ingresó una opción válida");
						}
				}
				break;
			}
		case 3:
		{
				printf("MEDIDAS DE PESO");
				printf("1. Onza\n2. Libra\n3. Tonelada Inglesa\n");
				scanf("%d",sme);
				printf("Ingrese el valor que desea convertir\n");
				scanf("%f",&val);
				switch(sme)
				{
					case 1:
						{
						res=val*28.35;
						printf("%f",res);
						printf(" gramos");
						break;
						}
					case 2:
						{
						res=val*0.45359;
						printf("%f",res);
						printf(" kilogramos");
						break;
						}
					case 3:
						{
						res=val*1.0160;
						printf("%f",res);
						printf(" toneladas");
						break;
						}
							default:
						{
							printf("No ingresó una opción válida");
						}
				}
				break;
		}
		default:
			{
				printf("No ingresó una opción válida");
				break;
			}
	}
}
