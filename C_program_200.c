/*
program 200
26.08.22
count the number of times the pattern exist
*/
#include<stdio.h>
main()
{
	int i,j,k,p;
	char a[1000],b[1000],c[1000];
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (j=0;(b[j]=getchar())!='$';j++)
	;
	b[j]='\0';
	for (i=0,p=0;a[i];i++)
	{
		for (i=0,k=i;b[j]=a[k]&&b[j]!='\0';j++,k++)
		;
		if (b[j]=='\0')
		p++;
	}
	printf("%d",p);
}
