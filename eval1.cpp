#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define MAX 30
 struct stack
{
  int data[MAX];
  int top;
}s;

void init()
{
  s.top==-1;
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
     s.data[s.top]=c;
   }
}

char pop()
{
  char val;
 if(isempty())
   printf("stack is empty dont pop");
 else
  {
     val=s.data[s.top];
     s.top--;
      return val;
  }
}

int priority(char k)
{
  if(k=='(')
   return 0;
  else if(k=='+' || k=='-')
    return 1;
  else if(k=='*' || k=='/')
    return 2;
  else if(k=='$' || k=='^' || k=='@')
    return 3;
}

int main()
{
  char s1[20],ch,prefix[30];
   int i,p,q,r,s,result,v1,v2;
  printf("enter expression::");
   gets(s1);
   printf("enter value of pqrs");
   scanf("%d%d%d%d",&p,&q,&r,&s);
   init();
   
   for(i=0;s1[i]!='\0';i++)
   {
   	if(isalpha(s1[i]))
     {
        switch(s1[i])
		{
			
	     case 'P':push(p);break;
		 case 'Q':push(q);break;
		 case 'R':push(r);break;
		 case 'S':push(s);break;	
	    }   	
     }	  
	else
	 {
	 	v1=pop();
	 	v2=pop();
	 	switch(s1[i])
	 	{
	 	   case '+':result=v2+v1;
			         break;
		   case '-':result=v2-v1;
		             break;
	 	   case '*':result=v2*v1;
			         break;
	 	   case '/':result=v2/v1;
			         break;
	
		}
		push(result);
	 }
   
   }
   printf("\n result=%d",pop()); 
}













