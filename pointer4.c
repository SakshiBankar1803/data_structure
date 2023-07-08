//accept number and display cube of it

#include<stdio.h>
int main()
{
  int n,*x;
  printf("enter number::");
  scanf("%d",&n);
  x=&n;
  printf("cube of number=%d",*x* *x * *x);
 
}
