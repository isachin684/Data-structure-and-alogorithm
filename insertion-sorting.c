#include<stdio.h>
#include<math.h>
void insertionsort(int arr[],int n)
{
   int i,j,temp;
   for(i=1;i<n;i++)
   {
    temp=arr[i];
    j=i-1;
    while(j>=0 && temp<=arr[j])
    {
     arr[j+1]=arr[j];
     j=j-1; }
     arr[j+1]=temp;
  }}
     void printarray(int arr[],int n)
     { int i;
       for(i=0;i<n;i++)
       printf("%d",arr[i]);
       printf("\n"); 
     }
   int main()
   { int arr[]={5,3,9,1,4};
     int n=sizeof(arr)/sizeof(arr[0]);
     insertionsort(arr,n);
     printarray(arr,n);
     return 0;
     }
     
