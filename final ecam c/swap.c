#include<stdio.h>
int z(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a=%d",a);
	printf("\n");
	printf("b=%d",b);
}

void main()
{
	int a,b;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	z(a,b);
	
	
}