/*
program 319
08.10.22
area of circle
*/
#include<stdio.h>
main()
{
	typedef struct area
	{
		float radius,area;
	}Area;
	Area a,*pa;
	pa=&a;
	scanf("%f",&(*pa).radius);
	((*pa).area)=3.14*((*pa).radius)*((*pa).radius);
	printf("Area %f",(*pa).area);
}
