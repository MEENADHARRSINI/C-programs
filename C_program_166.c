/*
program 166
22.08.22
interchange the second biggest and second smallest
*/
#include<stdio.h>
main()
{
	int a[10],b,c,d,e,f,i;
	for (i=0,b=0,c=0,d=999,e=999;i<=9;i++)
	scanf("%d",&a[i]);
	for (i=0,b=0,c=0,d=999,e=999;i<=9;i++)
	{
		b=a[i]>b?a[i]:b;
		d=a[i]<d?a[i]:d;
	}
	for (i=0,b=0,c=0,d=999,e=999;i<=9;i++)
	c=a[i]>a[c]&a[i]!=b?i:c;
	for (i=0,b=0,c=0,d=999,e=999;i<=9;i++)
	e=a[i]<a[e]&a[i]!=d?i:e;
	f=a[c];
	a[c]=a[e];
	a[e]=f;
	for (i=0;i<=9;i++)
	printf("%d",a[i]);
}
