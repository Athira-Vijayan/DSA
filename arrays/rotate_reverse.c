#include<stdio.h>
void reverse(int arr[], int start, int end)
{   
    while(start < end)
    {   
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

void arrayRotate(int arr[], int n, int k)
{   
   // reverse(arr, 0, n-k-1);
   // reverse(arr, n-k, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);
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

 arrayRotate(arr,n,k);
 printf("array after rotation:\n");
 for(i=0;i<n;i++)
 {
  printf("%d",arr[i]);
 }

 
 return 0; 
}
