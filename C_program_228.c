/*
program 228
05.09.22
leap year or not using function
*/
#include<stdio.h>
void leapornot(int);
main()
{
	int a,c;
	scanf("%d",&a);
	leapornot(a);
}
void leapornot(int a)
{
	int c;
	c=a%4;
	if (c==0)
	printf("leap year %d",a);
	else
	printf("not leap year %d",a);
}
