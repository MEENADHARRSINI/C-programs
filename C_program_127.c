/*
program 127
13.08.22
print the numbers from 1 to 100 and represent even or odd
*/
#include<stdio.h>
main()
{
	int c,a;
	for (c=1;c<=100;c++)
	{
		a=c%2;
		if (a==0)
		printf("even%d",c);
		else
		printf("odd%d",c);
	}
}

