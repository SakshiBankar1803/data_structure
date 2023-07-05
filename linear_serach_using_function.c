//accept number and search using linear search using function....

#include<stdio.h>
int main()
{
  int a[30],i,n;
  void linear(int a[100],int n);
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n number::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 
  
  linear(a,n);
}

void linear(int a[120],int n)
{
  int i,flag=0,num;
  printf("enter number to search::");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
    if(a[i]==num)
    {
      flag=1;break;
    }
  }
  if(flag==1)
  printf("number is found");
  else
  printf("number is not found");
}
