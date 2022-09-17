/*
program 185
24.08.22
read the text and copy the n characters from mth positon
*/
#include<stdio.h>
main()
{
	char a[1000],b[1000];
	int i,j,m,n;
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (scanf("%d %d",&m,&n),i=m,j=0;j<=n;j++,i++)
	b[j]=a[i];
	b[j]='\0';
	printf("%s",b);
}
