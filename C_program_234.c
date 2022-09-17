/*
program 234
10.09.22
read and display a 3 by 3 matrix
*/
#include<stdio.h>
void fn1(int a[][3]);
void fn2(int a[][3]);
main()
{
	int a[3][3],i,j;
	fn1(a);
	fn2(a);
}
void fn1(int x[][3])
{
	int i,j;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		scanf("%d",&x[i][j]);
	}
}
void fn2(int x[][3])
{
	int i,j;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		printf("%d",x[i][j]);
	}
}
