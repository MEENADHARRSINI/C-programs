/*
program 165
22.08.22
second biggest number
*/
#include<stdio.h>
main()
{
	int a[10],b,c,i;
	for (i=0,b=0,c=0;i<=9;i++)
	scanf("%d",&a[i]);
	for (i=0,b=0,c=0;i<=9;i++)
	b=a[i]>b?a[i]:b;
	for (i=0,c=0;i<=9;i++)
	c=a[i]>c&&a[i]!=b?a[i]:c;
	printf("%d",c);
}
