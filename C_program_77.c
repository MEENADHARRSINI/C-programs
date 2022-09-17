/*
program 76
29.06.22
print the star
*/
#include<stdio.h>
main()
{
	int c,n,d,e,f,m;
	c=1;
	n=1;
	while (c<=6)
	{
		d=1;
		while (d<=n)
		{
			printf("*");
			d=d+1;
		}
		n=n+1;
		c=c+1;
		printf("\n");
	}
	e=1;
	m=4;
	while (e<=6)
	{
		f=1;
		while (f<=m)
		{
			printf("*");
			f=f+1;
		}
		m=m-1;
		e=e+1;
		printf("\n");
		
	}
}
