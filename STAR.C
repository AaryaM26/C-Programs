#include<conio.h>
#include<stdio.h>
void main()
{
int i,r;
clrscr();
for(i=1;i<=5;i++)
{
for(r=1;r<=i;r++)
{
printf("*");
}
printf("\n");
}
getch();
}