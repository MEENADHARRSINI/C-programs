/*
program 50
22.06.22
word to a given vowel using case method
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{
		case 'a': printf("apple %c",a);
		          break;
		case 'e': printf("elephant %c",a);
		          break;
		case 'i': printf("ice cream %c",a);
		          break;
		case 'o': printf("orange %c",a);
		          break;
		case 'u': printf("umbrella %c",a);
		          break;
		default : printf("not a vowel %c",a);
	}
}
