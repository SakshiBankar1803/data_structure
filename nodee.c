//menu driven linked list programme

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
  printf("enter limit::");
  scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     newnode=(struct node *)malloc(sizeof(struct node));
     printf("enter values::");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     
     if(head==NULL)
     {
       head=newnode;
       temp=newnode;
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
  printf("%d\t",temp->data);
}

 struct node * insertbeg(struct node *head,int num)
 {
   struct node *newnode;
   
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=num;
   
   newnode->next=head;
   head=newnode;
   return head;
 }
 
 struct node * insertend(struct node *head,int num)
 {
   struct node *newnode,*temp;
   
   newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    
    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=newnode; 
   return head;
 }

int main()
{
  struct node *head=NULL;
  int ch,num;
  
  do
  {
     printf("menu=\n1=create\n2=display\n3insertbeg\n4=insert end\n");
     printf("enter choice::");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1 : head=create(head);
                  break;
                  
        case 2 : display(head);
                  break;
                  
         case 3 : printf("enter number:");
                  scanf("%d",&num);
                  head=insertbeg(head,num);
                  break;
                  
        case 4 : printf("enter number:");
                scanf("%d",&num);
                head=insertend(head,num);
                break;
                
       default : printf("invalide choive::");                   
     }
  }while(ch<5);
}
