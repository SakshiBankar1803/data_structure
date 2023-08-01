//accept n nos using sentinal search using function....

#include<stdio.h>


void accept(int n)
{
  int a[20],i;
  printf("enter n nos::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}


void display(int n)
{
  int a[20],i;
  printf("array element are::");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}


void check(int n)
{
  int a[20],num,i=0;
  printf("enter number to search::");
  scanf("%d",&num);
  a[n]=num;
  
  while(a[i]!=num)
  {
   i++;
  }
  if(i==n)
  printf("number not found:");
  else
  printf("number found at position=%d",i);
}
int main()
{  int n;
  printf("enter limit::");
  scanf("%d",&n);
  accept(n);
  display(n);
  check(n);
}
