/*
program 223
03.09.22
area of circle using functions
*/
#include<stdio.h>
float area (float);
main()
{
	float a,r;
	scanf("%f",&r);
	a=area(r);
	printf("%f",a);
}
float area (float r)
{
	float a;
	a=3.14*r*r;
	return a;
}
