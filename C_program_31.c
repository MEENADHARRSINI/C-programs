/*
program 31
20.06.22
vowel or not using if condition
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	printf("vowel %c",a);
	else
	printf("not a vowel %c",a);
}

