//Q1 Implement a list library (singlylist.h) for a singly linked list. Create a linked list, 
//reverse it and display reversed linked list. 

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define memory (node*)malloc(sizeof(node))
 typedef struct node
{
  int data;
  struct node *next;
}node;

node *create(node *list)
{
  node *newnode,*temp;
  int n,i;
 printf("enter limit::");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   newnode=memory;
  printf("enter value::");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  if(list==NULL)
  list=temp=newnode;
  else
  {
    temp->next=newnode;
    temp=newnode;
  }
 }
 return list;
}

 void disp(node *list)
{
  node *temp;
 printf("\n linked list=\n");
 for(temp=list;temp!=NULL;temp=temp->next)
  printf("%d\t",temp->data);
}


node *reverse(node *list)
{ node *temp,*ne,*prev;
   temp=list;
   prev=NULL;
  while(temp!=NULL)
  {
    ne=temp->next;
    temp->next=prev;
    prev=temp;
    temp=ne;
  }
  list=prev;
    disp(list);
}
 
int main()
{
  node *list=NULL;
  list=create(list); 
  list=reverse(list);
}
