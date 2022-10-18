/*
program 88
04.07.22
interchange second biggest and second smallest
*/
#include<stdio.h>
main()
{
	int a[10],b,c,d,e,f,i,p1,p2;
	i=0;
	b=0;
	c=0;
	d=999;
	e=999;
	while (i<=9)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	b=0;
	c=0;
	d=999;
	e=999;
	while (i<=9)
	{
		if(a[i]>b)
		{
			b=a[i];
		}
		else
		if(a[i]<d)
		{
			d=a[i];
		}
	i=i+1;
    }
    printf("%d %d \n",b,d);
    i=0;
    c=a[i];
    while (i<=9)
    {
    	if (a[i]!=b)
    	{
    		if(a[i]>c)
    		{
    			c=a[i];
    			p1=i;
			}
		}
		i=i+1;
	}
		i=0;
		e=b;
		while (i<=9)
		{
			if (a[i]!=d)
			{
				if (a[i]<e)
				{
					e=a[i];
					p2=i;
				}
			}
			i=i+1;
		}
		printf("%d %d \n",c,e);
		a[p1]=e;
		a[p2]=c;
		i=0;
		while (i<=9)
		{
			printf("%d",a[i]);
        	i=i+1;
        }
	}
