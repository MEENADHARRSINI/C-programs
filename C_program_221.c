/*
program 221
03.09.22
read and display a point
*/
#include<stdio.h>
main()
{
	typedef struct point
	{
		int x,y;
	}POINT;
	POINT p;
	scanf("%d",&p.x);
	scanf("%d",&p.y);
	printf("%d",p.x);
	printf("%d",p.y);
}
