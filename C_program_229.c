/*
program 229
05.09.22
read ten numbers in the array and display using function
*/
#include<stdio.h>
void fn(int x[]);
main()
{
	int a[10],i;
	fn (a);
	for (i=0;i<=9;i++)
	printf("%d \n",a[i]);
}
void fn(int x[])
{
	int i;
	for (i=0;i<=9;i++)
	scanf("%d",&x[i]);
}
