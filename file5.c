//accept n numbers from file "num.txt" and cheach number found or not using function...

#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  int n,num,f=0,number,i=0,a[30],ans;
  int file(int a[30],int n,int number);
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
  printf("enter number to search::");
  scanf("%d",&number);
  ans=file(a,n,number);
  if(ans==1)
  printf("number found");
  else
  printf("not found");
  fclose(fp);
  }
  
  int file(int a[30],int n,int number)
  { int top,mid,bottom,f=0;
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
   return f;
  
}
