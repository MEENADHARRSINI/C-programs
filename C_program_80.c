/*
program 80
30.06.22
print the star      *
                   ***
                  *****
                 *******
                *********
               ***********
                *********
                 *******
                  *****
                   ***
                    *
*/
#include<stdio.h>
main()
{
	int c,e,g,d,f;
	c=1;
	e=5;
	g=1;
	while (c<=6)
	{
		d=1;
		while (d<=e)
		{
			printf(" ");
			d=d+1;
		}
		f=1;
		while (f<=g)
		{
			printf("*");
			f=f+1;
		}
		e=e-1;
		g=g+2;
		c=c+1;
		printf("\n");
	}
	int h,j,l,i,k;
	h=1;
	j=1;
	l=9;
		while (h<=6)
		{
			i=1;
			while (i<=j)
			{
			printf(" ");
			i=i+1;
	    	}
	    	k=1;
	    	while (k<=l)
	    	{
	    		printf("*");
	    		k=k+1;
			}
			j=j+1;
			l=l-2;
			h=h+1;
			printf("\n");
		}
}

