//1) no args , no return type
//2) no args , with return type
//3) with args, no return type
//4) with args, with return type

#include<stdio.h>
#include<conio.h>

int print();

int print()
{
	int a=10,b=20;
	
	return a+b;
}

int main()
{
	
	printf("%d",print());
}
