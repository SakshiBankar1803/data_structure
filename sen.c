#include<stdio.h>

void accept(int a[],int n)
{
  int i;
  printf("enter array element::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}

void disp(int a[],int n)
{
  int i;
  printf("array elements are::");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}

 void sentinal(int a[],int n)
 {
   int i=0,num;
   printf("enter number to search::");
   scanf("%d",&num);
   a[n]=num;
   while(a[i]!=num)
   {
    i++;
   }
  if(i==n)
  printf("number not found");
  else
  printf("number found at position=%d",i);
 }

void main()
{
  int i,a[30],n,ans,num;
  printf("enter limit::");
  scanf("%d",&n);
  
  accept(a,n);
  disp(a,n);
  sentinal(a,n);
 
}
