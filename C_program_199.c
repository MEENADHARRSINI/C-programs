/*
program 199
26.08.22
given word or pattern is available in the text or not
*/
#include<stdio.h>
main()
{
	int i,j,k;
	char a[1000],b[1000];
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (j=0;(b[j]=getchar())!='$';j++)
	;
	b[j]='\0';
	for (i=0;a[i];)
	{
		for (j=0,k=i;b[j]==a[k]&&b[j]!='\0';j++,k++)
		;
		if (b[j]=='\0')
		{
			printf("exist %c",b[j]);
			return 0;
		}
		else
		i=i+1;
	}
	printf("not exist %c",b[j]);
}
