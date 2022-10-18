/*
program 156
19.08.22
print the star
*/
#include<stdio.h>
main()
{
	int c,m,d,f,e;
	for (c=1,m=5,f=1;c<=6;f++,m--,c++)
	{
		for (d=1;d<=m;d++)
		{
		printf(" ");
	    }
	    for (e=1;e<=f;e++)
	    {
	    printf("*");
	    }
      	printf("\n");
    }
}
