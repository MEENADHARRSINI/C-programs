/*
program 179
23.08.22
count the number of lines and sentences
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i,l,s;
	for (i=l=s=0,a[i]=getchar();a[i]!='$';a[++i]=getchar())
	;
	a[i]='\0';
	for (i=l=s=0;a[i]!='\0';i++)
	{
		if (a[i]=='\n')
		l++;
		else
		if (a[i]=='.')
		s++;
	}
	printf("%d",l);
	printf("%d",s);
	printf("%s",a);
}
