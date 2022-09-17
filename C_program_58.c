/*
program 57
24.06.22
even or odd with limits
*/
#include<stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a;
	while(c<=b)
	{
		d=c%2;
		if(d==0)
		printf("even %d",c);
		else
		printf("odd %d",c);
		c=c+1;
	}
	
}
