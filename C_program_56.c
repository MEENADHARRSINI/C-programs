/*
program 56
24.06.22
leap year or not using while loop
*/
#include<stdio.h>
main()
{
	int c,a;
	c=1000;
	while(c<=3000)
	{
		a=c%4;
		if(a==0)
		    printf("leap year %d",c);
		else
	    	printf("not leap year %d",c);
		c=c+1;
	}
}
