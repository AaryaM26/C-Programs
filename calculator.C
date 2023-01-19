#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
int x;
printf("**** MENU ****");
printf("\n1)Addition\n2)Substraction\n3)multiplication\n4)division");
printf("\nENTER YOUR CHOICE=");
scanf("%d",&x);
switch(x)
{
case 1: printf("enter 2 numbers=");
	scanf("%f%f",&a,&b);
	c=a+b;
	printf("sum is =%f",&c);
	break;
case 2: printf("enter 2 numbers=");
	scanf("%f%f",&a,&b);
	c=a-b;
	printf("substraction is =%f",&c);
	break;
case 3:printf("enter 2 numbers=");
	scanf("%f%f",&a,&b);
	c=a*b;
	printf("multiplication is=%f",&c);
	break;
case 4:printf("enter 2 numbers=");
	scanf("%f%f",&a,&b);
	c=a/b;
	printf("division is=%f",&c);
	break;
default:printf("INVALID CHOICE");
}
getch();
}