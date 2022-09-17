/*
program 72
28.06.22
biggest of smallest of ten numbers
*/
#include<stdio.h>
main()
{
	int a,b,c,d;
	c=1;
	b=0;
	d=999;
	while(c<=10)
	{
		scanf("%d",&a);
		if(a>b)
		b=a;
		else
		if(a<d)
		d=a;
		c=c+1;
	}
	printf("%d",b);
	printf("%d",d);
}
