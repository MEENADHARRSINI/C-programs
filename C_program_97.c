/*
program 97
06.07.22
read and display a sentence using \n
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i;
	scanf("%c",&a[i]);
	while (a[i]!='\n')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	printf("%s",a);
 } 
