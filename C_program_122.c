/*
program 122
04.08.22
count the number of time the pattern exist
*/
#include<stdio.h>
main()
{
	int i,j,k,p;
	char a[1000],b[1000];
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
	i=0;
	p=0;
	while (a[i]!='\0')
	{
		j=0;
		k=i;
		while (b[j]==a[k]&&b[j]!='\0')
		{
			j=j+1;
			k=k+1;
		}
		if (b[j]=='\0')
        {
        	p=p+1;
		}
		i=i+1;
	}
	printf("%d",p); 
}
