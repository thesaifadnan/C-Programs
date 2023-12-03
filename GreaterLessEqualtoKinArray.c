// C program to count numbers greater than, less than or equal to a number ‘K’ in an
// array.

#include<stdio.h>
int main()
{
int n,great=0,less=0,equal=0,K;
printf("Enter the Size of the Array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the Array: ");
for(int i=0; i<n; i++)
 {
   scanf("%d",&arr[i]);
 }
printf("Enter the Element(K) of the Array: ");
scanf("%d",&K);
for(int i=0; i<n; i++)
 {
    if(arr[i]>K)
    {
     great++;
    }
    else if(arr[i]<K)
    {
     less++;
    }
    else
    {
    equal++;
    }
 }
 printf("Numbers greater than %d : %d \n Numbers lesser than %d : %d \n Numbers equal to %d : %d \n",K,great,K,less,K,equal);
 return 0;
}