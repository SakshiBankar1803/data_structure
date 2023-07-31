#include<stdio.h>
#include<string.h>
void selection(char a[20][20],int n)
 { int i,j,index;
   char min[20],t[20];
  for(i=0;i<n;i++)
  {
     strcpy(min,a[i]);
     index=i;
     for(j=i+1;j<n;j++)
     {
       if(strcmp(min,a[j])<0)
       {
         strcpy(min,a[j]);
         index=j;
       }
     }
    
     
       strcpy(t,a[i]);
       strcpy(a[i],a[index]);
      strcpy(a[index],t);
     
  }

}

int main()
{
  char a[100][100];
  int i,n,index,ans;
  printf("enter limit:");
  scanf("%d",&n);
  printf("enter n nos::");
  for(i=0;i<n;i++)
  scanf("%s",&a[i]);
  
  selection(a,n);
     printf("sorted names::");
  for(i=0;i<n;i++)
  printf("%s\t",a[i]);
 
  }
