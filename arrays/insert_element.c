//Implement a function,void insert(int arr[], int N, int pos, int element) which takes four arguments. arr[]- Array of N integers,N-Size of the array (N > 0),pos-Position to be inserted (0 <= pos <= N),element-Element to be inserted.


#include<stdio.h>

void insert(int arr[],int n,int pos,int element)
{
  int i;
  for(i=n;i>pos;i--)
  {
    arr[i]=arr[i-1];
  } 
  arr[pos]=element;
  
}

int main()
{
 int n;
 printf("enter the size of the array:");
 scanf("%d",&n);
 
 int i,arr[n],pos,element;
 printf("enter the elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("enter the position and element:");
 scanf("%d %d",&pos,&element);

 insert(arr,n,pos,element);
 
 for(i=0;i<=n;i++)
 {
  printf("%d",arr[i]);
 }
 return 0;
}
