/*
program 240
12.09.22
read the text and count the number of vowel and consonant
*/
#include<stdio.h>
void fn1(char a[]);
void fn2(char a[]);
int v,c;
main()
{
	char a[1000];
	fn1(a);
	fn2(a);
	printf("%d%d",v,c);
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
	for (i=v=c=0;x[i];i++)
	{
		if (x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
		v++;
		else
		c++;
    }
}
