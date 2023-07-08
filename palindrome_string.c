#include<stdio.h>
#include<string.h>
#define MAX 40
struct stack
{
  char a[MAX];
  int top;
}s1;

void intial()
{
  s1.top=-1;
}

int isfull()
{
  if(s1.top==MAX-1)
  return 1;
  else
  return 0;
}

int isempty()
{
  if(s1.top=-1)
  return 1;
  else
  return 0;
}

void push(char c)
{
   if(isfull())
   printf("stack is full dont push");
   else
   {
     s1.top++;
     s1.a[s1.top]=c;
   }
}

char pop()
{
  char ch;
  if(isempty())
  printf("stack is empty dont pop");
  else
  {
    ch=s1.a[s1.top];
    s1.top--;
  }
}


int main()
{
   char s[40];
   int i;
   printf("enter string:");
   gets(s);
   intial();
   for(i=0;s[i]!='\0';i++)
   {
      push(s[i]);
   }
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]!=pop())
    {
       break;
    }
  }
  
  if(isempty())
  printf("\nstring is palindrome");
  else
  printf("\nstring is not palindrome");
}


































