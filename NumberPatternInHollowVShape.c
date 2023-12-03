// NUMBERS IN V SHAPE PATTERN C PROGRAM

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include<stdio.h>
int main()
{
int n;
printf("enter the no.");
scanf("%d",&n);
for(int i=1; i<=n; i++)
{
   for(int j=1; j<=i; j++)
   {
     printf("%d",j);
   } 
   for(int k=1; k<=(2*n-2*i); k++)
   {
    printf(" ");
   } 
   for(int j=i; j>=1; j--)
   {
     printf("%d",j);
   } 
   printf("\n");
}

 return 0;
}