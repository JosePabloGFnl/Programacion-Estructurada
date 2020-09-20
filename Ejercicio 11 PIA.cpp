#include<stdio.h> 
#include<math.h>
main()

{

int p,q;
printf("Introduzca los valores\n");
scanf("%d",&p);
scanf("%d",&q); 
if ((pow(p,3)+pow(q,4)-(2*pow(p,2)))<680)
{
	printf("Los valores satisfacen la ecuación \n");
	printf("%d",p);
	printf(" %d",q);
}
else
{
	printf("Los valores no satifacen la ecuación \n");
}

}
