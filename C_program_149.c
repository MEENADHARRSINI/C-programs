/*
program 149
18.08.22
smallest of ten numbers 
*/
#include<stdio.h>
main()
{
	int a,b,c,d;
	for (c=1,b=999;c<=10;c=c+1)
	{
		scanf("%d",&a);
		b=a<b?a:b;
	}
	printf("%d",b);
}
