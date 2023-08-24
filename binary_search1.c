// accept n numbers and accept number tosearch using binary search using function.

#include<stdio.h>
int main()
{
  int a[30],i,n,mid,num,top,bottom,f=0;
  void binary_search(int a[30],int n);
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n numbers::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  binary_search(a,n);
}

void binary_search(int a[30],int n)
{
  int num,top,mid,bottom,f=0,i;
  printf("enter number tosearch::");
  scanf("%d",&num);
  top=0;
  bottom=n-1;
  while(top<=bottom)
  {
    mid=(top+bottom)/2;
    if(a[mid]==num)
    {
      f=1;
      break;
    }
  
  if(num>a[mid])
  top=mid+1;
  else
  bottom=mid-1;
  }
  if(f==1)
  printf("number is found");
  else
  printf("number is not found");
}
