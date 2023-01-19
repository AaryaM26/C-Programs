#include<conio.h>
#include<stdio.h>
int fact(int num);
void main()
{
int n, r, ncr;
printf("enter a number n \n");
scanf("%d",&n);
printf("enter a number r \n");
scanf("%d",&r);
ncr=fact(n)/(fact(r)*fact(n-r));
printf("%dC%d=%d\n",n,r,ncr);
getch();
}
int fact(int num)
{
int f=1,i;
if(num==0)
{
return(f);
}
else
{for(i=1;i<=num;i++)
{f=f*i;
}
}
return(f);
}