/*
program 99
06.07.22
read the text and count the vowel and consonant
*/
#include<stdio.h>
main()
{
	int i,v,c;
	char a[1000];
	i=0;
	v=0;
	c=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	i=0;
	v=0;
	c=0;
	while (a[i]!='\0')
	{
		if (a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u')
		v=v+1;
		else
		c=c+1;
		i=i+1;
	}
	printf("%d",v);
	printf("%d",c);
	printf("%s",a);
}
