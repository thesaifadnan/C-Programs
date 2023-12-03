// BINARY SEARCH C PROGRAM

#include<stdio.h>
int main()
{
int n,high=0,low=0,mid=0,K,flag=0;
//inputting the size of array
printf("Enter the Size of the Array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the Array: ");
//inputting the elements of array of size n
for(int i=0; i<n; i++)
 {
   scanf("%d",&arr[i]);
 }
printf("Enter the Element(K) you want to search: ");
scanf("%d",&K);
high=n-1;
while(low<=high)
{
    mid= (low +high)/2;
    if(arr[mid]==K)
    {
     flag++;
     break;
    }
    else if(arr[mid]<K)
    {
      low = mid+1;
    }
    else
    {
      high= mid-1;
    }
}
if(flag==1)
 printf("Element %d is Present in the array",K);
else
 printf("Element %d is NOT Present in the array",K);
return 0;
}