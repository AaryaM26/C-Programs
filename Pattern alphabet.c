#include<stdio.h>
#include<conio.h> 
void main()
{int i,j,n;
printf("Enter the no of lines\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n-i+1;j++)
{
printf("%c",(char)(j+64));
}
printf("\n");
}
getch();
}