#include<stdio.h>
#include<time.h>
#include<math.h>

void r(int a[30],int n)
{
 int num,i;
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
  printf("nos is found=%d",i);
}

int main()
{
  int i,n,a[100];
  printf("enter limit::");
  scanf("%d",&n);
  r(a,n);
}
