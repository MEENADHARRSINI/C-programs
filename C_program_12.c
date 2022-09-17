/*
program 12
17.06.22
volume of cylinder without fixed value, by giving input
*/
#include<stdio.h>
main()
{
	float r,h,v;
	scanf("%f",&r);
	scanf("%f",&h);
	v=3.14*r*r*h;
	printf("%f",v);
}
