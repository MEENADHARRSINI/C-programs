/*
program 325
12.10.22
area of circle using functions and structure pointers
*/
#include<stdio.h>
typedef struct area
{
	float area,radius;
}Area;
main()
{
	Area a;
	fnread(&a);
	fnarea(&a);
}
void fnread(Area *pa)
{
	scanf("%f",&pa->radius);
}
void fnarea(Area *pa)
{
	pa->area=3.14*(pa->radius)*(pa->radius);
	printf("Area of circle %f",pa->area);
}
