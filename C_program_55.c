/*
program 55
23.06.22
even or odd
*/
#include<stdio.h>
main()
{
	int c,a;
	c=1;
	while(c<=100)
	{
		a=c%2;
		if(a==0)
		printf("even %d",c);
		else
		printf("odd %d",c);
		c=c+1;
	}
}
