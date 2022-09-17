/*
program 87
04.07.22
second biggest number
*/
#include<stdio.h>
main()
{
	int a[10],b,c,i;
	i=0;
	b=0;
	c=0;
	while (i<=9)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	b=0;
	c=0;
	while(i<=9)
	{
		if(a[i]>b)
		{
			b=a[i];
		}
		i=i+1;
	}
	i=0;
	c=0;
	while (i<=9)
	{
		if(a[i]!=b)
		{
			if (a[i]>c)
			{
				c=a[i];
			}
		}
		i=i+1;
	}
	printf("%d",c);
}
