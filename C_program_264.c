/*
program 264
21.09.22
volume of sphere using pointers
*/
#include<stdio.h>
main()
{
	float r,*pr,v,*pv;
	pr=&r;
	pv=&v;
	scanf("%f",pr);
	*pv=4.0/3.0*3.14*(*pr)*(*pr)*(*pr);
	printf("%f",*pv);
}
