/*
program 70
27.06.22
biggest of ten numbers
*/
#include<stdio.h>
main()
{
	int a,b,c;
	c=1;
	b=0;
	while (c<=10)
	{
		scanf("%d",&a);
		if(a>0)
		b=a;
		c=c+1;
	}
	printf("%d",b);
}
