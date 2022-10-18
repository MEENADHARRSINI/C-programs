/*
program 153
18.08.22
print the star
*/
#include<stdio.h>
main()
{
	int n,c,d;
	for (n=7,c=1;c<=7;c++,n--)
	{
		for (d=1;d<=n;d++)
		printf("*");
		printf("\n");
	}
}
