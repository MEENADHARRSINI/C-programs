/*
program 310
06.10.22
comma to semicolon
*/
#include<stdio.h>
void fnread(char *pa);
void fnconvert(char *pa,char *pb);
main()
{
	char a[1000],b[1000];
	fnread(a);
	fnconvert(a,b);
	puts(b);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fnconvert(char *pa,char *pb)
{
	for (;*pa;pa++,pb++)
	*pb=*pa==','?';':*pa;
	*pb='\0';
}
