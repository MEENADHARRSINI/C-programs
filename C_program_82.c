/*
program 82
01.07.22
mean of ten numbers 
*/
#include<stdio.h>
main()
{
	int i,a[10],s,b;
	i=0;
	while (i<=9)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	while (i<=9)
	{
		s=s+a[i];
		i=i+1;
	}
	b=s/10;
	printf("%d",b);
}
