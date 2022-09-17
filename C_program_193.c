/*
program 193
25.08.22
convert pascal to photon
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i,j;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (i=j=0;a[i];)
	{
		if (a[i]==':')
		i++;
		else
		if (a[i]=='\n')
		b[j++]=a[i++];
	}
	b[j]='\0';
	puts(b);
}
