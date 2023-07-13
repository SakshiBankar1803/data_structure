//accept string and display using for loop

#include<stdio.h>
#include<string.h>
int main()
{
  char s[40]; int i;
  printf("enter string::");
  gets(s); 
  //printf("string::=%s",s);

 for(i=0;s[i]!='\0';i++)
 {
   printf("%c",s[i]);
 }
}
