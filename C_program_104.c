/*
program 104
07.07.22
read the text and copy the text in next array
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
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
		b[i]=a[i];
		i=i+1;
	 } 
	 b[i]='\0';
	 printf("%s",&b);
	
}
