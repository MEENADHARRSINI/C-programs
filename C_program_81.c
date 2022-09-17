/*
program 81
01.07.22
read and display the ten numbers using array
*/
#include<stdio.h>
main()
{
	int i,a[10];
	i=0;
	while (i<=9)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	while (i<=9)
	{
		printf("%d",a[i]);
		i=i+1;
	}
}
