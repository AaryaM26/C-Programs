#include<conio.h>
#include<stdio.h>
void main()
{int year;
printf("enter the year in yyyy format");
scanf("%d",&year);
(year % 100 == 0)?
((year % 400 == 0)?(printf("%d is leap year",year)):(printf("%d is not leap year",year))
):((year % 4 == 0)?
(printf("%d is leap year",year)):(printf("%d is not leap yesr",year))
);
getch();
}