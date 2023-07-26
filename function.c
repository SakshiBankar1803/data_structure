#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[100],i,n,num,flag;
  int file(int a[30],int n ,int num);
  
  printf("enter limit:");
  scanf("%d",&n);
  printf("enter number in sorted order:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  printf("enter number to search::");
  scanf("%d",&num);
  
  flag=file(a,n,num);
  if(flag==1)
  printf("number is found");
  else
  printf("not found");
}
int file(int a[80],int n,int num)
{
   int top,mid,bottom,flag=0;
   top=0;
   bottom=n-1;
   while(top<=bottom)
   {
     mid=(top+bottom)/2;
     {
      flag=1;
      break;
     }
     if(num>a[mid])
     top=mid+1;
     else
     bottom=mid-1;
   }
   return flag;
}
