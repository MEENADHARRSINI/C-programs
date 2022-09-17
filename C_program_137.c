/*
program 137
15.08.22
read and display the character other than dollar
*/
#include<stdio.h>
main()
{
	char a;
	for (a=getchar();a!='$';a=getchar())
	putchar(a);
}
