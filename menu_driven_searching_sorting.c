//menu driven sorting and search program using function..
//1-linaer search 2-bubble 3-selection 4-inserton

#include<stdio.h>
int main()
{
  int a[20],i,n,num,ch;
  void linear(int a[20],int n,int num);
  void bubble(int a[20],int n);
  void selection(int a[20],int n);
  void insertion(int a[20],int n);
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n nos::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  do
  {
    printf("\n menu=\n1-linear search\n2-bubble sort\n3-selection sort\n4-insertion\n enter your choice::");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : printf("enter number to search::");
               scanf("%d",&num);
               linear(a,n,num);
               break;
      case 2 : bubble(a,n);
               break;
      case 3 : selection(a,n);
               break;
      case 4 : insertion(a,n);
               break;
      default : printf("invalid choice::");
                break; 
    }
  }while(ch<5);
 }
 
 void linear(int a[20],int n, int num)
 {
    int i, f=0;
    for(i=0;i<n;i++)
    {
      if(a[i]==num)
      {
        f=1;break;
      }
    }
    if(f==1)
    printf("number is found");
    else
    printf("number is not found");
 }
 
 void bubble(int a[20],int n)
 {
   int i,pass,t;
   for(pass=1;pass<n;pass++)
   {
     for(i=0;i<n-pass;i++)
     {
        if(a[i]>a[i+1])
        {
          t=a[i];
          a[i]=a[i+1];
          a[i+1]=t;
        }
     }
   }
   printf("bubble sorted numbers::");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
 }
 
void selection(int a[20],int n)
{
   int i,j,t,index,min;
  for(i=0;i<n;i++)
  {
    min=a[i];
    index=i;
    
    for(j=1;j<n;j++)
    {
      if(a[j]<min)
      {
        min=a[j];
        index=j;
      }
    }
    t=a[i];
    a[i]=a[index];
    a[index]=t;
 }
 
 printf("selection sorted numbers::");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 
 
 
} 
 
 
 
 void insertion(int a[20],int n)
 {
   int i,j,num,t;
   for(i=1;i<n;i++)
   {
     num=a[i];
     for(j=i-1;j>=0 && num<a[j];j--)
     {
       t=a[j+1];
       a[j+1]=a[j];
       a[j]=t;
     }
   }
   printf("insertion sorted numbers::");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
