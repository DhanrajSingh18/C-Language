//Recursion : Function call itself

#include<stdio.h>
#include<conio.h>
int fact(int a); // function Declaration

int fact(int a)
{
	if(a==0)
	{
		return 0;
	}
	else if (a==1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
int main()
{
	int a,f;
//	printf("Enter No");
//	scanf("%d",&a);
	
	f= fact(5);
	printf("Factorial %d",f);
	
	getch();
}
