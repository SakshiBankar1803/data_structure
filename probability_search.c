//accept n numbers using probability search using function....

#include<stdio.h>
 
  void accept(int n)
  {
    int i,a[20];
    printf("enter n nos::");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  }
  
  void display(int n)
  {
    int i,a[20];
    printf("array elments are::");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
  }
  
  void prob_search(int n)
  {
    int i,a[20],num,t;
    printf("enter key::");
    scanf("%d",&num);
    
    for(i=0;i<n;i++)
    {
      if(a[i]==num)
      {
        if(i!=0)
        {
          t=a[i-1];
          a[i-1]=a[i];
          a[i]=t;
        }
      }
    }
    printf("elements are::");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
  }

int main()
{
  int n;
  printf("enter limit::");
  scanf("%d",&n);
  accept(n);
  display(n);
  prob_search(n);
}
