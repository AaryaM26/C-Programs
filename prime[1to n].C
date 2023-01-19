#include<conio.h>
#include<stdio.h>
void main()
{
int n,i,f,j;
printf("enter number:");
scanf("%d",&n);
printf("prime numbers are:");
printf("2");
for(i=3;i<=n;i++)
{
    f=0;
    for(j=2;j<i;j++)
    {  if(i%j==0)
       {
       f=1;
       break;
       }
    }
    if(f==0)
    {
    printf(" ",i);
    }
}
getch();
}


