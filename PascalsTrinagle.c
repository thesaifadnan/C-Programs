//PRINTING PASCAL'S TRIANGLE PATTERN C PROGRAM

//      1     
//     1 1    
//    1 2 1   
//   1 3 3 1  
//  1 4 6 4 1 

#include<stdio.h>
int main()
{
int n,c=0;
printf("enter the no.");
scanf("%d",&n);
for(int i=0; i<n; i++)
{
   for(int j=n; j>i; j--)
   {
     printf(" ");
   } 
   for(int k=0; k<=i; k++)
   {
     if(k==0)
     {
        c=1;
     }
     else{
        c=c*(i-k+1)/k;
     }
     printf("%d ",c);
   } 
   printf("\n");
}

 return 0;
}