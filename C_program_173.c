/*
program 173
23.08.22
read and display a word
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i;
	for (i=0,scanf("%c",&a[i]);a[i]!=' ';)
	{
		i++;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	printf("%s",a);
}
