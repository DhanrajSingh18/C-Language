#include<stdio.h>
#include<conio.h>
void main()
{
	int count,n;
	printf("enter n :");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
	    count++;	
	}
	
	printf("count=%d",count);	
	
	
}