/*
program 155
19.08.22
print the star
*/
#include<stdio.h>
main()
{
	int n,c,d,e,f,m;
	for (c=1,n=1;c<=6;n++,c++)
	{
		for (d=1;d<=n;d++)
		printf("*");
		printf("\n");
	}
	for (e=1,m=4;e<=6;m--,e++)
	{
		for (f=1;f<=m;f++)
		printf("*");
		printf("\n");
	}
}
