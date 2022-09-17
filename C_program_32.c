/*
program 32
20.06.22
arithmetic operator or not using if condition 
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a=='+'||a=='-'||a=='*'||a=='/')
	printf("arithmetic operator %c",a);
	else
	printf("not an arithmetic operator %c",a);
}
