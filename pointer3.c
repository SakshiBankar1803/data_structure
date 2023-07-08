//even odd using pointer...

#include<stdio.h>
int main()
{
   int n,*x;
   printf("enter number::");
   scanf("%d",&n);
   x=&n;
   if(*x%2==0)
   printf("number is even ");
   else
   printf("number is odd");
}
