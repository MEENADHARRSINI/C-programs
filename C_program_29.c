/*
program 29
20.06.22
two digit or not using if condition
*/
#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a>=10&&a<=99)
	printf("two digit %d",a);
	else
	printf("not two digit %d",a);
}
