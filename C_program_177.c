/*
program 177
23.08.22
count the number of vowel and consonant
*/
#include<stdio.h>
main()
{
	char a[1000];
	int i,v,c;
	for (i=0,a[i]=getchar();a[i]!='$';i++,a[i]=getchar())
	;
	a[i]='\0';
	for (i=v=c=0;a[i]!='\0';i++)
	{
		if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		v++;
		else
		c++;
	}
	printf("%d",v);
	printf("%d",c);
	printf("%s",a);
}
