//swapping of two numbers using pointer

#include<stdio.h>
int main()
{
  int a,b,t,*x,*y;
  printf("enter two numbers::");
  scanf("%d%d",&a,&b);
  x=&a;
  y=&b;
  
  t=*x;
  *x=*y;
  *y=t;
 
  printf("\nswapping number of x=%d",*x);
  printf("\nswapping number of y=%d",*y);
}
