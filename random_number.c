//accept n number randomly and return its position if number is found using function(used rand() function)...

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int search(int a[30],int num,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(a[i]==num)
    return i;
  }
  return i;
}



int main()
{
  int a[30],i,n,num;
  printf("enter limit::");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  a[i]=rand()%1000;
  
  printf("random numbers::");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  
  print("enter number to search::");
  scanf("%d",&num);
  
  if(search(a,num,n)==n)
   printf("number not found::");
   else
   printf("number is found");
   }
  
