#include<stdio.h>
#define y 2
void main()
{
  int x;
 x=y*10;
 printf("%d\n",x);
 #undef y
 #define y 4
 x=y*4;
 printf("%d\n",x); 
}
