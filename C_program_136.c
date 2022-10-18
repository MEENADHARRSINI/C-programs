/*
program 136
15.08.22
average of boys and girls mark
*/
#include<stdio.h>
main()
{
	int p,q,r,s,m,n,c;
	p=m=n=q=0;
	for (scanf("%d",&c);c!=1000;scanf("%d",&c))
	{
		if (c>0)
		{
			p=p+1;
			q=q+c;
		}
		else
		if (c<0)
		{
			n=n+1;
			m=m+c;
		}
		else
		printf("not negative %d",c);
	}
	r=q/p;
	s=m/n;
	printf("%d",r);
	printf("%d",s);
}
