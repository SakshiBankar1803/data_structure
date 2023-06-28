#include<stdio.h>
 struct student
 {
   char sname[20];
   int rno;
   float per;
 }s1[100];
 int i,n,num;
 char nm[20];
 void main()
 {
   void accept();
   void display();
   
   int ch;
   do
   {
     printf("\n1-accept record\n2-display all\n3-search by no.\n4-search by name");
     printf("\n5-maximum per\n5-average per\n enter your choice:");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1 : accept();
                break;
       case 2 : display();
                break;
       default : printf("invalid choice!!!!");
    }
     
   }while(ch<3);
   
 }
   void accept()
  {
    printf("enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("enter rno name per::");
      scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
      
    }
  } 
  
  void display()
  {
     for(i=0;i<n;i++)
     {
    printf("\nrno=%d",s1[i].rno);
    printf("\n name=%s",s1[i].sname);
    printf("\n per=%f",s1[i].per);
    }
  }
  
   
 
