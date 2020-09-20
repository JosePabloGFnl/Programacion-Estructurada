#include<stdio.h> 
main()
{
	float s,sf;
	printf("Ingrese su salario\n");
	scanf("%f",&s);
	if (s<=0)
	{
		printf("No entra en el criterio.\n");
	}
	else if (s<18000)
	{
		sf=(s+(s*.12));
		printf("%f",sf);
	}
	else if (s>18000 && s<=30000)
	{
		sf=(s+(s*.08));
		printf("%f",sf);
	}
	else if (s>30000 && s<=50000)
	{
		sf=(s+(s*.07));
		printf("%f",sf);
	}
	else
	{
		sf=(s+(s*.06));
		printf("%f",sf);
	}
}
