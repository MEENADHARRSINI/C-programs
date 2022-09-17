/*
program 197
25.08.22
display the nth line 
*/
#include<stdio.h>
main()
{
	int i,j,k,n;
	char a[1000],c[1000];
	int b[100];
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (j=0;a[i];i++)
	{
		if (a[i]=='\n')
		{
			b[j]=i+1;
			j++;
		}
	}
	b[j]=-1;
	for (scanf("%d",&n),j=0;b[j]!=-1;j++)
	printf("%d",b[j]);
	b[j]=-1;
	for (k=0,i=b[n-1];a[i]!='\n';k++,i++)
	c[k]=a[i];
	c[k]='\n';
	for (k=0;c[k]!='\n';k++)
	printf("%c",c[k]);
}
