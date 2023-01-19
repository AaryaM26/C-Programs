#include<stdio.h>
#include<conio.h>
void main()
{
float x,y,p;
printf("enter 2 numbers:");
scanf("%d%d",&x,&y);
while(y!=0)
{
p=p+x;
y--;
}
printf("\nproduct is=%d",p);
getch();
}