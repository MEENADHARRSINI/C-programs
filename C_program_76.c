/*
program 75
28.06.22
print the star in decreasing order
*/
#include<stdio.h>
main()
{
	int n,c,d;
	n=7;
	c=1;
	while(c<=6)
	{
		d=1;
		while(d<=n)
		{
			printf("*");
			d=d+1;
		}
		c=c+1;
		n=n-1;
		printf("\n");
	}
}
