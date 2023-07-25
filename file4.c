

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  FILE *fp;
  int f=0,std_code;
  char s1[30],cname[30];
  fp=fopen("std.txt","r");
  if(fp==NULL)
  {
    printf("file not found");
    exit(0);
  }
  printf("enter city to search:");
  scanf("%s",&cname);
  while(!feof(fp))
  {
    fscanf(fp,"%s%d",&s1,&std_code);
    if(strcmp(s1,cname)==0)
    {
      f=1;
      break;
    }
  }
  if(f==1)
  printf("city found\n std code=%d",std_code);
  else
  printf("city not found in file");
  fclose(fp);
  
}
