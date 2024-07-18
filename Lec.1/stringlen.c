//String : collection of character 
//- include #include<string.h>

//String operation 
//1) strlen() = to finding length of the string
//2) strcat() = concatination of the two string 
//3) strrev() = reverse the string 
//4) strupr() = to convert lower case to upper case
//5) strlwr() = to convert upper case to lower case
//6) strcmp() = comparison of two string
//7) strcpy() = copy string 1 to string 2 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[] = "hello";
	char str2[] = "";
	
	
//	printf("%s\n",name);
//	printf("%d\n", strlen(name));
//	printf("%s\n",strrev(name));
//	printf("%s\n",strupr(name));
	
//	printf("%s",strcat(name,surName));
//	printf("%d",strcmp(str1,str2));
	
	printf("%s",strcpy(str2,str1));
	
	printf("%s",str2);
	
	
	getch();
}

