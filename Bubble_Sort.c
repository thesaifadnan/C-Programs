// BUBBLE SORT C LANGUAGE PROGRAM
// SORTING AN ARRAY BY BUBBLE SORT

#include<stdio.h>
int main()
{
int n,temp;
//inputting the size of the array in n
printf("Enter the Size of the Array: ");
scanf("%d",&n);
//creating an array of size n
int arr[n];
printf("Enter the elements of the Array: ");
//inputting the values in the array
for(int i=0; i<n; i++)
 {
   scanf("%d",&arr[i]);
 }
for(int i=0; i<n-1; i++)
 {
   for(int j=0; j<n-i-1; j++)
   {
    //checking if the second value is lesser than the first one
    if(arr[j]>arr[j+1])
    {
        //swapping values
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] =temp;
    }
   }
 }
//printing the sorted array
 for(int i=0; i<n; i++)
  {
   printf("%d ",arr[i]);
  }
 return 0;
}
