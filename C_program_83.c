/*
program 83
02.07.22
biggest of ten numbers using array
*/
#include<stdio.h>
main()
{
	int a[10], b ,i;
	i=0;
	b=0;
	while (i<10)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	b=0;
	while (i<10)
	{
		if (a[i]>b)
		b=a[i];
		i=i+1;
	}
	printf("%d",b);
}
