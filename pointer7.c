//accept number and check prime or not

#include<stdio.h>
void main()
{
  int n,*pn,s=0,i;
  printf("enter number::");
  scanf("%d",&n);
  pn=&n;
  for(i=2;i<*pn;i++)
  {
     if(*pn%i==0)
     s=s+i;
  }
  if(s==0)
  printf("number is prime");
  else
  printf("number is not prime:");
}
