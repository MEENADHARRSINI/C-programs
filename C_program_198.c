/*
program 198
25.08.22
display the lines from nth line to mth line
*/
#include<stdio.h>
main()
{
	int i,j,k,n,m;
	char a[1000],c[1000];
	int b[1000];
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
	b[j]='-1';
	for (scanf("%d %d",&n,&m),k=0,i=b[n-1],j=b[m];i<j;i++)
	{
		c[k]=a[i];
		k++;
	}
	c[k]='\0';
	for (k=0;c[k];k++)
	putchar(c[k]);
} 
