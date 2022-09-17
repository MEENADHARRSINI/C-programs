/*
program 42
21.06.22
lower case or not using unique code
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a>=97&&a<=122)
	printf("lower case %c",a);
	else
	printf("not lower case %c",a);
}
