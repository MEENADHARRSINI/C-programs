/*
program 135
15.08.22
sum of positive,negative,zero
*/
#include<stdio.h>
main()
{
	int p,n,c;
	p=n=c=0;
	for (scanf("%d",&c);c!=1000;scanf("%d",&c))
	{
		if (c>0)
		p=p+c;
		else
		if (c<0)
		n=n+c;
		else
		printf("%not negative %d",c);
	}
	printf("%d",p);
	printf("%d",n);
}
