/*
program 101
06.07.22
number of lines and sentences
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i,l,s;
	i=0;
	l=s=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	l=s=0;
	while (a[i]!='\0')
	{
		if (a[i]=='\n')
		l=l+1;
		else 
		if (a[i]=='.')
		s=s+1;
		i=i+1;
	}
	printf("%d",l);
	printf("%d",s);
	printf("%s",a);
	
}
