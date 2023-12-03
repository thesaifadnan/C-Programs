//C program to find minimum number in the array of N elements

#include<stdio.h>
int main()
{
int n,min;
printf("Enter the Size of the Array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the Array: ");
for(int i=0; i<n; i++)
 {
   scanf("%d",&arr[i]);
 }
min=arr[0];
for(int i=1; i<n; i++)
 {
    if(arr[i]<min)
    {
     min=arr[i];
    }
 }
printf("Element %d is the Minimum in the array",min);
return 0;
}