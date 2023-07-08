// read two interger using pointer and perform all arithmatic operation on them

#include<stdio.h>
int main()
{
   int a,b,*x,*y;
   printf("enter two numbers::");
   scanf("%d%d",&a,&b);
   x=&a;
   y=&b;
   printf("\naddition=%d",*x+*y);
   printf("\nsubstraction=%d",*x-*y);
   printf("\nmultiplication=%d",*x * *y);
   printf("\ndivision=%d",(*x)/(*y));
}
