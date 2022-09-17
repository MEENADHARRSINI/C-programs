/*
program 46
22.06.22
convert lower case to upper case using unique code 
*/
#include<stdio.h>
main()
{
	char a,b;
	scanf("%c",&a);
	if(a>=97&&a<=122)
	{
		b=a-32;
		printf("b %c",b);
	}
	else
	printf("not lower case %c",a);
}
