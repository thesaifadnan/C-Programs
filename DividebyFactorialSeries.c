//Divide by Factorial Series

#include<stdio.h>
int main()
{
 float n,sum=0.0,fact=1.0;
 printf("Enter the Number : ");
 scanf("%f",&n);
 for(int i=1;i<n;i++)
 {
    fact=fact*i;
    if(i%2==0)
    sum=sum-(i/fact);
    else
    sum=sum+(i/fact);
 }
 printf("Sum of the series is %0.2f",sum);

 return 0;
}