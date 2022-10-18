/*
program 302
04.10.22
read and display a text
*/
#include<stdio.h>
void fnread(char *pa);
void fndisplay(char *pa);
main()
{
	char a[1000];
	fnread(a);
	fndisplay(a);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fndisplay(char *pa)
{
	for (;*pa;pa++)
	printf("%c",*pa);
}
