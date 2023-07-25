#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char s[40];
  fp=fopen("cityy.txt","r");
  if(fp==NULL)
  {
    printf("file not found");
    exit(0);
  }
  while(!feof(fp))
  {
    fscanf(fp,"%s",s);
    printf("%s\n",s);
  }
  fclose(fp);
}
