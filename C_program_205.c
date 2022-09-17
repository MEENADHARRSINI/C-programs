/*
program 205
27.08.22
print the numbers from 1 to 100 and represent even or odd
*/
#include<stdio.h>
main()
{
	int c,d;
	c=1;
	do
	{
		d=c%2;
		if (d==0)
		printf("even %d",c);
		else
		printf("odd %d",c);
		c=c+1;
	}
	while (c<=100);
}
