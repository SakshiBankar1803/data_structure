//infix to postfix...

#include<stdio.h>
#include<string.h>
#define max 50
  struct stack
{
  char a[max];
  int top;
}s;

void init()
{
  s.top=-1;
}

int isfull()
{
  if(s.top==max-1)
  return 1;
  else
  return 0;
}

int isempty()
{
  if(s.top==-1)
  return 1;
  else
  return 0;
}

void push(char ch)
{
  if(isfull())
  printf("stack is full dont push");
  else
  {
    s.top++;
    s.a[s.top]=ch;
  }
}

char pop()
{
  char c;
  if(isempty())
  return -1;
  else
  {
    c=s.a[s.top];
    s.top--;
    return c;
  }
}


 int precedence(char c)
 {
   if(c=='(')
   return 0;
   if(c=='+' || c=='-')
   return 1;
   if(c=='*' || c=='/')
   return 2;
   if(c=='$' || c=='^')
   return 3;
   return 0;
 }
 
 int main()
 {
   char infix[40],postfix[40],ch;
   int i,j=0;
   printf("enter string::");
   scanf("%s",&infix);
 
   
   for(i=0;infix[i]!='\0';i++)
   {
     if(infix[i]=='(')
      infix[i]=')';
      else if(infix[i]==')')
      infix[i]='(';
   }
   
   init();
   
   for(i=0;infix[i]!='\0';i++)
   {
     if(isalpha(infix[i]))
      postfix[j++]=infix[i];
     
     else if(infix[i]=='(' ) 
      push(infix[i]);
      
     else if(infix[i]==')')
     {
       while((ch==pop())!='(')
       {
         postfix[j++]=ch;
       }
     }
     else
     {
       while(precedence(s.a[s.top])>=precedence(infix[i]))
       {
         postfix[j++]=pop();
       }
       push(infix[i]);
     }
   
   }
   
   while(!isempty())
   {
     postfix[j++]=pop();
   }
   postfix[j]='\0';
 
   printf("\n postfix string=%s",postfix);
 }







































