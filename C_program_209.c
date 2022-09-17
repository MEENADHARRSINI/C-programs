/*
program 209
27.08.22
biggest of three numbers
*/
#include<stdio.h>
main()
{
	struct big
	{
		int a,b,c,e;
	};
	struct big d;
	scanf("%d",&d.a);
	scanf("%d",&d.b);
	scanf("%d",&d.c);
	d.e=d.a>d.b?(d.a>d.c?d.a:d.c):(d.b>d.c?d.b:d.c);
	printf("big %d",d.e);
}
