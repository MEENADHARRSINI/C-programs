/*
program 163
22.08.22
position of biggest of smallest of ten numbers
*/
#include<stdio.h>
main()
{
	int a[10],i,b,c,d;
	for (i=0,b=0,c=999;i<=9;i++)
	scanf("%d",&a[i]);
	for (i=0,b=0,c=999;i<=9;i++)
	{
		b=a[i]>a[b]?i:b;
		c=a[i]<a[c]?i:c;
	}
	printf("%d",b);
	printf("%d",c);
}
