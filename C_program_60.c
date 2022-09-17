/*
program 60
24.06.22
number other than thousand
*/
#include<stdio.h>
main()
{
	int c;
	scanf("%d",&c);
	while(c!=1000)
	{
		printf("%d",c);
		scanf("%d",&c);
	}
}
