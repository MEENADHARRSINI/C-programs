/*
program 241
12.09.22
read the text and count the number of upper,lower,digit or special character
*/
#include<stdio.h>
void fn1(char a[]);
void fn2(char a[]);
int u,l,d,s;
main()
{
	char a[1000];
	fn1(a);
	fn2(a);
	printf("%d%d%d%d",u,l,d,s);
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
	for (i=u=l=d=s=0;x[i];i++)
	{
		if(x[i]>='A'&&x[i]<='Z')
		u++;
		else
		if(x[i]>'a'&&x[i]<='z')
		l++;
		else
		if(x[i]>='0'&&x[i]<='9')
		d++;
		else
		s++;
	}
}
