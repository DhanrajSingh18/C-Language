#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	char grade;
	
	printf("Enter your marks:");
	scanf("%d",&marks);
	(marks>=90 && marks<=100)?
    printf("Your Grade is A\n",grade='A')
	:	
	(marks>=80 && marks<90)?		
	printf("Your Grade is B\n",grade='B')	
	:	
	(marks>=70 && marks<80)?			
	printf("Your Grade is C\n",grade='C')			
    :			
	(marks>=60 && marks<70)?				
	printf("Your Grade is D\n",grade='D')			
	:				
	(marks>=33 && marks<60)?					
	printf("Your Grade is E\n",grade='E')			
	:					
	(marks>=0 && marks<33)?						
	printf("Your Grade is F\n",grade='F')					
	:					
	printf("Enter valid numer!");
	switch (grade) 
	  {
        case 'A':
        printf("Excellent work!\n");
        break;
        case 'B':
        printf("Well done\n");
        break;
        case 'C':
        printf("Good job\n");
        break;
        case 'D':
        printf("You passed, but you could do better\n");
        break;
        case 'F':
        printf("Sorry, tum fail ho\n");
        break;
        default:
        printf("Invalid grade\n");
        break;
 	if(grade=='A' || grade=='B'|| grade=='C' ||grade=='D'  )
		{
			printf("You are eligible for the next level!");
		}
		else
		{
			printf("Please Try Again next time !");
		}
}
								
}