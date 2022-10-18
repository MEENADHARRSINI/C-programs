/*
program 78
30.06.22
print the star     *
                  **
                 ***
                ****
               *****
			  ******  
*/
#include<stdio.h>
main()
{
	int c,m,f,d,e;
	c=1;
	m=5;
	f=1;
	while (c<=6)
	{
		d=1;
		while (d<=m)
		{
			printf(" ");
			d=d+1;
		}
		e=1;
		while (e<=f)
		{
			printf("*");
			e=e+1;
		}
	m=m-1;
	f=f+1;
	c=c+1;
	printf("\n");
    }
}
