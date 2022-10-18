/*
program 270
23.09.22
read the text and count the number of vowel and consonants
*/
#include<stdio.h>
main()
{
	char a[1000],*pa;
	int v,c;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	for (v=c=0;*pa;pa++)
	if (*pa=='a'||*pa=='e'||*pa=='i'||*pa=='o'||*pa=='u')
	v++;
	else
	c++;
	printf("%d",v);
	printf("%d",c);
	printf("%s",a);
}
