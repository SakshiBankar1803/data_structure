#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  int num[20],n,f=0,top,mid,bottom;
  fp=fopen("numbers.txt","r");
  if(fp==NULL)
  {
    printf("file not found");
    exit(0);
  }
  printf("enter number to search:");
  scanf("%d",&n);
  top=0;
  bottom=n-1;
  while(!feof(fp))
  { fscanf(fp,"%d",&num);
    mid=(top+bottom)/2;
    if(num[mid]==n)
    {
      f=1;break;
    }
    if(n>num[mid])
     top=mid+1;
     else
     bottom=mid-1;
  }
  if(f==1)
  printf("number found");
  else
  printf("number not found");
  fclose(fp);
}
