//Implement the function, int search(int arr[], int N, int key)which takes 3 arguments. arr[] - Array of N integers,N - Size of the array (N > 0), key - Search key.

#include<stdio.h>
int search(int arr[],int N,int key)
{
 int i;
 for(i=0;i<N;i++)
 if(arr[i]==key)
  {
   return i;
  }
  return -1;
 
}
int main()
{

 int N;
 printf("enter the size:");
 scanf("%d",&N);
 int arr[N],i,key;
 printf("enter the elements:");
 for(i=0;i<N;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("enter the key:");
 scanf("%d",&key);
 
 printf("%d",search(arr,N,key));
 return 0;
}
