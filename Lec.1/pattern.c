#include<stdio.h>
#include<conio.h>

void main()
{
//	outer loop - row
//	inner loop - column
	// inc - <
	// dec - >
//	5x5 = (rxc)  = 
	
	// row - same - i
	// row - defferent - j
	// start - same - value, defferent - variable
	// end - same - value, defferent - variable

	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

// X X X 
// X X X
// X X X
// X X X
// X X X




