/*
program 154
19.08.22
print the star
*/
#include<stdio.h>
main()
{
	int n,c,d;
	for (n=1,c=1;c<=6;c++,n++)
	{
		for (d=1;d<=n;d++)
		printf("*");
		printf("\n");
	}
}
