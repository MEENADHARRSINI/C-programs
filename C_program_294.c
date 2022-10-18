/*
program 294
01.10.22
store the value of a and b from a void function
*/
#include<stdio.h>
main()
{
	int a,b;
	set(&a,&b);
	printf("%d %d",a,b);
}
void set(int *pa,int *pb)
{
	*pa=10;
	*pb=20;
}
