/*
program 79
30.06.22
print the star*********
               *******
                *****
                 ***
                  *
*/
#include<stdio.h>
main()
{
	int c,m,f,d,e;
	c=1;
	m=9;
	f=0;
	while (c<=6)
	{
		d=1;
		while (d<=f)
		{
			printf(" ");
			d=d+1;
		}
		e=1;
		while (e<=m)
		{
			printf("*");
			e=e+1;
		}
		m=m-2;
		f=f+1;
		c=c+1;
		printf("\n");
	}
}
