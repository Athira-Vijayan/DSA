// remove the element in the middle index.
#include<stdio.h>

void remove_mid(int arr[],int N)
{
 int i,index=(N-1)/2;
 for(i=index;i<N-1;i++)
  arr[i]=arr[i+1];
 N--;
}

int main()
{
 int N;
 printf("enter the size:");
 scanf("%d",&N);
 
 int i,arr[N];
 printf("enter elements:");
 for(i=0;i<N;i++)
 {
  scanf("%d",&arr[i]);
 }
 remove_mid(arr,N);
 for(i=0;i<N-1;i++)
  printf("%d",arr[i]);
 return 0;
}
 
 
