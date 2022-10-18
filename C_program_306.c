/*
program 306
05.10.22
read the text and copy it to another array
*/
#include<stdio.h>
void fnread(char *pa);
void fncopy(char *pa,char *pb);
main()
{
	char a[1000],b[1000];
	fnread(a);
	fncopy(a,b);
	printf("%s",b);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
} 
void fncopy(char *pa,char *pb)
{
	for (;*pa;pa++,pb++)
	*pb=*pa;
	*pb='\0';
}
 
