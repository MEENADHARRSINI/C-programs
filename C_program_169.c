/*
program 169
23.08.22
sum of element of matrix
*/
#include<stdio.h>
main()
{
	int a[3][3],i,j,s;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
	    scanf("%d",&a[i][j]);
	}
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		s=s+a[i][j];
	}
	printf("%d",s);
}
