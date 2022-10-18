/*
program 272
23.09.22
read the text and count the number of word,lines and characters
*/
#include<stdio.h>
main()
{
	char a[1000],*pa;
	int w,l,c,i;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	for (w=l=c=0;*pa;pa++)
	{
		if ((*pa!=' '&&*(pa+1)==' ')||(*pa!='\n'&&*(pa+1)=='\n')||(*pa!='\t'&&*(pa+1)=='\t'))
		w++;
		else
		if (*pa=='\n')
		l++;
		else
		c++;
	}
	printf("%d",w);
	printf("%d",l);
	printf("%d",c);
	printf("%s",a);
}
