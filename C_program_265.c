/*
program 265
21.09.22
volume of cylinder using pointers
*/
#include<stdio.h>
main()
{
	float r,*pr,v,*pv,h,*ph;
	pr=&r;
	ph=&h;
	pv=&v;
	scanf("%f %f",pr,ph);
	*pv=3.14*(*pr)*(*pr)*(*ph);
	printf("%f",*pv);
}
