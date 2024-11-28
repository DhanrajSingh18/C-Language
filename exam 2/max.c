#include<stdio.h>

void main ()
{
	int a,b;
	printf("enter A: ");
	scanf("%d",&a);
		printf("enter B: ");
	scanf("%d",&b);
	
	int x[a],y[b];
	
	if(a>b)
	{
		printf("max num is: %d",a);
	}
	else
	{
		printf("max num is: %d",b);
	}

	
}
