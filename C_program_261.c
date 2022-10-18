/*
program 261
21.09.22
biggest of two integr number using pointers
*/
#include<stdio.h>
main()
{
	int a,*pa,b,*qb,c,*rc;
	pa=&a;
	qb=&b;
	rc=&c;
	scanf("%d %d",&pa,&qb);
	rc=pa>qb?pa:qb;
	printf("%d",rc);
}
