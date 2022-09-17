/*
program 107
11.07.22
read the text and copy the n characetrs from mth position
*/
#include<stdio.h>
main()
{
	int i,j,m,n;
	char a[1000],b [1000];
	i=0;
	scanf("%c",&a[i]);
	while (a[i]!='$')
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	a[i]='\0';
	scanf("%d",&m);
	scanf("%d",&n);
	i=m;
	j=0;
	while(j<=n)
	{
		b[j]=a[i];
		j=j+1;
		i=i+1;
	}
	b[j]='\0';
	printf("%s",b);
}
