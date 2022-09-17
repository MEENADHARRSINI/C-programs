/*
program 41
21.06.22
upper case or not using unique code
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a>=65&&a<=90)
	printf("upper case %c",a);
	else
	printf("not upper case %c",a);
}
