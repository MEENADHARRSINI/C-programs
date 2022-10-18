/*
program 299
04.10.22
read and display ten numbers
*/
#include<stdio.h>
void fn1(int *pa);
void fn2(int *pa);
main()
{
	int a[10];
	fn1(a);
	fn2(a);
}
void fn1(int *pa)
{
	int i;
	for (i=0;i<=9;i++,pa++)
	scanf("%d",pa);
}
void fn2(int *pa)
{
	int i;
	for (i=0;i<=9;i++,pa++)
	printf("%d",*pa);
}

