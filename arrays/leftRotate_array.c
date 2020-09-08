#include<stdio.h>
//to rotate once
int leftRotate(int arr[],int n)
{
 int temp =arr[0];
 int i;
 for(i=0;i<n-1;i++)
 {
  arr[i]=arr[i+1];
 }
 arr[i]=temp;
 
}
// to rotate k times

int arrayRotate(int arr[],int n,int k)
{
 int i;
 for(i=0;i<k;i++)
 {
  leftRotate(arr,n);
 }

 
}

int main() 
{ 
 int n;
 printf("enter the size:");
 scanf("%d",&n); 
 int i, arr[n]; 
 printf("enter the elements:");
 for(i = 0; i < n; i++) 
  scanf("%d",&arr[i]); 
 int k;
 printf("enter the number to times to be rotated:");
 scanf("%d",&k);
// printf("%d\n",arrayRotate(arr,n,k)); 
 arrayRotate(arr,n,k);
 printf("array after rotation:\n");
 for(i=0;i<n;i++)
 {
  printf("%d",arr[i]);
 }

 
 return 0; 
}
