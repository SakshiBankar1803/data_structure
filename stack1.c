
#include<stdio.h>

# define MAX 6
 struct stack
 {
   int a[MAX];
   int top;
}s;

void inital()
{
  s.top=-1;
} 

int isempty()
{
  if(s.top==-1)
  return 1;
  else
  return 0;
}

int isfull()
{
  if(s.top==MAX-1)
  return 1;
  else
  return 0;
}

void push(int n)
{
   if(isfull())
   printf("stack is full dont push🔝️");
   else
   {
     s.top++;
     s.a[s.top]=n;
     printf("\npush successfull🎉️");
   }
}

void pop()
{
  int value;
  if(isempty())
   printf("stack is empty dont pop⬇️");
   else
   {
     value=s.a[s.top];
     s.top--;
     printf("\npoped value=%d",value);
   }
}


void disp()
{  int i;
  for(i=s.top;i>=0;i--)
  {
    printf("%d\n",s.a[i]);
  }
}

int main()
{
   int ch,n;
   inital();
   do
   {
    printf("\n1-push\n2-pop\n3-display\nchoose your choice::");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 :printf("enter number::");
              scanf("%d",&n);
              push(n);
              break;
      case 2 : pop();
               break;
      case 3 : disp();
               break;
      default : printf("invalid choice✖️");
    }
    
    
   }while(ch<4);
   
   
   
}


















