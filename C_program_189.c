/*
program 189
24.08.22
read the text and copy it to another array by skipping the comma
*/
#include<stdio.h>
main()
{
	int i,j;
	char a[1000],b[1000];
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (i=j=0;a[i];)
	{
		if (a[i]==',')
		i++;
		else
		b[j++]=a[i++];
	}
	b[j]='\0';
	puts(b);
}
