#include<stdio.h>
#include<string.h>
 struct student
 {
   int rno;
   char sname[20];
   float per;
 }s1[50];
 void main()
 {
   int i,n,flag=0;
   char name[20];
   printf("enter limit:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    printf("enter rno name and per::");
    scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
   }
  printf("enter name to search::");
  scanf("%s",name);
  for(i=0;i<n;i++)
  {
    if(strcmp(s1[i].sname,name)==0)
    {
       flag=1;
       break;
    }
  }
  if(flag==1)
  {
    printf("\nroll no=%d",s1[i].rno);
    printf("\nname=%s",s1[i].sname);
    printf("\nper=%f",s1[i].per);
  }
  else
  printf("record not found");
 }
