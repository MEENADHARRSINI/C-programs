/*
program 102
07.07.22
count the number of word in a text
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i, w;
	i=0;
	w=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	w=0;
	while (a[i]!='\0')
	{
		if ((a[i]!=' '&&a[i+1]==' ')||(a[i]!='\n'&& a[i+1]=='\n')||(a[i]!='\t'&&a[i+1]=='\t'))
		w=w+1;
		i=i+1;
	}
	printf("%d",w);
	printf("%s",a);
}
