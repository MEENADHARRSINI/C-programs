/*
program 262
21.09.22
biggest of three integer number using functions
*/
#include<stdio.h>
main()
{
	int a,*pa,b,*qb,c,*rc,d,*sd,e,*te;
	pa=&a;
	qb=&b;
	rc=&c;
	sd=&d;
	te=&e;
	scanf("%d %d %d",&pa,&qb,&rc);
	sd=pa>qb?pa:qb;
	te=sd>rc?sd:rc;
	printf("%d",te);
}
