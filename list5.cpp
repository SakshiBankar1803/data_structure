#include<stdio.h>
#include<stdlib.h>

 struct node
 {
   int data;
   struct node *next;
 };
struct node* create(struct node *list)
{    int i,n;
	struct node *newnode,*temp;
	printf("enter limit::");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	
   {
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter value::");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(list==NULL)
	{
	  list=newnode;
	  temp=newnode;
	}
	else
	{
	  temp->next=newnode;
	  temp=newnode;	
	}
  }
	return list;
}

void display(struct node *list)
{
   struct node *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   printf("%d\t",temp->data);
}

struct node *insertbeg(struct node *list,int n)
{
	struct node *newnode;
	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	newnode->next=list;
	list=newnode;
	return list;
}

int main()
{    int n,ch;


	 struct node *list=NULL;
	 do
	 {
	 printf("1=create\n2=display\n3=insert begin\nenter your choice::");
	 scanf("%d",&ch);
	 switch(ch)
	 {

	  case 1 : list=create(list); break;
	  case 2 : display(list); break;
	  case 3 :printf("enter number::");
	          scanf("%d",&n);
			  list=insertbeg(list,n);
			  break;
     }
   }while(ch<4);
}
