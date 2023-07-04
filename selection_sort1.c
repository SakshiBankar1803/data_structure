//accept n nos and arrage them using selection sort....

#include<stdio.h>
int main()
{
  int n,i,a[50],j,t,index,min;
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n nos::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  for(i=0;i<n;i++)
  {
     min=a[i];
     index=i;
     for(j=i;j<n;j++)
     {
        if(a[j]<min)
        {
           min=a[j];
           index=j;
        }
     }
     if(i!=index)
     {
        t=a[i];
        a[i]=a[index];
        a[index]=t;
     }
  
  }
  printf("sorted nos are::\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
