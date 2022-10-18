/*
program 157
19.08.22
print the star
*/
#include<stdio.h>
main()
{
	int c,m,d,f,e;
	for (c=1,m=9,f=0;c<=6;f++,m=m-2,c++)
    {
		for (d=1;d<=f;d++)
		{
		printf(" ");
	    }
		for (e=1;e<=m;e++)
		{
		printf("*");
        }
		printf("\n");
	}
}
