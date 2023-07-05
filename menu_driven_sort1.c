// menu driven program of sorting using function
//1-bubble  2-insertion

#include<stdio.h>
int main()
{
  int a[20],i,n,ch;
  void bubble(int a[20],int n);
  void insertion(int a[20],int n);
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n numbers::");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  do
  {
   printf("menu=\n1-bubble\n2-insertion\n enter your choice::");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1 : bubble(a,n);
              break;
     case 2 : insertion(a,n);
              break;
     default : printf("invalid choice");
               break;            
   } 
  }while(ch<3);
  
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
  printf("sorted numbers=");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}

void insertion(int a[20],int n)
{
  int i,j,num,t;
  for(i=1;i<n;i++)
  {
     num=a[i];
    for(j=i-1;j>=0&&num<a[j];j--)
    {
     t=a[j+1];
     a[j+1]=a[j];
     a[j]=t;
    }
    
  }
  printf("insertion sorted numbers:=");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
