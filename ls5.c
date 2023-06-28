#include<stdio.h>
void main()
{
  int a[100],i,n,num,cnt=0;
  printf("enter limit:");
  scanf("%d",&n);
  printf("enter n nos:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  printf("enter num to search:");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
     if(a[i]==num)
     cnt++;
  }
  printf("number count=%d",cnt);
}
