/*
program 86
02.07.22
interchanged position of biggest of smallest of ten numbers 
*/
#include<stdio.h>
main()
{
	int a[10],b,c,i,p1,p2;
	i=0;
	b=0;
	c=999;
	while (i<=9)
	{
	   scanf("%d",&a[i]);
	   i=i+1;
    }
    i=0;
    b=0;
    c=999;
    while(i<=9)
    {
    	if(a[i]>b)
    	{
    		b=a[i];
    		p1=i;
		}
		else
		if(a[i]<c)
		{
			c=a[i];
			p2=i;
		}
		i=i+1;
	}
	a[p2]=b;
	a[p1]=c;
	i=0;
	while (i<=9)
	{
		printf("%d,",a[i]);
		i=i+1;
	}
}
