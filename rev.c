Que:reverse stack string.

#include<stdio.h>
#include<string.h>
#define MAC 50
 struct stack
 {
   char a[MAC];
   int top;
 }s;
 
 void initial()
 {
   s.top=-1;
 }
 
 int isfull()
 {
   if(s.top==MAC-1)
   return 1;
   else
   return 0;
 }
 
 void push(char c)
 {
   if(isfull())
   printf("stack is full");
   else
   {
     s.top++;
     s.a[s.top]=c;
   }
 }
 
 void display()
 {
   int i;
   for(i=s.top;i>=0;i--)
   printf("%c",s.a[i]);
 }
 
 int main()
 {
   char s1[40];
   int i;
   printf("enter string::");
   gets(s1);
   initial();
   
   for(i=0;s1[i]!='\0';i++)
   {
     if(s1[i]==' ')
     {
        display();
        initial();
     }
     else
     {
       push(s1[i]);
     }
   
   }
   display();
 }
