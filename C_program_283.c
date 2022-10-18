/*
program 283
26.09.22
print the starting address of each line
*/
#include<stdio.h>
main()
{
	char a[1000],*pa,*b[1000];
	int j;
	pa=a;
	for (;(*pa=getchar())!='$';pa++)
	;
	*pa='\0';
	pa=a;
	j=0;
	for (b[j]=a;*pa;pa++)
	{
		if (*pa=='\n')
		{
			b[j]=pa+1;
			j++;
		}
	}
	b[j]=NULL;
	for (j=0;b[j]!=NULL;j++)
	printf("%u",b[j]);
}
