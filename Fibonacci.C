#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,a=0,b=1,nt;
clrscr();
printf("enter the number of terms:"); //4
scanf("%d",&n);
printf("Fibonacci series:");
for(i=1;i<=n;i++)
{
printf("%d",a);         //0
nt=a+b;               //nt=1
a=b;                 //1
a=nt;               //
}
getch();
}
