/*
program 193
25.08.22
convert pascal to fortron
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
		i=i+1;
		else
		if (a[i]==';')
		i=i+1;
		else
		{
			b[j]=a[i];
			j=j+1;
			i=i+1;
		}
	}
	b[j]='\0';
	printf("%s",b);
}
