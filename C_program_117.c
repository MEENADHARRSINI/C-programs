/*
program 117
15.07.22
print the starting position of next line
*/
#include<stdio.h>
main()
{
	int i;
	char a[1000];
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
		if (a[i]=='\n')
		printf("%d",i+1);
		i=i+1;
	}
}
