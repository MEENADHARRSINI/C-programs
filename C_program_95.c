/*
program 95
06.07.22
read and display a word
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i;
	i=0;
	scanf("%c",&a[i]);
	while (a[i]!=' ')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	printf("%s",a);
}
