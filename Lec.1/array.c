#include<stdio.h> // input output
#include<conio.h>

void main()
{
	// datatypes : type of data
	// int,float,char,double :  
	// %d %f %c %lf
	
	// variable : used to store value, change the value.
	
	// keyword : pre reserved words in programming language.
	// we cant create variable name using keyword.
	// int,float,void,if,for,....
	
	// printf(); 
	// user input : scanf()
	// write a program to take user input for age
	
	// radius ->
	// pi=3.14 r 2
	
	float r,area;
	const float pi = 3.14;	
	
	printf("Enter radius of circle : ");
	scanf("%f",&r);
	
	area = pi * r *r;
	
	printf("Area of circle : %.2f",area);
	

	
	
	
}
