/*
program 48
22.06.22
word to a given vowel
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a=='a')
	printf("apple %c",a);
	else
	if(a=='e')
	printf("elephant %c",a);
	else
	if(a=='i')
	printf("ice cream %c",a);
	else
	if(a=='o')
	printf("orange %c",a);
	else
	if(a=='u')
	printf("umbrella %c",a);
	else
	printf("not a vowel %c",a);
}
