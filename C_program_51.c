/*
program 50
23.06.22
word to a lower and upper case using case method
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{
		case 'A':
		case 'a':
			printf("apple %c",a);
			break;
		case 'E':
		case 'e':
			printf("elephant %c",a);
			break;
		case 'I':
		case 'i':
			printf("ice cream %c",a);
			break;
		case 'O':
		case 'o':
			printf("orange %c",a);
			break;
		case 'U':
		case 'u':
			printf("umbrella %c",a);
			break;
		default: printf("not a vowel %c",a);
	}
}
