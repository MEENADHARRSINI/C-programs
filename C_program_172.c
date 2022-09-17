/*
program 172
23.08.22
product of two matrix
*/
#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		scanf("%d",&a[i][j]);
	}
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		scanf("%d",&b[i][j]);
	}
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		c[i][j]=0;
		{
			for (k=0;k<=2;k++)
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	for (i=0;i<=2;i++)
	printf("%d",c[i][j]);
}
	
