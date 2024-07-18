#include<stdio.h>
#include<conio.h>
main(){
	int i,j;
	for(i=1;i<=4;i++){
		 for(j=1;j<=4;j++){
		 	if(i==1 || i==4 || j==1 || j==4){
		 		printf("* ");
			 }
			 else{
			 	printf("  ");
			 }
		 }
		 printf("\n");
	}
	for(i=1;i<=3;i++){
		for(j=1;j<=1;j++){
			printf("*");
		}
		printf("\n");
	}
}


