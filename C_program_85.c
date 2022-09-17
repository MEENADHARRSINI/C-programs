/*
program 85
02.07.22
position of bigeest of smallest of ten numbers using array
*/
#include<stdio.h>
main()
{
	int a[10],b,c,d,e,i;
	i=0;
	b=0;
	c=999;
	while (i<=9)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	b=0;
	c=999;
	while (i<=9)
	{
		if (a[i]>b)
		{
			b=a[i];
			d=i;
		}
		else
		if (a[i]<c)
		{
			c=a[i];
			e=i;
		}
		i=i+1;
	}
	printf("%d",b);
	printf("%d",c);
	printf("%d",d);
	printf("%d",e);
}
