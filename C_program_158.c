/*
program 158
19.08.22
print the star
*/
#include<stdio.h>
main()
{
	int c,e,f,d,g;
	for (c=1,e=11,g=1;c<=6;e--,g=g+2,c++)
	{
		for (d=1;d<=e;d++)
		printf(" ");
	}
	{
		for (f=1;f<=g;f++)
		printf("*");
	}
	int h,j,k,l,i;
	for (h=1,j=1,l=9;h<=6;l=l-2,j++,h++)
	{
		for (i=1;i<=j;i++)
		printf(" ");
	}
	{
		for (k=1;k<=l;k++)
		printf("*");
	}
}
