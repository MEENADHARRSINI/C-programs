/*
program 242
12.09.22
read the text and count the number of words,lines and characters
*/
#include<stdio.h>
void fn1(char a[]);
void fn2(char a[]);
int w,l,c;
main()
{
	char a[1000];
	fn1(a);
	fn2(a);
	printf("%d%d%d",w,l,c);
	puts(a);
}
void fn1(char x[])
{
	int i;
	for (i=0;(x[i]=getchar())!='$';i++)
	;
	x[i]='\0';
}
void fn2(char x[])
{
	int i;
	for (i=0;x[i];i++)
	{
		if ((x[i]!=' '&&x[i+1]==' ')||(x[i]!='\t'&&x[i+1]=='\t')||(x[i]!='\n'&&x[i+1]=='\n'))
		w++;
		else
		if (x[i]=='\n')
		l++;
		else
		c++;
	}
}

