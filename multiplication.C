#include<conio.h>
#include<stdio.h>
void main()
{
float i,j,p;
printf("enter 2 number:");
scanf("%f%f",&i,&j);
do
{
p=p+i;
j--;
}
while(j!=0);
printf("product is=%f",p);
getch();
}