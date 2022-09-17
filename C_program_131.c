/*
program 131
13.08.22
print the numbers between two limits and check whether it is leap year or not
*/
#include<stdio.h>
main()
{
	int a,b,c;
	for (scanf("%d %d",&a,&b);a<b;a++)
	{
		c=a%4;
		if (c==0)
		printf("leap year %d",a);
		else
		printf("not leap year %d",a);
	}
}
