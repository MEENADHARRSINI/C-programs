/*
program 162
19.08.22
biggest of ten numbers
*/
#include<stdio.h>
main()
{
	int a[10],b,i;
	for (i=0;i<=9;i++)
	scanf("%d",&a[i]);
	for (i=0;i<=9;i++)
	b=a[i]>b?a[i]:b;
	printf("%d",b);
}
