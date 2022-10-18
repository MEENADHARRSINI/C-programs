/*
program 192
25.08.22
convert the fortron to pascal 
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i,j;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (i=j=0;a[i];j++,i++)
	{
		if (a[i]=='=')
		{
			b[j]=':';
			j=j+1;
			b[j]='=';
		}
		else
		if (a[i]=='\n')
		{
			b[j]=';';
			j=j+1;
			b[j]='\n';
		}
		else
		b[j]=a[i];
	}
	b[j]='\0';
	puts(b);
}
