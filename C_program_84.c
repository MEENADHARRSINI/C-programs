/*
program 84
02.07.22
position of biggest of ten number using array
*/
#include<stdio.h>
main()
{
	int a[10],b,c,i;
	i=0;
	b=0;
	while (i<=9)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	b=0;
	while (i<=9)
	{
		if (a[i]>b)	
		{
			b=a[i];
			c=i;
    	}
			i=i+1;
    }
		printf("%d",b);
		printf("%d",c);
	
}
 
