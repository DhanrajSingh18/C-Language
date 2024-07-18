
#include<stdio.h>
#include<conio.h>

void main()
{
	int mark;
	char grade;
	printf("enter your mark : ");
	scanf("%d",&mark);
	
	if(mark>=80 && mark<=100)
	{
		// A
		grade = 'A';
	}
	else
	{
		if(mark>=70 && mark<80)
		{
			//B
				grade = 'B';
		}
		else
		{
			if(mark>=50 && mark<70)
			{
				//C
					grade = 'C';
			}
			else
			{
				if(mark>=30 && mark<50)
				{
					//D
						grade = 'D';
				}
				else
				{
					if(mark>=0 && mark<30)
					{
							grade = 'F';
					}
					else
					{
							grade = 'X';
						// Enter valid number
					}
				}
			}
		}
	}
	
	
	switch(grade)
	{
		case 'A' : printf("Excellent work !");
	}
	
	if(grade=='A' || grade=='B' || grade=='C' || grade=='D')
	{
		// y e f n l
	}
	else
	{
		// 
	}
	
	
	
}
