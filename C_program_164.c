/*
program 164
22.08.22
interchange the position of biggest of smallest of ten numbers
*/
#include<stdio.h>
main()
{
	int a[10],b,c,p1,p2,d,i;
	for (i=0,b=0,c=999;i<=9;i++)
	scanf("%d",&a[i]);
	for (i=0,b=0,c=999;i<=9;i++)
	{
		b=a[i]>a[b]?i:b;
		c=a[i]<a[c]?i:c;
	}
	d=a[b];
	a[b]=a[c];
	a[c]=d;
	for (i=0;i<=9;i++)
	printf("%d",a[i]);
}
