#include <stdio.h>

int main()
{
    int i, n;
  
    
    printf("Print all even numbers : ");
    scanf("%d", &n);

    printf("All even  1 to %d are: \n", n);

  
    i=1;
    while(i<=n)
    {    
       if(i%2==0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}