#include<stdio.h>
#include<conio.h>
int fibonacci(int);

int main()
{
int n, i = 0, f;
scanf("%d",&n);
printf("Fibonacci series\n");
for ( f= 1 ; f<= n ; f++ )
{printf("%d", fibonacci(i));
i++;
}
return 0;
}
 int fibonacci(int n)
{if ( n == 0 )
return 0;
else if ( n == 1 )
return 1;
else
return ( fibonacci(n-1) + fibonacci(n-2) );
}