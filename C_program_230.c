/*
program 230
06.09.22
read and display ten numbers and print it one by one using function
*/
#include<stdio.h>
void fn1(int x[]);
void fn2(int x[]);
main()
{
	int a[10],i;
	fn1(a);
	fn2(a);
}
void fn1(int x[])
{
	int i;
	for (i=0;i<=9;i++)
	scanf("%d",&x[i]);
}
void fn2(int x[])
{
	int i;
	for (i=0;i<=9;i++)
	printf("%d \n",x[i]);
}
