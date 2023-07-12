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
 
 void push(int c)
 {
   if(isfull())
   printf("stack is full");
   else
   {
     s.top++;
     s.a[s.top]=c;
   }
 }
 
 
 int pop()
 {
   int v;
   if(isempty())
   printf("stack is empty");
   else
   {
     v=s.a[s.top];
     s.top--;
     return v;
   }
 }
 
 int main()
 {
   char s1[50];
   int i,p,q,r,s,val1,val2,r;
   printf("enter postfix string::");
   gets(s1);
   printf("enter values of P Q R S::");
   scanf("%d%d%d%d",&p,&q,&r,&s);
   initial();
   
   for(i=0;s1[i]!='\0';i++)
   {
      if(isalpha(s1[i]))
      {
        switch(s1[i])
        {
          case 'P' : push(p);break;
          
          case 'Q' : push(q);break;
          
          case 'R' : push(r);break;
          
          case 'S' : push(s);break;
        }
      }
      else
      {
        val1=pop();
        val2=pop();
        switch(s1[i])
        {
          case '+' : r=val2+val1; break;
          
          case '-' : r=val2-val1;break;
          
          case '*' : r=val2*val1; break;
          
          case '/' : r=val2/val1; break;
        }
        push(r);
      }
   }
   printf("\n result=%d",pop());
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
