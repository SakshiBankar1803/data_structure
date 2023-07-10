#include<stdio.h>

#include<string.h>
#define MAX 100
 struct stack
 {
   char a[MAX];
   int top;
 }s;
 
 void initial()
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
 
 void push(char ch)
 {
   if(isfull())
   printf("stack is full dont push....");
   else
   {
      s.top++;
      s.a[s.top]=ch;
   }
 }
 
 int pop()
 {
   char ch;
   if(isempty())
    return -1;
   else
   {
     ch=s.a[s.top];
     s.top--;
     return ch;
   }
 }
 
 
 int precedence(char n)
 {
    if(n=='(')
    return 0;
    if(n=='+' || n=='-')
    return 1;
    if(n=='*' || n=='/')
    return 2;
    return 0;
 
 }
 
 int main()
 {
    char ex[100];
    char *infix,x;
    printf("enter string::");
    scanf("%s",&ex);
    printf("\n");
    infix=ex;
    initial();
    while(*infix!='\0')
    {
      if(isalpha(*infix))
      printf("%c",*infix);
      else if(*infix=='(')
      push(*infix);
      else if(*infix==')')
      {
         while((x=pop())!='(')
         printf("%C",x);
      }
     else
     
     {
       while(precedence(s.a[s.top])>=precedence(*infix))
      printf("%c",pop());
      push(*infix);
     }
     infix++;
    }
    while(!isempty())
    printf("%c",pop());
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
