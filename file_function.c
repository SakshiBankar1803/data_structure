#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct city
 {
   char cname[20];
   int std_code;
 }c1[30];
 
 int main()
 {
   FILE *fp;
   int n,i=0,ans,mid,top,bottom,code;
   char name[20],x[20];
   int file(struct city c1[30],int n,char x[20]);
   fp=fopen("cc.txt","r");
   if(fp==NULL)
   {
    printf("file not found");
    exit(0);
   }
   while(!feof(fp))
   {
     fscanf(fp,"%s%d",name,&code);
     strcpy(c1[i].cname,name);
     c1[i].std_code=code;
     i++;
   }
   n=i;
   printf("enter city name to search::");
   scanf("%s",x);
   ans=file(c1,n,x);
   if(ans==1)
   printf("std code=%d",c1[mid].std_code);
   else
   printf("city not in list:");
   fclose(fp);
   }
   
  int file(struct city c1[20],int n, char x[20])  
  { int top,mid,bottom,f=0;
   top=0;
   bottom=n-1;
   while(top<=bottom)
   {
     mid=(top+bottom)/2;
      if(strcmp(c1[mid].cname,x)==0)
      {
        f=1;
        break;
      }
      if(strcmp(x,c1[mid].cname)>0)
      top=mid+1;
      else
      bottom=mid-1;
   }
  return f;
 }
