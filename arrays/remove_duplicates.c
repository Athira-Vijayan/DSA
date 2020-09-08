#include<stdio.h>
int rmduplicates(int arr[], int n) 
{ 
 if(n==0||n==1)
  return n;
 int len=0,i;
 for(i=0;i<n-1;i++)
  if(arr[i]!=arr[i+1])
   arr[len++]=arr[i];
 arr[len++]=arr[n-1]; 
 return len;
} 

int main() 
{ 
 int n;
 //printf("enter the size:");
 scanf("%d",&n); 
 int i, arr[n]; 
 //printf("enter the elements:");
 for(i = 0; i < n; i++) 
  scanf("%d",&arr[i]); 
 printf("%d\n",rmduplicates(arr,n)); 

 
 return 0; 
}
