/*
program 128
13.08.22
print the numbers from 1000 to 3000 and check whether leap year or not 
*/
#include<stdio.h>
main()
{
	int c,a;
	for (c=1000;c<=3000;c++)
	{
		a=c%4;
		if (a==0)
		printf ("leap year%d",c);
		else 
		printf ("not leap year %d",c);
	}
}
