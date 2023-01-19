#include<stdio.h>
#include<conio.h>
int convert(decimalnum,base)
{
int number = 0;
int rem, f = 1;

while (decimalnum!=0)
{
rem = decimalnum%base;
decimalnum = decimalnum / base;
number = number + rem*f;
f= f * 10;
}
return number;
}

void main()
{int decimalnum, num, x, base, choice;


printf("Select conversion: \n\n");
printf("1. Decimal to binary.\n 2. Decimal to octal. \n 3. Decimal to hexadecimal. \n");
printf("\nEnter your choice: ");
scanf("%d", &choice);

switch(x)
{case 1:base = 2;
break;
case 2:base = 8;
break;
case 3:base = 16;
break;
}
printf("Equivalent Binary Number is: %d",convert(decimalnum,base)) ;
getch();
}
