//Printing stars in v shape C Program

// *********
//  *******
//   *****
//    ***
//     *

#include<stdio.h>
int main()
{
int n;
printf("enter the no.");
scanf("%d",&n);
for(int i=n; i>0; i--)
{
   for(int j=0; j<(n-i); j++)
   {
     printf(" ");
   } 
   for(int k=1; k<(2*i); k++)
   {
    printf("*");
   } 
   printf("\n");
}
 return 0;
}