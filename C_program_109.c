/*
program 109
12.07.22
read the text and copy it to another array by flipping upper to lower and vice versa
*/
#include<stdio.h>
main()
{
	int i;
	char a[1000],b[1000];
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
		if(a[i]>=65 && a[i]<=90)
		b[i]=a[i]+32;
		else
		if(a[i]>=97&&a[i]<=122)
		b[i]=a[i]-32;
		else
		b[i]=a[i];
		i=i+1;
	}
	b[i]='\0';
	printf("%s",b);
}
