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
     printf("enter values:");
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
 
 struct node *insertbeg(struct node *head,int n)
 {
   struct node *newnode;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=n;
   newnode->next=head;
   head=newnode;
   return head;
 }
 
 
 struct node * insertend(struct node *head,int n)
 {
   struct node *newnode,*temp;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=n;
   newnode->next=NULL;
   for(temp=head;temp->next!=NULL;temp=temp->next);
   temp->next=newnode;
   return head;
 
 }
 
 struct node *insertmid(struct node *head,int n,int pos)
 {
   struct node *newnode,*temp;
   int i;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=n;
   for(i=1,temp=head;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
   newnode->next=temp->next;
   temp->next=newnode;
   return head;
 }
 
 struct node *delbeg(struct node *head)
 {
   struct node *temp ;
   temp=head;
   head=head->next;
   free(temp);
   return head;
 }
 
 struct node *delend(struct node *head)
 {
   struct node *temp,*temp1;
   for(temp=head;temp->next->next!=NULL;temp=temp->next);
   temp1=temp->next;
   temp->next=NULL;
   free(temp1);
   return head;
 }
 
 struct node *delmid(struct node *head,int pos)
 {
   struct node *temp,*temp1;
   int i;
   for(i=1,temp=head;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
   temp1=temp->next;
   temp->next=temp1->next;
   free(temp1);
   return head;
 }
 
 int main()
 {
   int ch,n,pos;
   struct node *head=NULL;
   
   do
   {
    printf("\nmenu=\n1-create\n2-display\n3-insert beg\n4-insert end\n5insert mid\n6-delbeg\n7-delend\n8-delmid\nenter choice::");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : head=create(head);
               break;
      case 2 : display(head);
                break;
      case 3 : printf("enter number:");
               scanf("%d",&n);
               head=insertbeg(head,n);
               break;
      case 4 : printf("enter number:");
               scanf("%d",&n);
               head=insertend(head,n);
               break;
     case 5 : printf("enter number:");
              scanf("%d",&n);
              printf("enter pos:");
              scanf("%d",&pos);
              head=insertmid(head,n,pos);
              break;
    case 6 : head=delbeg(head);
               break;
    case 7 : head=delend(head);
             break;
     case 8 : printf("enter pos:");
              scanf("%d",&pos);
              head=delmid(head,pos);
              break;
      default : printf("invalid choice ");
      
      
    }
   
   }while(ch< 9);
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
