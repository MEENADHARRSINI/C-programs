/*
program 91
05.07.22
sum of elements of a matrix
*/
#include<stdio.h>
main()
{
	int a[3][3],i,j,s;
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
			s=s+a[i][j];
			j=j+1;
		}
		i=i+1;
	}
	printf("%d",s);
}
