/*
program 141
16.08.22
mean of ten numbers 
*/
#include<stdio.h>
main()
{
	int c,a,s,b;
	for (c=1;c<=10;c++)
	{
		scanf("%d",&a);
		s=s+a;
	}
	b=s/a;
	printf("%d",b);
}
