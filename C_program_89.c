/*
program 89
04.07.22
three by three matrix
*/
#include<stdio.h>
main()
{
	int a[3][3],i,j;
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
			printf("%d",a[i][j]);
			j=j+1;
		}
		i=i+1;
	}
}
