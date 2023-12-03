// C program to search for an element in an array using LINEAR SEARCH

#include<stdio.h>
int main()
{
int n,flag=0,K;
printf("Enter the Size of the Array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the Array: ");
for(int i=0; i<n; i++)
 {
   scanf("%d",&arr[i]);
 }
printf("Enter the Element(K) you want to search: ");
scanf("%d",&K);
for(int i=0; i<n; i++)
 {
    if(arr[i]==K)
    {
     flag++;
     break;
    }
 }
if(flag==1)
 printf("Element %d is Present in the array",K);
else
 printf("Element %d is NOT Present in the array",K);
return 0;
}