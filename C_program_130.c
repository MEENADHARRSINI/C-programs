/*
program 130
13.08.22
print the numbers between two numbers and check whether even or odd
*/
#include<stdio.h>
main()
{
	int a,b,c;
	for (scanf("%d %d",&a,&b);a<b;a++)
	{
		c=a%2;
		if (c==0)
		printf ("even%d",a);
		else
		printf ("odd%d",a);
	}
}
