// selection_sort using function...

#include<stdio.h>
int main()
{
  int a[30],i,n;
  void insertion(int a[30],int n);
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n numbers::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  insertion(a,n);
}

void insertion(int a[30],int n)
{
  int i,j,t,num;
  for(i=1;i<n;i++)
  {
    num=a[i];
    for(j=i-1;j>=0 && num<a[j];j--)
    {
       t=a[j+1];
       a[j+1]=a[j];
       a[j]=t;
    }
  }
  printf("sorted numbers::");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
