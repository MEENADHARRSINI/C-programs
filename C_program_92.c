/*
program 92
05.07.22
biggest element of matrix
*/
#include<stdio.h>
main()
{
	int a[3][3],i,j,b;
	i=0;
	b=0;
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
	b=0;
	while (i<=2)
	{
		j=0;
		while (j<=2)
		{
			if (a[i][j]>b)
			b=a[i][j];
			j=j+1;
		}
		i=i+1;
	}
	printf("%d",b);
}
