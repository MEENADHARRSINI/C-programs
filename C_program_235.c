/*
program 235
10.09.22
transpose of a matrix
*/
#include<stdio.h>
void fn1(int a[][3]);
void fn2(int a[][3],int b[][3]);
void fn3(int b[][3]);
main()
{
	int a[3][3],b[3][3],i,j;
	fn1(a);
	fn2 (a,b);
	fn3(b);
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
void fn2(int x[][3],int y[][3])
{
	int i,j;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		y[i][j]=x[j][i];
	}
}
void fn3(int y[][3])
{
	int i,j;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		printf("%d",y[i][j]);
	}
}
