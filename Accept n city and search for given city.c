#include<stdio.h>
int main()
{
  char a[50][50],nm[20];
  int i,n,flag=0,top,mid,bottom;
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n cities name in sorted order::");
  for(i=0;i<n;i++)
  scanf("%s",&a[i]);
  printf("enter name to search::");
  scanf("%s",&nm);
  
  top=0;
  bottom=n-1;
  while(top<=bottom)
  {
    mid=(top+bottom)/2;
    if(strcmp(a[mid],nm)==0)
    {
      flag=1;break;
    }
    if(nm>a[mid])
     top=mid+1;
     else
     bottom=mid-1;
   }
   if(flag==1)
   printf("record is found...");
   else
   printf("record not found");
 }
