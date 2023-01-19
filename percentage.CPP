#include<conio.h>
#include<stdio.h>
void main()
{
float maths, phy, chem, cs, eng, total, p;
printf("enter your marks in maths=");
scanf("%f",maths);
printf("enter your marks in physics=");
scanf("%f",phy);
printf("enter your marks in chemistry=");
scanf("%f",chem);
printf("enter your marks in computer science=");
scanf("%f",cs);
printf("enter your marks in english=");
scanf("%f",eng);
total = maths+phy+chem+cs+eng;
printf("total marks obtained=%d",total);
p=(total/500.0)*100.0;
if(p>100)
{
printf("invalid marks enter");
}
else
{
if(p>=95)
{
printf("excellent");
}
else
{
if(p>=85)
{
printf("very good");
}
else
{
if(p>=75)
{
printf("good");
}
else
{
if(p>=65)
{
printf("can do better");
}
else
{
if(p>=35)
{
printf("need improvement");
}
else
{
printf("better luck next time");
}
}
}
}
}
}
getch();
}