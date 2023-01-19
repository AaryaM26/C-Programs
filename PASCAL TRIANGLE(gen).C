#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,m,n;
printf("enter number of row=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if (j==0||i==0)
m= 1;
else
m = m*(i-j+1)/j;
printf("%d\t",m);
}
printf("\n");
}
getch();
}
