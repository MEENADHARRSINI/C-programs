/*
program 180
23.08.22
number of word in a text
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i,w;
	for (i=w=0,a[i]=getchar();a[i]!='$';a[++i]=getchar())
	;
	for (i=w=0;a[i]!='\0';i++)
	{
		if ((a[i]!=' '&&a[i+1]==' ')||(a[i]!='\t'&&a[i+1]=='\t')||(a[i]!='\n'&&a[i+1]=='\n'))
		w++;
	}
	printf("%d",w);
	printf("%s",a);
}
