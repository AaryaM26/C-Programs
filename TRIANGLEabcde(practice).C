#include<stdio.h>
#include<conio.h>
void main()
{
char alphabet='A';
int i;
clrscr();
printf("%c",alphabet);
++alphabet;
printf("\n");
for(i=1;i<=2;i++)
{
printf("%c",alphabet);
}
printf("\n");
++alphabet;
for(i=1;i<=3;i++)
{
printf("%c",alphabet);
}
printf("\n");
++alphabet;
for(i=1;i<=4;i++)
{
printf("%c",alphabet);
}
printf("\n");
++alphabet;
for(i=1;i<=5;i++)
{
printf("%c",alphabet);
}
getch();
}