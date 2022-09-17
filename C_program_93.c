/*
program 93
05.07.22
sum of two matrix
*/
#include<stdio.h>
main()
{
	int a[3][3],b[3][3],i,j,s,c[3][3];
	i=0;
	while (i<=2)
	{
		j=0;
		while (j<=2)
		{
			scanf("%d",&a[i][j]);
			j=j+1;
		}
		i=i+1;
	}
	i=0;
	while (i<=2)
	{
		j=0;
		while (j<=2)
		{
			scanf("%d",&b[i][j]);
			j=j+1;
		}
		i=i+1;
	}
	i=0;
	while (i<=2)
	{
		j=0;
		while(j<=2)
		{
			c[i][j]=a[i][j]+b[i][j];
			j=j+1;
		}
		i=i+1;
	}
	i=0;
	while (i<=2)
	{
		j=0;
		while (j<=2)
		{
			printf("%d",c[i][j]);
			j=j+1;
		}
		i=i+1;
	}
}
