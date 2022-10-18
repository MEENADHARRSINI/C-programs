/*
program 98
06.07.22
read and display a text
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i;
	i=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	while (a[i]!='\0')
	{
		printf("%c",a[i]);
		i=i+1;
	}
}
