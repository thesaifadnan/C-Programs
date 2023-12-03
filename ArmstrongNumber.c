// ARMSTRONG NUMBER C PROGRAM

#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    //Inputting the number
    printf("enter the no. ");
    scanf("%d",&n);
    //storing the no. of digits in the number n
    int size=floor(log10(n))+1;
    int temp=n;
    while (n>0)
    {
        //getting the last digit to the power of size of number n and adding to sum
        sum=sum+pow(n%10,size);
        n=n/10;
    }
    if(sum==temp)
    printf("Armstrong no.");
    else
    printf("not armstrong no.");
    return 0;
}