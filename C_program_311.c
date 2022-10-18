/*
program 311
06.10.22
delete the comma
*/
#include<stdio.h>
void fnread(char *pa);
void fndelete(char *pa,char *pb);
main()
{
	char a[1000],b[1000];
	fnread(a);
	fndelete(a,b);
	puts(b);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fndelete(char *pa, char *pb)
{
	for (;*pa;)
	if (*pa==',')
	pa++;
	else
	*pb++=*pa++;
	*pb='\0';
}
