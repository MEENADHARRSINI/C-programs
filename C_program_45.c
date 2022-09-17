/*
program 45
22.06.22
convert upper to lower case using unique code
*/
#include<stdio.h>
main()
{
	char a,b;
	scanf("%c",&a);
	if(a>=65&&a<=90)
	{
		b=a+32;
		printf("b %c",b);
	}
	else
	printf("not upper case %c",a);
}

