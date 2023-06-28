#include<stdio.h>
void main()
{
  int n,i,a[50],num;
  printf("enter limit:");
  scanf("%d",&n);
  printf("enter n nos::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter number to search:");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
    if(a[i]==num)
    break;
  }
  if(i==n)
  printf("record not found");
  else
  printf("record is found");
}
