//accept n nos randomly and printf them also check number is present n that random array or not....

#include<stdio.h>
#include<math.h>
#include<time.h>
void main()
{
  int n,i,num,a[200];
  printf("enter limit:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  a[i]=rand()%100;
  printf("random nos::\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  
  printf("enter no to search::");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
    if(a[i]==num)
    break;
  }
  if(i==n)
  printf("nos not found");
  else 
  printf("nos is found");
  
}
