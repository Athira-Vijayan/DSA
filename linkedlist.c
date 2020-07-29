#include<stdio.h>
#include<stdlib.h>
//linked list
int main()
{
  struct node
  {
    int data;
    struct node *next;
  };
  // declaring nodes
  struct node *a,*b,*c;
  // allocating memory dynamically
  a = malloc(sizeof(struct node));
  b = malloc(sizeof(struct node));
  c = malloc(sizeof(struct node));
  // assign values to each node
  a->data = 100;
  b->data = 200;
  c->data =300;
  // linking each nodes
  b->next = c;
  c->next = a;
  a->next = NULL;
  //printing each node data, for that we have to traverse the linked list till end, that's why temp is introduced.
  struct node *temp = b;
  while(temp!= NULL)
  {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  return 0;
}
