/*
program 57
24.06.22
number between two limits 
*/
#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a;
	while(c<=b)
	{ 
    	printf("%d",c);
    	c=c+1;
	}
}
