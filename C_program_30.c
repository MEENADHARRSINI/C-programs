/*
program 30
28.06.22
single,two,three or four using if condition
*/
#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a>=0&&a<=9)
	printf("single digit %d",a);
	else
	if(a>=10&&a<=99)
	printf("two digit %d",a);
	else
	if(a>=100&&a<=999)
	printf("three digit %d",a);
	else
	if(a>=1000&&a<=9999)
	printf("four digit %d",a);
	else
	printf("not four digit %d",a);
}
