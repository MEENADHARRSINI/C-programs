/*
program 296
03.10.22
area of circle
*/
#include<stdio.h>
void set1(float *pr);
void set2(float r,float *pa);
main()
{
	float a,r;
	set1(&r);
	set2(r,&a);
	printf("%f",a);
}
void set1(float *pr)
{
	*pr=10;
}
void set2(float r,float *pa)
{
	*pa=3.14*r*r;
}
