/*
program 43
21.06.22
digit or not using unique code
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a>=48&&a<=57)
	printf("digit %c",a);
	else
	printf("not digit %c",a);
}
