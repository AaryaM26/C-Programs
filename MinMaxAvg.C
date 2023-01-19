#include<conio.h>
#include<stdio.h>
void main()
{
int n=10,i,x=0,min=0,max=0,sum=0,prevmin=0,prevmax=0,newmin=0,newmax=0;
float avg;
for(i=1;i<=n;i++)
{
printf("enter percentage %f:\n",i);
scanf("%d",&x);
sum=sum+x;
if(prevmin=0)
{
 prevmin=x;
}
if(prevmin>x)
{
prevmin=x;
}
if(prevmax=0)
{
prevmax=x;
}
if(prevmax<x)
{
prevmax=x;
}
}
avg=sum/10
printf("avegrage=%f",avg)
printf("min is %d max is %d",prevmin,prevmax);
getch();
}

