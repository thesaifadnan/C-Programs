//Printing all perfect numbers in range between m and n ( C Program )

#include<stdio.h>
int main()
{
 int R1,R2,sum=0,i,j;
 printf("Enter the Starting Number of the Range : ");
 scanf("%d",&R1);
 printf("Enter the Ending Number of the Range : ");
 scanf("%d",&R2);
 for(i=R1; i<=R2; i++)
 {
   for(j=1; j<i; j++)
     {
      if(i%j==0)
      {
       sum=sum+j;
      }
     }
    if(i==sum)
    printf(" %d is a Perfect Number\n",i);
    sum=0;
  }

 return 0;
}

    