//accept n cities name and search city by binary search using fuction...
#include<string.h>
#include<stdio.h>
int main()
{
  char s[20][20],nm[20];
  int i,n,f;
  int city(char s[20][20],char nm[20],int n);
  printf("enter limit::");
  scanf("%d",&n);
  printf("accept n cities names::");
  for(i=0;i<n;i++)
  scanf("%s",&s[i]);
  
  f=city(s,nm,n);
   if(f==1)
  printf("city is found:");
  else
  printf("city is not found:");
 
}

int city(char s[20][20],char nm[20],int n)
{
  int i,top,mid,bottom,f=0;
  printf("enter city name to search::");
  scanf("%s",&nm);
  top=0;
  bottom=n-1;
  while(top<=bottom)
  {
    mid=(top=bottom)/2;
    if(strcmp(s[mid],nm)==0)
    {
      f=1;break;
    }
    if(nm>s[mid])
    top=mid+1;
    else
    bottom=mid-1;
  }
  return f;
  
}
