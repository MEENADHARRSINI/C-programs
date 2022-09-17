/*
program 103
07.07.22
count the number of word, line, character
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i,w,l,c;
	i=0;
	w=l=c=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	w=l=c=0;
	while (a[i]!='\0')
	{
		if ((a[i]!=' ')&& a[i+1]==' '||(a[i]!='\n'&& a[i+1]=='\n')||(a[i]!='\t' && a[i+1]=='\t'))
		w=w+1;
		else 
		if (a[i]=='\n')
		l=l+1;
		else
		c=c+1;
		i=i+1;
	}
	printf("%d",w);
	printf("%d",l);
	printf("%d",c);
	printf("%c",a);
}
