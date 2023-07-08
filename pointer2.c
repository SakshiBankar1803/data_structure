//maximum of two numbers using pointer...

#include<stdio.h>
int main()
{
  int a,b,*x,*y;
  printf("enter two numbers::");
  scanf("%d%d",&a,&b);
  x=&a;
  y=&b;
  if(*x>*y)
  printf("maximum number=%d",*x);
  else
  printf("maximum number+%d",*y);
}
