//display all numbers of "number.txt" file....

#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp1;
  int num;
  fp1=fopen("number.txt","r");
  if(fp1==NULL)
  {
    printf("file not found");
    exit(0);
  }
  while(!feof(fp1))
  {
    fscanf(fp1,"%d",&num);
    printf("%d",num);

  }
  fclose(fp1);
}
