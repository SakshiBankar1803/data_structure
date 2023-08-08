//accept n numbers in array and sort them using quick sort recursively....

#include<stdio.h>

int partition(int a[],int lb,int ub)
{
  int j,t;
  int pivote=a[ub];
  int i=(lb-1);
  for(j=lb;j<=ub-1;j++)
  {
    if(a[j]<=pivote)
    {
     i++;
     t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
  }
   t=a[i+1];
   a[i+1]=a[ub];
   a[ub]=t;
   return(i+1);
}


void qsort(int a[],int lb,int ub)
{
  if(lb<ub)
  {
    int j;
    j=partition(a,lb,ub);
    qsort(a,lb,j-1);
    qsort(a,j+1,ub);
  }
}

void main()
{
  int a[30],i,n;
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n nos in array::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  qsort(a,0,n-1);
  
  printf("sorted array elements are::\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
