#include<stdio.h>
#include<conio.h>
void main() 
{
    int num, first, last, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
  
    last = num % 10;
    
    while (num >= 10)
	{    
		num = num / 10;
	}
    first = num;

    int sum = first + last;

    printf(" sum %d is %d\n", original, sum);
	  
}