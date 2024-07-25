#include<stdio.h>
#include<conio.h>

void main()
{

	int salary,hra,da,ta;
	float total;
	printf("enter your salary: ");
	scanf("%d",&salary);
	printf("Enter your hra: ");
	scanf("%d",&hra);
	printf("Enter your da: ");
	scanf("%d",&da);
	printf("Enter your ta: ");
	scanf("%d",&ta);

	  hra=(salary*hra)/100;
	  da=(salary*da)/100;
	  ta=(salary*ta)/100;
	  total=(hra+da+ta)+salary;
	  printf("ans%f",total);
	






}