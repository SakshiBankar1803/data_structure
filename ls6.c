#include<stdio.h>
#include<stdlib.h>
void main()
{
  FILE *f1;
  int f=1,code;
  char name[20],cname[20];
  
  f1=fopen("city.txt","r");
  if(f1==NULL)
  {
    printf("file not found");
    exit(0);
  }
  
 printf("enter city name to search:");
 scanf("%s",&cname);
 
 while(!feof(f1))
 {
   fscanf(f1,"%s%d",&name,&code);
   if(strcmp(name,cname)==0)
   {
   f=0;
   break;
   }
 }
 fclose(f1);
 
 if(f==0)
 printf("STD CODE=%d",code);
 else
 printf("city not found");
}
