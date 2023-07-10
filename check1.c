#include<string.h>
#include<ctype.h>
#include<stdio.h>
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
 
 int isfull()
 {
   if(s.top==MAX-1)
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
 
 void push(char c)
 {
   if(isfull())
   printf("stack is full dont push");
   else
   {
     s.top++;
     s.a[s.top]=c;
   }
 }
 
 int pop()
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
 
 
 int precedence(char ch)
 {
    if(ch=='(')
     return 0;
     if(ch=='+' || ch=='-')
     return 1;
     if(ch=='*' || ch=='/')
     return 2;
     if(ch=='$' || ch=='^')
     return 3;
     return 0;
  
 }
 
 int main()
 {
   char ex[100];
   char ch,*infix;
   printf("enter string::");
   scanf("%s",&ex);
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
        while((ch=pop())!='(')
        printf("%c",ch);
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
