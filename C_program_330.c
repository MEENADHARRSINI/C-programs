/*
program 330
12.10.22
area of circle
*/
#include<stdio.h>
main()
{
	typedef struct area
	{
		float radius,area;
	}Area;
	int n;
	Area *pa,*ps;
	scanf("%d",&n);
	ps=pa=(Area *)malloc(n*sizeof(Area));
	scanf("%f",&pa->radius);
	pa->area=3.14*(pa->radius)*(pa->radius);
	printf("Area of circle %f",pa->area);
	free(ps);
}
