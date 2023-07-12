#include<stdio.h>
#include<string.h>
#include<ctype.h>
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
 
 void rev(char *ss)
 {
    int length=strlen(ss);
    int i,j;
    char t;
    for(i=0,j=length-1;i<j;i++,j--);
    {
     t=ss[i];
     ss[i]=ss[j];
     ss[j]=t;
    }
     
 }
 
 int main()
 {
   char infix[40],prefix[40],ch,infix1[40];
   int i,j=0;
   printf("enter string::");
   gets(infix);
   
   rev(infix);
   
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
      prefix[j++]=infix[i];
     
     else if(infix[i]=='(' ) 
      push(infix[i]);
      
     else if(infix[i]==')')
     {
       while((ch==pop())!='(')
       {
         prefix[j++]=ch;
       }
     }
     else
     {
       while(precedence(s.a[s.top])>=precedence(infix[i]))
       {
         prefix[j++]=pop();
       }
       push(infix[i]);
     }
   
   }
   
   while(!isempty())
   {
     prefix[j++]=pop();
   }
   prefix[j]='\0';
    
   rev(prefix);
   
   printf("\n prefix string=%s",prefix);
  
 }







































