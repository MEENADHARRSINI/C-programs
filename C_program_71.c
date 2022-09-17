/*
program 71
27.06.22
smallest of ten numbers 
*/
#include<stdio.h>
main()
{
	int a,b,c;
	c=1;
	b=9999;
	while (c<=10)
	{
		scanf("%d",&a);
		if (a<b)
		b=a;
		c=c+1;
	}
	printf("%d",b);
}
