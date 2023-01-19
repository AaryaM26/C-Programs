#include <stdio.h>
#include <conio.h>

int dToB(int decimalnum)
{
int binarynum = 0;
int rem, f = 1;

while (decimalnum!=0)
{
rem = decimalnum%2;
decimalnum = decimalnum / 2;
binarynum = binarynum + rem*f;
f= f * 10;
}
return binarynum;
}

int main()
{
int decimalnum;
printf("Enter a Decimal Number: ");
scanf("%d", &decimalnum);
printf("Equivalent Binary Number is: %d", dToB(decimalnum));
return 0;
}