#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:");
	scanf("%d",&c);
	
    if(a<b)
    { 
       if(a<c)
       {
       	  printf("%d",a);
	   }
	   else
	   {
	   	printf("%d",c);
	   }        
    }      
	else
	{
		if(b<c)
		{
			printf("%d",b);
		}
		else
		{
			printf("%d",c);
		}
	}
  
	
	
	
	
	
	
}