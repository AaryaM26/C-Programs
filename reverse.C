#include<conio.h>
#include<stdio.h>
void main()
{
int n, r=0, remainder;
clrscr();
printf("ENTER A POSITIVE INTEGER:");
scanf("%d",&n);
while(n!=0)
{remainder=n%10;
r=r*10+remainder;
n/=10;
}
printf("Reverse number = %d",r);
getch();
}