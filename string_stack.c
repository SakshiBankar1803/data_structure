#include<stdio.h>
#include<string.h>
# define MAX 4
struct stack
{
  char a[MAX];
  int top;
}s1;

void initial()
{
  s1.top=-1;
}

char isempty()
{
  if(strcmp(s1.top,-1)==0)
  return 1;
  else
  return 0;
}

char isfull()
{
  if(strcmp(s1.top,MAX-1)==0)
  return 1;
  else
  return 0;
}

void push(char nm)
{
  if(isfull())
  printf("stack is full dont push");
  else
  {
    s1.top++;
    strcpy(s1.a[s1.top],nm);
    printf("push succeed");
  }
}

void pop()
{
  char nm[20];
  if(isempty())
  printf("stack is empty dont pop:");
  else
  {
    strcpy(nm,s1.a[s1.top]);
    s1.top--;
    printf("\n poped value=%s",nm);
  }
}


void disp()
{
  int i;
  for(i=s1.top;i>=0;i--)
  printf("%s\n",s1.a[i]);
}

int main()
{
  int ch;
  char nm[20];
  initial();
  do
  {
    printf("\n1-push\n2-pop\n3=display\nenter choice::");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : printf("enter name");
              scanf("%s",&nm);
              push(nm);
              break;
      case 2 : pop();break;
      
      case 3 : disp();
                break;
      default : printf("invalid choice");
    }
  }while(ch<4);
}




























