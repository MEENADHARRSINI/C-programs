/*
program 176
23.08.22
read and display a text character by character
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i;
	for (i=0,scanf("%c",&a[i]);a[i]!='$';i++,scanf("%c",&a[i]))
	;
	a[i]='\0';
	for (i=0;a[i]!='\0';i++)
	printf("%c",a[i]);
}
