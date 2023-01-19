#include<stdio.h>
#include<conio.h>
void main()
{
int akshay, kartik, ranveer;
printf("enter akshay, kartik, ranveer's age:");
scanf("%d%d%d",&akshay,&kartik,&ranveer);
if(akshay>kartik && akshay>ranveer)
{
printf("akshay is eldest");
}
else
{printf("akshay is youngest");
}
if(kartik>akshay&&kartik>ranveer)
{
printf("kartik is eldest");
}
else
{
printf("kartik is youngest");
}
if(ranveer>akshay && ranveer>kartik);
{
printf("ranveer is eldest");
}
else
{
printf("ranveer is youngest");
}
getch();
}