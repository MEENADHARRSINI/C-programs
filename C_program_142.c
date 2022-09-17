/*
program 142
16.08.22
biggest of ten numbers 
*/
#include<stdio.h>
main()
{
	int a,b,c;
	for (c=1,b=0;c<=10;c++)
	{
		scanf("%d",&a);
		b=a>b?a:b;
	}
	printf("%d",b);
	
}
