/*
program 65
25.06.22
character other than dollar
*/
#include<stdio.h>
main()
{
	char c;
	scanf("%c",&c);
	while(c!='$')
	{
		printf("%c",c);
		scanf("%c",&c);
	}
}
