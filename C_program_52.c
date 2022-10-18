/*
program 52
23.06.22
arithmetic operator or not using case method
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{
		case'+':
		case'-':
		case'*':
		case'/':
			printf("arithmetic operator %c",a);
			break;
		default:printf("not an arithmetic operator %c",a);
	}
}
