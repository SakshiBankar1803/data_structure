//accept n student names from user and display ascending order using selection sort...
#include<string.h>
#include<stdio.h>
int main()
{
  int i,j,n,index;
  char name[20][20],t[20],min[30];
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n students names::");
  for(i=0;i<n;i++)
  scanf("%s",&name[i]);
  
  for(i=0;i<n;i++)
  {
     strcpy(min,name[i]);
     index=i;
     for(j=i;j<n;j++)
     {
        if(strcmp(name[j],min)<0)
        {
          strcpy(min,name[j]);
          index=j;
        }
     }
     strcpy(t,name[i]);
     strcpy(name[i],name[index]);
     strcpy(name[index],t);
     
  }
  printf("sorted names::\n");
  for(i=0;i<n;i++)
  printf("%s\t",name[i]);

}
