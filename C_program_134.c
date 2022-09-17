/*
program 134
13.08.22
read and display the number other than 1000 and count the number of positive, negative, zero
*/
#include<stdio.h>
main()
{
	int c,p,n,z;
	p=n=z=0;
	for (scanf("%d",&c);c!=1000;scanf("%d",&c))
	{
		if (c>0)
		p++;
		else
		if (c<0)
		n++;
		else
		z++;
	}
	printf("%d",p);
	printf("%d",n);
	printf("%d",z);
}
