/*
program 181
24.08.22
number of word,line and character
*/
#include<stdio.h>
main()
{
	int i,w,l,c;
	char a[1000];
	for (i=w=l=c=0,a[i]=getchar();a[i]!='$';a[++i]=getchar())
	;
	a[i]='\0';
	for (i=w=l=c=0;a[i]!='\0';i++)
	{
		if ((a[i]!=' '&&a[i+1]==' ')||(a[i]!='\t'&&a[i+1]=='\t')||(a[i]!='\n'&&a[i+1]=='\n'))
		w++;
		else
		if (a[i]=='\n')
		l++;
		else
		c++;
	}
	printf("%d",w);
	printf("%d",l);
	printf("%d",c);
	printf("%s",a);
}
