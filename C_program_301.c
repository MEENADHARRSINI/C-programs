/*
program 301
04.10.22
biggest of ten numbers
*/
#include<stdio.h>
void fn1(int *pa);
int fn2(int *pa);
main()
{
	int a[10],x;
	fn1(a);
	x=fn2(a);
	printf("%d",x);
}
void fn1(int *pa)
{
	int i;
	for (i=0;i<10;i++,pa++)
	scanf("%d",pa);
}
int fn2(int *pa)
{
	int i,b;
	for (i=b=0;i<10;i++,pa++)
	b=*pa>b?*pa:b;
	return b;
}
