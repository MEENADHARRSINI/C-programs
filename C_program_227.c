/*
program 227
05.09.22
even or odd using void function
*/
#include<stdio.h>
void evenorodd(int);
main()
{
	int a;
	scanf("%d",&a);
	evenorodd (a);
}
void evenorodd(int a)
{
	int c;
	c=a%2;
	if (c==0)
	printf("even %d",a);
	else
	printf("odd %d",a);
}
