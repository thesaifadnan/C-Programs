// Printing the sqaure of n numbers 

#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter the Value of N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter the Number: ");
        scanf("%d",&temp);
        if(temp>0)
          printf("Square of %d is %d\n",temp,temp*temp);
        else
          break;
    }

    return 0;
}