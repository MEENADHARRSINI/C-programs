/*
program 202
26.08.22
read the pattern and copy it to another array by replacing the pattern
*/
#include<stdio.h>
main()
{
	int i,j,k,l,m;
	char a[1000],b[1000],c[1000],d[1000];
	for (i=0;(a[i]=getchar())!='$';i++)
	;
	a[i]='\0';
	for (j=0;(b[j]=getchar())!='$';j++)
	;
	b[j]='\0';
	for (k=0;(c[k]=getchar())!='$';k++)
	;
	c[k]='\0';
	for (i=m=0;a[i]!='\0';)
	{
		for (j=0,k=i;b[j]==a[k]&&b[j]!='\0';k++,j++)
		;
		if (b[j]=='\0')
		{
			for (l=0,i=k;c[l]!='\0';l++)
			{
				d[m]=c[l];
				m++;
			}
		}
		else
		{
			d[m]=a[i];
			m++;
			i++;
		}
	}
	d[m]='\0';
	printf("%s",d);
}
