/*
program 160
19.08.22
mean of first ten numbers 
*/
#include<stdio.h>
main()
{
	int i,a[10],s,b;
	for (i=0;i<=9;i++)
	scanf("%d",&a[i]);
	for (i=0;i<=9;i++)
	{
		s=s+a[i];
		b=s/10;
	}
	printf("%d",b);
	
	
}
