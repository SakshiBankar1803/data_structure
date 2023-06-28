#include<stdio.h>
void main()
{
  int a[100],b[100],i,n;
  printf("enter limit:");
  scanf("%d",&n);
  printf("enter n nos:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  
  for(i=0;i<n;i++)
  {
    strcpy(a[i],b[i]);
   
  }
  
  printf("first array ::");
  for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 
 printf("second array::");
 for(i=0;i<n;i++)
 printf("%d\t",b[i]);
}
