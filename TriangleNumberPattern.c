//Printing the numbers in lower right matrix triangle shape C Programs

//      1
//     22
//    333
//   4444
//  55555

#include<stdio.h>
int main()
{
int n;
printf("enter the no.");
scanf("%d",&n);
for(int i=1; i<=n; i++)
{
   for(int j=0; j<=n-i; j++)
   {
     printf(" ");
   } 
   for(int k=1; k<=i; k++)
   {
    
     printf("%d",i);
   } 
   printf("\n");
}
 return 0;
}