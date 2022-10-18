/*
program 266
22.09.22
read and display ten numbers using pointers and array
*/
#include<stdio.h>
main()
{
	int a[10],i,*pa;
	pa=&a[0];
	for (i=0,*pa=10;i<=9;i++,pa++)
	scanf("%d",pa);
	pa=a;
	for (i=0;i<=9;i++,pa++)
	printf("%d",*pa);
}
