/*
program 260
21.09.22
sum of two integer using pointers
*/
#include<stdio.h>
main()
{
	int a,*pa,b,*qb,c,*rc;
	pa=&a;
	qb=&b;
	rc=&c;
	*pa=10;
	*qb=20;
	*rc=*pa+*qb;
	printf("%d",*rc);
}
