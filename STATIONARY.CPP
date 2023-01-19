#include<stdio.h>
#include<conio.h>
void main()
{
float note1, note2, ballpen, pencil, eraser, sharpener, total;
clrscr();
printf(" how many 100pg notebook do you require:");
scanf("%f",&note1);
printf("/n how many 200pg notebook do you require:");
scanf("%f",&note2);
printf("/n how many ballpen do you require:");
scanf("%f",&ballpen);
printf("/n how many  pencils do you need:");
scanf("%f",&pencil);
printf("/n how many eraser do you need:");
scanf("%f",&eraser);
printf("/n how many sharpner do you need:");
scanf("%f",&sharpener);
total= note1*10.50+note2*19.00+ballpen*5.00+pencil*2.50+eraser*1.50+sharpener*4.00;
printf("/n total cost:%f",total);
getch();
}