#include<stdio.h>
void main()
{
	int r,c,i,j,sum=0;
	
	
	int a[r][c],b[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter array a[%d][%d]",i,j);
			scanf("%d",a[i][j]);
			printf("\n");
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter array b[%d][%d]",i,j);
			scanf("%d",b[i][j]);
			printf("\n");
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}









