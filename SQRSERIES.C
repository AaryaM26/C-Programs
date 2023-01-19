#include<stdio.h>
#include<conio.h>
void series();
void main()
{
series();
getch();
}
void series()
{double sum;
int sqr,i;
for(i=1;i<=8;i++)
{
sqr = i*i;
sum=sum+(1/(double)sqr);
printf("(1/%d)+",sqr);
}
printf ("sum of this series is=%7.21f",sum);
}