/*
program 263
21.09.22
area of circle using functions
*/
#include<stdio.h>
main()
{
	float a,*pa,r,*pr;
	pa=&a;
	pr=&r;
	scanf("%f",pr);
	*pa=3.14*(*pr)*(*pr);
	printf("%f",*pa);
}
