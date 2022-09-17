/*
program 210
smallest of three numbers
*/
#include<stdio.h>
main()
{
	struct small
	{
		int a,b,c,e;
	};
	struct small d;
	scanf("%d",&d.a);
	scanf("%d",&d.b);
	scanf("%d",&d.c);
	d.e=d.a<d.b?(d.a<d.c?d.a:d.c):(d.b<d.c?d.b:d.c);
	printf("small %d",d.e);
}
