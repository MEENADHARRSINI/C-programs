/*
program 76
28.06.22
print the star*******
              ******
              *****
              ****
              ***
              **
              *
*/
#include<stdio.h>
main()
{
	int n,c,d;
	n=7;
	c=1;
	while(c<=7)
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
