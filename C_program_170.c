/*
program 170
23.08.22
biggest element of a matrix
*/
#include<stdio.h>
main()
{
	int a[3][3],i,j,b,c;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		scanf("%d",&a[i][j]);
	}
	for (i=0,b=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		b=a[i][j]>b?a[i][j]:b;
	}
	printf("%d",b);
}
