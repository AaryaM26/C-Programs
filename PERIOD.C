#include<conio.h>
#include<stdio.h>
void main()
{
int date;
char day;
printf("enter day of the month in number:");
scanf("%d",&date);
printf("enter day of the week (M,T,W,t,F)");
scanf("%c",&day);
if(date%2!=0)
{
if(day==77)
{
printf("MON-C PROG");
}
else if(day==84)
{
printf("TUE-PHY");
}
else if(day==87)
{
printf("WED-STATS");
}
else if(day==116)
{
printf("THUS-MATHS");
}
else
{
printf("FRI-ENG");
}
}
if(date%2==0)
{
if(day==77 || day==87 || day==70)
{
printf("PEACE SESSION");
}
else
{
printf("C PROGRAM SESSION");
}
}
getch();
}


