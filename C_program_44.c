/*
program 44
22.06.22
upper,lower,digit or special character using unique code
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a>=65&&a<=90)
	printf("upper case %c",a);
	else
	if(a>=97&&a<=122)
	printf("lower case %c",a);
	else
	if(a>=48&&a<=57)
	printf("digit %c",a);
	else
	printf("special character %c",a);
}
