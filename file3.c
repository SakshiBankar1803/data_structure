#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  int num,x,f=0;
  fp=fopen("number.txt","r");
  if(fp==NULL)
  {
    printf("file not found");
    exit(0);
  }
  printf("enter number to search::");
  scanf("%d",&x);
  while(!feof(fp))
  {
    fscanf(fp,"%d",&num);
    if(num==x)
    {
      f=1;
      break;
    }
  }
  if(f==1)
  printf("number found");
  else
  printf("number not found");
  fclose(fp);
}
