//Take something, Return Something

#include<stdio.h>
#include<conio.h>
int sum(int a, int b); // function decalration

int sum(int a, int b)
{
	printf("%d\n",a+b);
	return 0;
}

int main()
{
	sum(10,20); // Function calling 
	sum(100,50); // Function calling 
	return 0;
	
	getch();
}
