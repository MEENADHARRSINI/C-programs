/*
program 192
25.08.22
convert the photon to pascal 
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i,j;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (j=0;a[i];j++,i++)
	{
		if (a[i]=='=')
		{
			b[j]=':';
			j++;
			b[j]='=';
		}
		else
		if (a[i]=='\n')
		{
			b[j]=';';
			j++;
			b[j]='\n';
		}
		else
		b[j]=a[i];
	}
	b[j]='\0';
	puts(b);
}
