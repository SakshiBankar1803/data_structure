//accept n number from file "num.txt" and check number is found or not using binary search....

#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  int num,number,n,f=0,i=0,a[100],top,mid,bottom;
  fp=fopen("num.txt","r");
  if(fp==NULL)
  {
    printf("file not found");
    exit(0);
  }
  while(!feof(fp))
  {
    fscanf(fp,"%d",&num);
    a[i++]=num;
  }
  n=i;
  printf("enter number to search:");
  scanf("%d",&number);
  top=0;
  bottom=n-1;
  while(top<=bottom)
  {
    mid=(top+bottom)/2;
    if(number==a[mid])
    {
      f=1;
      break;
    }
    if(number>a[mid])
    top=mid+1;
    else
    bottom=mid-1;
  }
  if(f==1)
  printf("number is found");
  else
  printf("number is not found");
  fclose(fp);
}
