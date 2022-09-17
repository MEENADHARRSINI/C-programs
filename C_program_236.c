/*
program 236
10.09.22
sum of two matrix
*/
#include<stdio.h>
void fn1(int x[][3]);
void fn2(int x[][3],int y[][3],int z[][3]);
void fn3(int z[][3]);
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	fn1(a);
	fn1(b);
	fn2(a,b,c);
	fn3(c);
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
void fn2(int x[][3],int y[][3],int z[][3])
{
	int i,j;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		z[i][j]=x[i][j]+y[i][j];
	}
}
void fn3(int z[][3])
{
	int i,j;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		printf("%d",z[i][j]);
	}
}
