/*
program 150
18.08.22
biggest of smallest of ten numbers 
*/
#include<stdio.h>
main()
{
	int a,b,c,d,e,f;
	for (c=1,b=0,d=999;c<=10;c++)
	{
		scanf("%d",&a);
		e=a>b?a:b;
		f=a<d?a:d;
	}
	printf("%d",e);
	printf("%d",f);
}
