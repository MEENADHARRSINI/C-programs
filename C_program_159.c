/*
program 159
19.08.22
read and display ten numbers using array
*/
#include<stdio.h>
main()
{
	int i,a[10];
	for (i=0;i<=9;i++)
	scanf("%d",&a[i]);
	for (i=0;i<=9;i++)
	printf("%d",a[i]);
}
