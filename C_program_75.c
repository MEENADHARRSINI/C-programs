/*
program 75
28.06.22
print the star*
              **
              ***
              ****
              *****
              ******
*/
#include<stdio.h>
main()
{
	int n,c,d;
	n=1;
	c=1;
	while(c<=6)
	{
    	d=1;
    	while(d<=n)
    	{
		    printf("*");
	    	d=d+1;
    	}
    	n=n+1;
    	c=c+1;
    	printf("\n");
    }
}

