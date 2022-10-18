/*
program 267
22.09.22
read and display the sum of elements of the array using pointers and array
*/
#include<stdio.h>
main()
{
	int i,a[10],s,*pa;
	pa=a;
	for (i=0;i<=9;i++,pa++)
	scanf("%d",pa);
	pa=a;
	for (i=s=0;i<=9;i++,pa++)
	s=s+*pa;
	printf("%d",s);
}
