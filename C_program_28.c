/*
program 28
28.06.22
single digit or not using if condition 
*/
#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a>=0&&a<=9)
	printf("single digit %d",a);
	else
	printf("not single digit %d",a);
}
