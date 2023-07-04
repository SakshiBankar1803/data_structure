// create structure emp(eno,ename,sal) and sort them by emp number using selection sort...

#include<stdio.h>
  struct emp
  {
    int eno;
    char name[20];
    float sal;
  }e1[50],t;
  
  int main()
  {
     int i,n,j,index,min;
     printf("enter limit::");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("enter emp no name sal::");
       scanf("%d%s%f",&e1[i].eno,e1[i].name,&e1[i].sal);
     }
     
     for(i=0;i<n;i++)
     {
        min=e1[i].eno;
        index=i;
        for(j=i;j<n;j++)
        {
          if(e1[j].eno<min)
          {
             min=e1[j].sal;
             index=j;
          }     
       }
       t=e1[i];
       e1[i]=e1[index];
       e1[index]=t;
       
     }
     printf("sorted emp by emp no::\n");
     for(i=0;i<n;i++)
     printf("%d\t%s\t%f\n",e1[i].eno,e1[i].name,e1[i].sal);
  }
