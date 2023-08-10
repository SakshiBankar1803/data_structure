#include<stdio.h>

void selection(int a[100],int n)
 { int i,j,min,index,t;
  
  for(i=0;i<n;i++)
  {
     min=a[i];
     index=i;
     for(j=i;j<n;j++)
     {
       if(a[j]<min)
       {
         min=a[j];
         index=j;
       }
     }
     if(j=index)
     {
       t=a[i];
       a[i]=a[index];
       a[index]=t;
     }
  }
 
}

int main()
{
  int a[100],i,j,min,t,n,index;
  printf("enter limit:");
  scanf("%d",&n);
  printf("enter n nos::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  selection(a,n);
   printf("sorted names::");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  }
