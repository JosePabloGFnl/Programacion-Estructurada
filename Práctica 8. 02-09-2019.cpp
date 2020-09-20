#include<stdio.h> 
#include<windows.h>
main()
{
	int num;
	printf("Ingrese el número \n");
	scanf("%d", &num);
	if (num==0)
	{
		printf("Es nulo\n");
	}
	else if (num%2==0)
	{
		printf("Es par");
	}
	else
	{
		printf("Es impar");
	}

}
