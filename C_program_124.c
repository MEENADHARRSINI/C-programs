/*
program 124
12.08.22
read the pattern and copy it to another array by replacing the pattern
*/
#include<stdio.h>
main()
{
	int i,j,k,l,m;
	char a[1000],b[1000],c[1000],d[1000];
	i=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	j=0;
	scanf("%c",&b[j]);
	while (b[j]!='$')
	{
		j=j+1;
		scanf("%c",&b[j]);
	}
	b[j]='\0';
	k=0;
	scanf("%c",&c[k]);
	while (c[k]!='$')
	{
		k=k+1;
		scanf("%c",&c[k]);
	}
	c[k]='\0';
	//printf("%s %s %s",a,b,c);
	i=0;
	m=0;
	while (a[i]!='\0')
	{
		j=0;
		k=i;
		//l=i;
		while (b[j]==a[k]&&b[j]!='\0')
		{
			j=j+1;
			k=k+1;
		}
		if (b[j]=='\0')
		{
			i=k;
			l=0;
			while (c[l]!='\0')
			{
				d[m]=c[l];
				m=m+1;
				l=l+1;
			}
		}
		    else
		    {
			    d[m]=a[i];
			    m=m+1;
			    i=i+1;
	    	}
	}
	d[m]='\0';
	printf("%s",d);
}
