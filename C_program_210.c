/*
program 210
27.08.22
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
	printf("smallest of three numbers %d",d.e);
}
