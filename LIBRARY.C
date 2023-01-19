#include<stdio.h>
#include<conio.h>
void main()
{int a;
clrscr();
printf("enter number of days member is late to return");
scanf("%d",a);
if(a>=5)
{
printf("50paise fine");
}
else
{
if(a>=10)
{
printf("1Rupees fine");
}
else
{
if(a>=30)
{
printf("5Rupees fine");
}
else
{
printf("your membership will be cancelled");
}
}
}
getch();
}