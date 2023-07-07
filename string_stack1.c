#include<stdio.h>
#include<string.h>
#define MAX 20
struct stack
{
  char m[MAX];
  int top;
}s1;

void initial()
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

int push(char c)
{
  if(isfull())
  printf("stack is full dont push...");
  else
  {
     s1.top++;
     s1.m[s1.top]=c;
  }
}

void display()
{
  int i;
  for(i=s1.top;i>=0;i--)
  printf("%c",s1.m[i]);
}

int main()
{
  char s[50];
  int i;
  printf("enter string::");
  scanf("%s",&s);
  initial();
  for(i=0;s[i]!='\0';i++)
  {
    push(s[i]);
  }
  display();
}
