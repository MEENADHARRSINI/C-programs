/*
program 174
23.08.22
read and display a sentence 
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i;
	for (i=0,scanf("%c",&a[i]);a[i]!='.';)
	{
		i++;
		scanf("%c",&a[i]);
	}
	printf("%s",a);
}
