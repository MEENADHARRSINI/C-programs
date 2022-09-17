/*
program 69
27.06.22
mean of ten numbers 
*/
#include<stdio.h>
main()
{
	int a,c,s,b;
	c=1;
    while (c<=10)
	{
	    scanf("%d",&a);
	  	s=s+a;
		c=c+1;
	}		
		b=s/a;
		printf("%d",b);
}
