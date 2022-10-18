/*
program 305
05.10.22
count the number of words,lines and characters
*/
#include<stdio.h>
void fnread(char *pa);
void fncount(char *pa,int *pw,int *pl,int *pc);
main()
{
	char a[1000];
	int w,l,c;
	fnread(a);
	fncount(a,&w,&l,&c);
	printf("%d %d %d",w,l,c);
	puts(a);
}
void fnread(char *pa)
{
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
}
void fncount (char *pa,int *pw,int *pl,int *pc)
{
	*pw=*pl=*pc=0;
	for (;*pa;pa++)
	{
		if ((*pa!=' '&&*(pa+1)==' ')||(*pa!='\t'&&*(pa+1)=='\t')||(*pa!='\n'&&*(pa+1)=='\n'))
		(*pw)++;
		else
		if (*pa=='\n')
		(*pl)++;
		else
		(*pc)++;
	}
}

