//accept number and check aemstrong or not

#include<stdio.h>
int main()
{
  int n,*x,d,s=0,n1;
  printf("enter number::");
  scanf("%d",&n);
  x=&n;
  n1=*x;
  while(*x>0)
  {
     d=*x%10;
     *x=*x/10;
     s=s+d*d*d;
  }
  if(s==n1)
  printf("number is armstrong");
  else
  printf("number is not armstrong"); 
}
