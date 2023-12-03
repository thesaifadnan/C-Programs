//PRINTING THE Alphabet Skipping Trianlge Pattern C Program

// A
// C D
// F G H
// J K L M
// O P Q R S


#include<stdio.h>
int main()
{
int n,x=65;
printf("enter the no.");
scanf("%d",&n);
for(int i=1; i<=n; i++)
{
   for(int k=1; k<=i; k++)
   {
    
     printf("%c ",x);
     x++;
   } 
   printf("\n");
   x++;
}

 return 0;
}