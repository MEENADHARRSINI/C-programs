/*
program 66
25.06.22
upper,lower,digit or special character
*/
#include<stdio.h>
main()
{
	char c;
	scanf("%c",&c);
	while(c!='$')
	{
		if (c>=65 && c<=90)
		printf("upper case %c",c);
		else
		if(c>=97 &&c<=122)
		printf("lower case %c",c);
		else
		if(c>=48&& c<=57)
		printf("digit %c",c);
		else
		printf("special character %c",c);
		scanf("%c",&c);
	}
}
