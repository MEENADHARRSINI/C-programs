/*
program 268
22.09.22
biggest element of array using pointers and arrays
*/
#include<stdio.h>
main()
{
	int i,b,a[10],*pa;
	pa=a;
	for (i=0;i<=9;i++,pa++)
	scanf("%d",pa);
	pa=a;
	for(i=0;i<=9;i++,pa++)
	b=*pa>b?*pa:b;
	printf("%d",b);
}
