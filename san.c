#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1;
	int num,flag=0,x,a[100],i=0,n,top,mid,bottom;
	fp1=fopen("number.txt","r");
	if(fp1==NULL)
	{
	printf("not found");
	exit(0);
	}
while(!feof(fp1))
{
	fscanf(fp1,"%d",&num);
	a[i++]=num;
}
n=i;
printf("enter number to search=");
scanf("%d",&x);
top=0;
bottom=n-1;
while(top<=bottom)
{
	mid=top+bottom/2;
	if(x==a[mid])
	{
		flag=1;
		break;
	}
	if(x>a[mid])
	top=mid+1;
	else
	bottom=mid-1;
}
if(flag==1)
printf("found");
else
printf("not found");
fclose(fp1);
}
