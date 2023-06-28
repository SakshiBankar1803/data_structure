#include<stdio.h>
void main()
{
  int a[50],i,n,max1,max2;
  printf("enter limit:");
  scanf("%d",&n);
  printf("enter n numbers:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  max1=a[0];
  
  for(i=0;i<n;i++)
  {
    if(a[i]>max1)
    max1=a[i];
   }
  printf(" first maximum nos =%d",max1);
  max2=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>max2)
    {
      if(a[i]!=max1)
      max2=a[i];
    }
  }
  
 printf("second max no=%d",max2);
}
