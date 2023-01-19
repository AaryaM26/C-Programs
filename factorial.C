#include<stdio.h>
#include<conio.h>
void main()
{
int n, i=1, x=1;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
while(i<=n)
{
x=x*i;
i++;
}
printf("\n the factorial of %d is %d",n,x);
getch();
}