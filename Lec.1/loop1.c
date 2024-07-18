#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i;
	
	printf("Enter No\n");
	scanf("%d",&no);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d  = %d\n",no,i,no*i);
	}
	

	

	
	getch();
	
}
