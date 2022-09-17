/*
program 149
18.08.22
smallest of ten numbers 
*/
#include<stdio.h>
main()
{
	int a,b,c,d;
	for (c=1;c<=10;c++)
	{
		scanf("%d",&a);
		d=a<b?a:b;
	}
	printf("%d",d);
}
