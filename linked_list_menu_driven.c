//linked list menu driven
//1-create 2-display 
//3-if position =1 then insert at beginning otherwise insert middle
//4 delete n perticular code
//5-search a given numbrer in linkedlist and return node if found else return NULL.


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 struct node 
 {
   int data;
   struct node *next;
 };
 
 struct node * create(struct node *head)
 {
   struct node *newnode,*temp;
   int i,n;
   printf("enter limit:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     newnode=(struct node *)malloc(sizeof(struct node));
     printf("enter values::");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(head==NULL)
     {
       head=temp=newnode;
     }
     else
     {
      temp->next=newnode;
      temp=newnode;
     }
   }
   return head;
 }
 
 void display(struct node *head)
 {
   struct node *temp;
   for(temp=head;temp!=NULL;temp=temp->next)
   {
     printf("%d\t",temp->data);
   }
 }
 
 struct node * insert(struct node *head,int n,int p)
 {
   struct node *newnode,*temp;
   int i;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=n;
   
   if(p==1)
   {
      newnode->next=head;
      head=newnode;
   }
   else
   {
     for(i=1,temp=head;i<(p-1)&&temp->next!=NULL;i++,temp=temp->next);
     newnode->next=temp->next;
     temp->next=newnode;
   }
   return head;
 }
 
 
 
 struct node *del(struct node *head,int p)
 {
    struct node *temp,*temp1;
    int i;
    
    if(p==1)
    {
      temp=head;
      head=head->next;
      free(temp);
    }
    else
    {
      for(i=1,temp=head;i<(p-1)&&temp->next!=NULL;temp=temp->next,i++);
      temp1=temp->next;
      temp->next=temp1->next;
      free(temp1);
    }
    return head;
 }
 
 struct node * search(struct node *head,int n)
 {
   struct node *temp;
   for(temp=head;temp!=NULL;temp=temp->next)
   {
      if(temp->data==n)
      return temp;
   }
   return NULL;
 }
 
 int main()
 {
   int ch,n,pos;
   struct node *head=NULL;
   do
   {
      printf("\nmenu\n1=create\n2=display\n3=insert\n4=delete\n5=search\n");
      printf("enter choice::");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1 : head=create(head);
                   break;
        case 2 : display(head);
                   break;
        case 3 : printf("enter number::");
                 scanf("%d",&n);
                 printf("enter position::");
                 scanf("%d",&pos);
                 head=insert(head,n,pos);
                 break;
        case 4 : printf("enter position::");
                 scanf("%d",&pos);
                 head=del(head,pos);
                 break;
       case 5 : printf("enter number::");
                 scanf("%d",&n);
                 if(search(head,n)!=NULL)
                 printf("number is found");
                 else
                 printf("number not found");
                 break;
      default : printf("invalide choice");
      
                   
                  
      }
   }while(ch<6);
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
